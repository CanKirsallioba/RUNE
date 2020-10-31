/*rune.y*/
%{
    #include <stdio.h>
    #include <stdlib.h>
    int yylex(void);
    extern int yylineno;
    void yyerror(char* s);
%}
%token INT_TYPE FLOAT_TYPE CHAR_TYPE BOOLEAN_TYPE VOID_TYPE RETURN INT FLOAT CHAR BOOLEAN
%token IF ELSE WHILE FOR SCAN PRINT READ_INCLINATION READ_ALTITUDE READ_TEMPERATURE
%token READ_ACCELERATION SET_CAMERA_STATE TAKE_PICTURE READ_TIMESTAMP CONNECT_TO_COMPUTER
%token DO_FLIP TAKEOFF LAND EMERGENCY UP DOWN RIGHT LEFT FORWARD BACKWARD ROTATE_CLOCKWISE SET_SPEED GET_SPEED GET_BATTERY
%token IDENTIFIER COMMENT ASSIGNMENT_OPERATOR LP RP LCB RCB GREATER_THAN SMALLER_THAN
%token GREATER_OR_EQUAL SMALLER_OR_EQUAL PLUS MINUS MULTIPLICATION DIVISION REMAINDER
%token EXPONENTIATION AND OR EQUAL NOT_EQUAL SEMICOLON COMMA QUOTATION_MARK EXCLAMATION_MARK
%token DOT APOSTROPHE EMPTY    
%%

start: statement_list;

statement_list: statement
                | statement_list  statement
                | EMPTY;

statement : COMMENT
            | expression SEMICOLON
            | loop
            | if
            | function_definition
            | assignment SEMICOLON;

data_type : INT_TYPE
            | FLOAT_TYPE
            | CHAR_TYPE
            | BOOLEAN_TYPE; 

loop : while_loop
       | for_loop;                          


while_loop : WHILE LP logical_expression RP LCB statement_list RCB;

for_loop : FOR LP for_loop_expression RP LCB statement_list RCB;

for_loop_expression : assignment SEMICOLON BOOLEAN SEMICOLON assignment;

if : IF LP logical_expression RP LCB statement_list RCB else 
        | IF LP logical_expression RP LCB statement_list RCB;

else : ELSE LCB statement_list RCB;

expression : expression PLUS expression2
            | expression MINUS expression2
            | expression2;

expression2 : expression2 MULTIPLICATION expression3
            | expression2 DIVISION expression3
            | expression2 REMAINDER expression3
            | expression3;

expression3 : expression4 EXPONENTIATION expression3
            | expression4;
                
expression4 : LP expression RP
            | expr;
                
expr : INT
     | FLOAT
     | CHAR
     | function_call 
     | logical_expression
     | IDENTIFIER;


function_call : IDENTIFIER LP function_call_argument_list RP
            | IDENTIFIER LP RP
            | primitive_function_call
            | extra_function_call
            | input_statement
            | output_statement;

logical_expression : comparison
                    | basic_equality
                    | logical_expression OR logical_expression2
                    | logical_expression2;
                        
logical_expression2 : logical_expression2 AND BOOLEAN
                    | BOOLEAN;

basic_equality : equality_element equality_operator equality_element;

equality_element : INT
                 | FLOAT
                 | CHAR
                 | IDENTIFIER 
                 | function_call;

equality_operator : EQUAL 
                  | NOT_EQUAL;                    


comparison :  comparison_element comparison_operator comparison_element;

comparison_element : INT
                   | FLOAT
                   | IDENTIFIER 
                   | function_call;               

comparison_operator : GREATER_THAN 
                    | SMALLER_THAN 
                    | GREATER_OR_EQUAL 
                    | SMALLER_OR_EQUAL;

assignment : IDENTIFIER ASSIGNMENT_OPERATOR expression
           | data_type IDENTIFIER ASSIGNMENT_OPERATOR expression;

