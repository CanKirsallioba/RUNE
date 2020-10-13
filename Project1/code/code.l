%option main
digit [0-9]
char [A-Za-z0-9]
%%

[+-]?(digit)+ printf("INT ");
[+-]?(digit)*\.(digit)+ printf("FLOAT ");
digit printf("DIGIT ");

char printf("CHAR ");
TRUE printf("TRUE ");
FALSE printf("FALSE ");

[A-Za-z]+(char)* printf("IDENTIFIER ");

$ printf("COMMENT_SIGN ");
<- printf("ASSIGNMENT_OPERATOR ");


( printf("LP ");
) printf("RP ");
{ printf("LCP ");
} printf("RCP ");

> printf("GREATER_THAN ");
< printf("SMALLER_THAN ");
<= printf("GREATER_OR_EQUAL ");
>= printf("SMALLER_OR_EQUAL ");

+ printf("PLUS ");
- printf("MINUS ");
* printf("MULTIPLICATION ");
/ printf("DIVISION ");
% printf("REMAINDER ");
** printf("EXPONANTIATION ");
&& printf("AND ");
|| printf("OR ");
== printf("EQUAL ");
!= printf("NOT_EQUAL ");
; printf("SEMICOLON");







