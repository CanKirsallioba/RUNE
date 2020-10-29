parser: y.tab.c lex.yy.c
	gcc -o parser y.tab.c
y.tab.c: rune.y
	yacc rune.y
lex.yy.c: rune.l
	lex rune.l
