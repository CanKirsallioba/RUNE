/*rune.y*/
%{
    int yylex(void);
    extern int yylineno;
    void yyerror(char* s);
}%
%token INT_TYPE FLOAT_TYPE CHAR_TYPE BOOLEAN_TYPE VOID_TYPE RETURN INT FLOAT CHAR BOOLEAN
%token IF ELSE WHILE FOR SCAN PRINT READ_INCLINATION READ_ALTITUDE READ_TEMPERATURE
%token READ_ACCELERATION SET_CAMERA_STATE TAKE_PICTURE READ_TIMESTAMP CONNECT_TO_COMPUTER
%token IDENTIFIER COMMENT ASSIGNMENT_OPERATOR LP RP LCB RCB GREATER_THAN SMALLER_THAN
%token GREATER_OR_EQUAL SMALLER_OR_EQUAL PLUS MINUS MULTIPLICATION DIVISION REMAINDER
%token EXPONENTIATION AND OR EQUAL NOT_EQUAL SEMICOLON COMMA QUOTATION_MARK EXCLAMATION_MARK
%token DOT APOSTROPHE    

%%

start: statement_list

statement_list: statement
                | statement statement_list

statement
                
%%
#include "rune.l"

void yyerror(char* arr) {
    fprintf(stdout, "Syntax error on line %d: %s\n", lineCount,arr);  // Also give the code that the error is originating from
}

main() {
    yyparse();
    if (yynerrs == 0) {
	    printf("Input program is valid\n");
	}
    return 0;
}

