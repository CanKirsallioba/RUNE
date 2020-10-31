parser: y.tab.c lex.yy.c
	gcc -o parser y.tab.c
y.tab.c: CS315f20_team33.yacc.y
	yacc CS315f20_team33.yacc.y
lex.yy.c: CS315f20_team33.lex.l
	lex CS315f20_team33.lex.l
