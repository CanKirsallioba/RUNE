/*rune.l*/
%option yylineno
%{
#include <stdio.h>
void yyerror(char *);
int lines=0;
%}
digit [0-9]
alphanumeric [A-Za-z0-9]
char '{alphanumeric}'
bool (TRUE|FALSE)
%%
int                         return INT_TYPE;
float                       return FLOAT_TYPE;
char                        return CHAR_TYPE;
boolean                     return BOOLEAN_TYPE;
void                        return VOID_TYPE;
return                      return RETURN;
[+-]?{digit}+               return INT;
[+-]?{digit}*\.{digit}+     return FLOAT;
{char}                      return CHAR;
{bool}                      return BOOLEAN;
if                          return IF;
else                        return ELSE;
while                       return WHILE;
for                         return FOR;
scan                        return SCAN;
print                       return PRINT;
readInclination             return READ_INCLINATION;
readAltitude                return READ_ALTITUDE;
readTemperature             return READ_TEMPERATURE;
readAcceleration            return READ_ACCELERATION;
setCameraState              return SET_CAMERA_STATE;
takePicture                 return TAKE_PICTURE;
readTimestamp               return READ_TIMESTAMP;
connectToComputer           return CONNECT_TO_COMPUTER;
[A-Za-z]+{alphanumeric}*    return IDENTIFIER;
\$[^\$]*\$                  return COMMENT;
\<\-                        return ASSIGNMENT_OPERATOR;
\(                          return LP;
\)                          return RP;
\{                          return LCB;
\}                          return RCB;
\>                          return GREATER_THAN;
\<                          return SMALLER_THAN;
\>\=                        return GREATER_OR_EQUAL;
\<\=                        return SMALLER_OR_EQUAL;
\+                          return PLUS;
\-                          return MINUS;
\*                          return MULTIPLICATION;
\/                          return DIVISION;
\%                          return REMAINDER;
\*\*                        return EXPONENTIATION;
\&\&                        return AND;
\|\|                        return OR;
\=\=                        return EQUAL;
\!\=                        return NOT_EQUAL;
\;                          return SEMICOLON;
\,                          return COMMA;
\"                          return QUOTATION_MARK;
\!                          return EXCLAMATION_MARK;
\.                          return DOT;
\'                          return APOSTROPHE;
\t ;
\n ;

%% 
int yywrap(void) { return 1; }
