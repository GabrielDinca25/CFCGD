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
int mylineno = 1;

%}

%%
[ \t]         ;
\n  { mylineno++; }
^"#".*					{;}

{DIGIT}+				{return INT;}
{DIGIT}+"."{DIGIT}*		{return FLOAT;}

{ID}					{return ID;}

{DIGIT}+{ID}*			{return INVALID_SYNTAX;}

'([^\r^\n^']|\\0)'		{return CHAR;};
\"[^\"]*\"				{return STRING;}


"/*"((("*"[^/])?)|[^*])*"*/" {;}
"//".*                       {;}

"auto"			 { return KEYWORD_AUTO;	}
"break"			 { return KEYWORD_BREAK;	}
"case"			 { return KEYWORD_CASE;	}
"char"			 { return KEYWORD_CHAR;	}
"const"			 { return KEYWORD_CONST;	}
"continue"		 { return KEYWORD_CONTINUE;	}
"default"		 { return KEYWORD_DEFAULT;	}
"do"			 { return KEYWORD_DO;	}
"double"		 { return KEYWORD_DOUBLE;	}
"else"			 { return KEYWORD_ELSE;	}
"enum"			 { return KEYWORD_ENUM;	}
"extern"		 { return KEYWORD_EXTERN;	}
"float"			 { return KEYWORD_FLOAT;	}
"for"			 { return KEYWORD_FOR;	}
"goto"			 { return KEYWORD_GOTO;	}
"if"			 { return KEYWORD_IF;	}
"int"			 { return KEYWORD_INT;	}
"long"			 { return KEYWORD_LONG;	}
"register"		 { return KEYWORD_REGISTER;	}
"return"		 { return KEYWORD_RETURN;	}
"short"			 { return KEYWORD_SHORT;	}
"signed"		 { return KEYWORD_SIGNED;	}
"sizeof"		 { return KEYWORD_SIZEOF;	}
"static"		 { return KEYWORD_STATIC;	}
"struct"		 { return KEYWORD_STRUCT;	}
"switch"		 { return KEYWORD_SWITCH;	}
"typedef"		 { return KEYWORD_TYPEDEF;	}
"define"		 { return KEYWORD_DEFINE;	}
"union"			 { return KEYWORD_UNION;	}
"unsigned"		 { return KEYWORD_UNSIGNED;	}
"void"			 { return KEYWORD_VOID;	}
"volatile"		 { return KEYWORD_VOLATILE;	}
"while"			 { return KEYWORD_WHILE;	}

"..."		 { return THREE_DOTS;	}
">>="		 { return RIGHT_SHIFT_ASSIGNMENT;	}
"<<="		 { return LEFT_SHIFT_ASSIGNMENT;	}
"+="		 { return INCREMENT_ASSIGNMENT;	}
"="			 { return ASSIGNMENT;	}
"-="		 { return DECREMENT_ASSIGNMENT;	}
"*="		 { return MULTIPLY_ASSIGNMENT;	}
"/="		 { return DIVIDE_ASSIGNMENT;	}
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
";"			 { return SEMICOLON;	}
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
"|"			 { return BITWISE_OR;	}
"?"			 { return CONDITIONAL;	}
"("			 { return OPEN_PARANTHESIS;	}
")"			 { return CLOSED_PARANTHESIS;	}
"["			 { return OPEN_BRACKETS;	}
"]"			 { return CLOSED_BRACKETS;	}
("{"|"<%")	 { return OPEN_BRACES;	}
("}"|"%>")	 { return CLOSED_BRACES;	}
			 
.			 {return UNKNOWN;}
%%

int main(int argc, char** argv)
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
}

int yywrap()
{
return 1;
}
