#define YYLTYPE_IS_DECLARED 1

#include <stdio.h>

void initLexer(FILE *fp);

int parse(char* fileName);

typedef struct YYLTYPE
{
	int first_line;
	int first_column;
	int last_line;
	int last_column;
} YYLTYPE;

extern YYLTYPE yylloc;