parser: y.tab.c lex.yy.c
	gcc -o parser y.tab.c
y.tab.c: CS315f20_team33.yacc
	yacc CS315f20_team33.yacc
lex.yy.c: CS315f20_team33.lex
	lex CS315f20_team33.lex
