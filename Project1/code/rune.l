/*rune.l*/
%option main
digit [0-9]
alphanumeric [A-Za-z0-9]
char '{alphanumeric}'
bool (TRUE|FALSE)
%%
int                         printf("INT_TYPE ");
float                       printf("FLOAT_TYPE ");
char                        printf("CHAR_TYPE ");
boolean                     printf("BOOLEAN_TYPE ");
void                        printf("VOID_TYPE ");
return                      printf("RETURN ");
[+-]?{digit}+               printf("INT ");
[+-]?{digit}*\.{digit}+     printf("FLOAT ");
{char}                      printf("CHAR ");
{bool}                      printf("BOOLEAN ");
if                          printf("IF ");
else                        printf("ELSE ");
while                       printf("WHILE ");
for                         printf("FOR ");
scan                        printf("SCAN ");
print                       printf("PRINT ");
readInclination             printf("READ_INCLINATION ");
readAltitude                printf("READ_ALTITUDE ");
readTemperature             printf("READ_TEMPERATURE ");
readAcceleration            printf("READ_ACCELERATION ");
setCameraState              printf("SET_CAMERA_STATE ");
takePicture                 printf("TAKE_PICTURE ");
readTimestamp               printf("READ_TIMESTAMP ");
connectToComputer           printf("CONNECT_TO_COMPUTER ");
doFlip                      printf("DO_FLIP ");
takeOff                     printf("TAKEOFF ");
land                        printf("LAND ");
emergency                   printf("EMERGENCY ");
up                          printf("UP ");
down                        printf("DOWN ");
right                       printf("RIGHT ");
left                        printf("LEFT ");
forward                     printf("FORWARD ");
backward                    printf("BACKWARD ");
rotateClockwise             printf("ROTATE_CLOCKWISE ");
setSpeed                    printf("SET_SPEED ");
getSpeed                    printf("GET_SPEED ");
getBattery                  printf("GET_BATTERY ");
[A-Za-z]+{alphanumeric}*    printf("IDENTIFIER ");
\$[^\$]*\$                  printf("COMMENT ");
\<\-                        printf("ASSIGNMENT_OPERATOR ");
\(                          printf("LP ");
\)                          printf("RP ");
\{                          printf("LCB ");
\}                          printf("RCB ");
\>                          printf("GREATER_THAN ");
\<                          printf("SMALLER_THAN ");
\>\=                        printf("GREATER_OR_EQUAL ");
\<\=                        printf("SMALLER_OR_EQUAL ");
\+                          printf("PLUS ");
\-                          printf("MINUS ");
\*                          printf("MULTIPLICATION ");
\/                          printf("DIVISION ");
\%                          printf("REMAINDER ");
\*\*                        printf("EXPONANTIATION ");
\&\&                        printf("AND ");
\|\|                        printf("OR ");
\=\=                        printf("EQUAL ");
\!\=                        printf("NOT_EQUAL ");
\;                          printf("SEMICOLON ");
\,                          printf("COMMA ");
\"                          printf("QUOTATION_MARK ");
\!                          printf("EXCLAMATION_MARK ");
\.                          printf("DOT ");
\'                          printf("APOSTROPHE ");
