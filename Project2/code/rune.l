/*rune.l*/
%{
#include <stdio.h>
void yyerror(char *);
%}

%option yylineno
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
doFlip                      return DO_FLIP;
takeOff                     return TAKEOFF;
land                        return LAND;
emergency                   return EMERGENCY;
up                          return UP;
down                        return DOWN;
right                       return RIGHT;
left                        return LEFT;
forward                     return FORWARD;
backward                    return BACKWARD;
rotateClockwise             return ROTATE_CLOCKWISE;
setSpeed                    return SET_SPEED;
getSpeed                    return GET_SPEED;
getBattery                  return GET_BATTERY;
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
\%empty                     return EMPTY;

%% 
int yywrap(void) { return 1; }