function_definition : void_with_return
            | void_without_return
            | non_void_func_def
            | only_return_func_def;
                            
void_with_return : VOID_TYPE IDENTIFIER LP function_definition_argument_list RP LCB statement_list void_return_statement RCB
                 | VOID_TYPE IDENTIFIER LP RP LCB statement_list void_return_statement RCB;

void_without_return : VOID_TYPE IDENTIFIER LP function_definition_argument_list RP LCB statement_list RCB
                    | VOID_TYPE IDENTIFIER LP  RP LCB statement_list RCB;

non_void_func_def : data_type IDENTIFIER LP function_definition_argument_list RP LCB statement_list return_statement RCB
                    | data_type IDENTIFIER LP RP LCB statement_list return_statement RCB;

only_return_func_def : data_type IDENTIFIER LP function_definition_argument_list RP LCB return_statement RCB
                    | data_type IDENTIFIER LP RP LCB return_statement RCB;

void_return_statement : RETURN SEMICOLON;

return_statement : RETURN expression SEMICOLON;

function_definition_argument_list : function_definition_argument COMMA function_definition_argument_list
                                       | function_definition_argument
                                       | EMPTY;

function_definition_argument :  INT_TYPE IDENTIFIER
                            | FLOAT_TYPE IDENTIFIER
                            | CHAR_TYPE IDENTIFIER
                            | BOOLEAN_TYPE IDENTIFIER;

function_call_argument_list : function_call_argument COMMA function_call_argument_list
                            | function_call_argument
                            | EMPTY;

function_call_argument : INT
                        | FLOAT
                        | CHAR
                        | BOOLEAN
                        | IDENTIFIER
                        | function_call;

input_statement : SCAN LP RP SEMICOLON;
output_statement : PRINT LP expression RP SEMICOLON;                

primitive_function_call : read_inclination_function
                        | read_altitude_function
                        | read_temperature_function
                        | read_acceleration_function
                        | set_camera_state_function
                        | take_picture_function
                        | read_timestamp_function
                        | connect_to_computer_function;

read_inclination_function : READ_INCLINATION LP RP; 
read_altitude_function : READ_ALTITUDE LP RP; 
read_temperature_function : READ_TEMPERATURE LP RP; 
read_acceleration_function : READ_ACCELERATION LP RP; 
set_camera_state_function : SET_CAMERA_STATE LP BOOLEAN RP; 
take_picture_function : TAKE_PICTURE LP RP; 
read_timestamp_function : READ_TIMESTAMP LP RP; 
connect_to_computer_function : CONNECT_TO_COMPUTER LP RP; 

extra_function_call : do_flip_function
                    | takeoff_function
                    | land_function
                    | emergency_function
                    | up_function
                    | down_function
                    | right_function
                    | left_function
                    | forward_function
                    | backward_function
                    | rotate_clockwise_function
                    | set_speed_function
                    | get_speed_function
                    | get_battery_function;

do_flip_function : DO_FLIP LP CHAR RP;
takeoff_function : TAKEOFF LP RP; 
land_function : LAND LP RP; 
emergency_function : EMERGENCY LP BOOLEAN RP; 
up_function : UP LP INT; 
down_function : DOWN LP INT RP; 
right_function : RIGHT LP INT RP; 
left_function : LEFT LP INT RP; 
forward_function : FORWARD LP INT RP; 
backward_function : BACKWARD LP INT RP;
rotate_clockwise_function : ROTATE_CLOCKWISE LP BOOLEAN COMMA INT RP; 
set_speed_function : SET_SPEED LP INT RP; 
get_speed_function : GET_SPEED LP RP;
get_battery_function : GET_BATTERY LP RP; 

                
%%
#include "lex.yy.c"

void yyerror(char* s) {
    fprintf(stdout, "Syntax error on line %d: %s !\n", yylineno,s);
}


int main() {
    yyparse();
    if (yynerrs == 0) {
	    printf("Input program is valid\n");
	}
    return 0;
}


