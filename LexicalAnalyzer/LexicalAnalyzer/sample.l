/* 
 * Sample Scanner1: 
 * Description: Replace the string "username" from standard input 
 *              with the user's login name (e.g. lgao)
 * Usage: (1) $ flex sample1.lex
 *        (2) $ gcc lex.yy.c -lfl
 *        (3) $ ./a.out
 *            stdin> username
 *	      stdin> Ctrl-D
 * Question: What is the purpose of '%{' and '%}'?
 *           What else could be included in this section?
 */

DIGIT    [0-9]
ID       [a-zA-Z][a-zA-Z0-9]*
%x       COMENTARIU

%{
#include <stdio.h>
#include <cstdio> 
#include "Lexer.h"
#include "sample.tab.h"
int mylineno = 1;

int column=0;
int line=0;
%}

%%
[ \t]         ;


"auto"			 { return AUTO;	}
"break"			 { return BREAK;	}
"case"			 { return CASE;	}
"char"			 { return CHAR;	}
"const"			 { return CONST;	}
"continue"		 { return CONTINUE;	}
"default"		 { return DEFAULT;	}
"do"			 { return DO;	}
"double"		 { return DOUBLE;	}
"else"			 { return ELSE;	}
"enum"			 { return ENUM;	}
"extern"		 { return EXTERN;	}
"float"			 { return FLOAT;	}
"for"			 { return FOR;	}
"goto"			 { return GOTO;	}
"if"			 { return IF;	}
"int"			 { printf("INT "); return INT;	}
"long"			 { return LONG;	}
"register"		 { return REGISTER;	}
"return"		 { return RETURN;	}
"short"			 { return SHORT;	}
"signed"		 { return SIGNED;	}
"sizeof"		 { return SIZEOF;	}
"static"		 { return STATIC;	}
"struct"		 { return STRUCT;	}
"switch"		 { return SWITCH;	}
"typedef"		 { return TYPEDEF;	}
"define"		 { return DEFINE;	}
"union"			 { return UNION;	}
"unsigned"		 { return UNSIGNED;	}
"void"			 { return VOID;	}
"volatile"		 { return VOLATILE;	}
"while"			 { return WHILE;	}

"..."		 { return THREE_DOTS;	}
">>="		 { return RIGHT_SHIFT_ASSIGNMENT;	}
"<<="		 { return LEFT_SHIFT_ASSIGNMENT;	}
"+="		 { return INCREMENT_ASSIGNMENT;	}
"="			 { printf("ASSIGNMENT "); return ASSIGNMENT;	}
"-="		 { return DECREMENT_ASSIGNMENT;	}
"*="		 { return MULTIPLY_ASSIGNMENT;	}
"/="		 { return DIVIDE_ASSIGNMENT;	}
"%="		 { return MOD_ASSIGNMENT;	}
"&="		 { return BITWISE_AND_ASSIGNMENT;	}
"^="		 { return BITWISE_XOR_ASSIGNMENT;	}
"|="		 { return BITWISE_OR_ASSIGNMENT;	}
">>"		 { return RIGHT_SHIFT;	}
"<<"		 { return LEFT_SHIFT;}
"++"		 { return INCREMENT;	} 
"--"		 { return DECREMENT;	}
"->"		 { return ARROW;	}
"&&"		 { return LOGICAL_AND;	}
"||"		 { return LOGICAL_OR;	}
"<="		 { return LESS_EQUAL;	}
">="		 { return GREATER_EQUAL;	}
"=="		 { return EQUAL;	}
"!="		 { return NOT_EQUAL;	}
";"			 { printf("SEMICOLON "); return SEMICOLON;	}
"."			 { return DOT;	}
"&"			 { return BITWISE_AND;	}
"!"			 { return NOT;	}
"~"			 { return TILDA;	}
"-"			 { return MINUS;	}
"+"			 { return PLUS;	}
"*"			 { return MULTIPLY;	}
"/"			 { return DIVIDE;	}
"%"			 { return MODULO;	}
"<"			 { return LESS;	}
">"			 { return GREATER;	}
"^"			 { return XOR;	}
"^="			 { return XOR_ASSIGNMENT;	}
"|"			 { return BITWISE_OR;	}
"?"			 { return CONDITIONAL;	}
"("			 { return OPEN_PARANTHESIS;	}
")"			 { return CLOSED_PARANTHESIS;	}
"["			 { return OPEN_BRACKETS;	}
"]"			 { return CLOSED_BRACKETS;	}
("{"|"<%")	 { return OPEN_BRACES;	}
("}"|"%>")	 { return CLOSED_BRACES;	}

\n  { printf("new line "); mylineno++; }
^"#".*					{;}

{DIGIT}+				{printf("INTEGER "); return INT;}
{DIGIT}+"."{DIGIT}*		{return FLOAT;}

{ID}					{printf("ID "); return ID;}

{DIGIT}+{ID}*			{return INVALID_SYNTAX;}

'([^\r^\n^']|\\0)'		{return CHAR;};
\"[^\"]*\"				{return STRING;}


"/*"((("*"[^/])?)|[^*])*"*/" {;}
"//".*                       {;}
			 
.			 {return UNKNOWN;}
%%

/*int main(int argc, char** argv)
{ 
  ++argv, --argc;
  FILE *stream;
  if ( argc > 0 )
  {
    fopen_s(&stream, argv[0], "r" );
	yyin = stream;
  }
  else
    yyin = stdin;

  yylex();
  return 0;
}*/

int yywrap()
{
return 1;
}

void initLexer(FILE *fp) {
		column=0;
		line=0;
		yylloc.last_line=0;
        yyin = fp;
}

