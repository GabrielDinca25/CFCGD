#include "Lexer.h"
YYLTYPE yylloc;

int main(int argc, char** argv)
{
	++argv, --argc;
	int val = parse(argv[0]);

	return 0;
}