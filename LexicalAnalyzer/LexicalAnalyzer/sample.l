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
%}

%%
[ \t\n]         ;
^"#".*					{printf("Skipping preprocessor: %s\n", yytext);}

{DIGIT}+				{printf( "Found an int: %s (%d)\n", yytext, atoi( yytext ) );}
{DIGIT}+"."{DIGIT}*		{printf( "Found a float: %s (%g)\n", yytext,atof( yytext ) );}

{ID}					{printf( "Found an identifier: %s %s\n", yytext );}

{DIGIT}+{ID}*			{printf( "Invalid Syntax: %s\n", yytext);}

'([^\r^\n^']|\\0)'		{printf( "Found a char: %s\n", yytext );};
\"[^\"]*\"				{printf( "Found a string: %s\n", yytext );}


"/*"((("*"[^/])?)|[^*])*"*/" {printf( "Skipping multiple line comment\n");}
"//".*                       {printf( "Skipping single line comment\n");}

"auto"			 { printf("Found keyword: %s\n", yytext );	}
"break"			 { printf("Found keyword: %s\n", yytext );	}
"case"			 { printf("Found keyword: %s\n", yytext );	}
"char"			 { printf("Found keyword: %s\n", yytext );	}
"const"			 { printf("Found keyword: %s\n", yytext );	}
"continue"		 { printf("Found keyword: %s\n", yytext );	}
"default"		 { printf("Found keyword: %s\n", yytext );	}
"do"			 { printf("Found keyword: %s\n", yytext );	}
"double"		 { printf("Found keyword: %s\n", yytext );	}
"else"			 { printf("Found keyword: %s\n", yytext );	}
"enum"			 { printf("Found keyword: %s\n", yytext );	}
"extern"		 { printf("Found keyword: %s\n", yytext );	}
"float"			 { printf("Found keyword: %s\n", yytext );	}
"for"			 { printf("Found keyword: %s\n", yytext );	}
"goto"			 { printf("Found keyword: %s\n", yytext );	}
"if"			 { printf("Found keyword: %s\n", yytext );	}
"int"			 { printf("Found keyword: %s\n", yytext );	}
"long"			 { printf("Found keyword: %s\n", yytext );	}
"register"		 { printf("Found keyword: %s\n", yytext );	}
"return"		 { printf("Found keyword: %s\n", yytext );	}
"short"			 { printf("Found keyword: %s\n", yytext );	}
"signed"		 { printf("Found keyword: %s\n", yytext );	}
"sizeof"		 { printf("Found keyword: %s\n", yytext );	}
"static"		 { printf("Found keyword: %s\n", yytext );	}
"struct"		 { printf("Found keyword: %s\n", yytext );	}
"switch"		 { printf("Found keyword: %s\n", yytext );	}
"typedef"		 { printf("Found keyword: %s\n", yytext );	}
"define"		 { printf("Found keyword: %s\n", yytext );	}
"union"			 { printf("Found keyword: %s\n", yytext );	}
"unsigned"		 { printf("Found keyword: %s\n", yytext );	}
"void"			 { printf("Found keyword: %s\n", yytext );	}
"volatile"		 { printf("Found keyword: %s\n", yytext );	}
"while"			 { printf("Found keyword: %s\n", yytext );	}

"..."		 { printf("Found %s\n", yytext );	}
">>="		 { printf("Found %s\n", yytext );	}
"<<="		 { printf("Found %s\n", yytext );	}
"+="		 { printf("Found %s\n", yytext );	}
"="			 { printf("Found %s\n", yytext );	}
"-="		 { printf("Found %s\n", yytext );	}
"*="		 { printf("Found %s\n", yytext );	}
"/="		 { printf("Found %s\n", yytext );	}
"&="		 { printf("Found %s\n", yytext );	}
"^="		 { printf("Found %s\n", yytext );	}
"|="		 { printf("Found %s\n", yytext );	}
">>"		 { printf("Found %s\n", yytext );	}
"<<"		 { printf("Found %s\n", yytext );	}
"++"		 { printf("Found %s\n", yytext );	}
"--"		 { printf("Found %s\n", yytext );	}
"->"		 { printf("Found %s\n", yytext );	}
"&&"		 { printf("Found %s\n", yytext );	}
"||"		 { printf("Found %s\n", yytext );	}
"<="		 { printf("Found %s\n", yytext );	}
">="		 { printf("Found %s\n", yytext );	}
"=="		 { printf("Found %s\n", yytext );	}
"!="		 { printf("Found %s\n", yytext );	}
";"			 { printf("Found %s\n", yytext );	}
"."			 { printf("Found %s\n", yytext );	}
"&"			 { printf("Found %s\n", yytext );	}
"!"			 { printf("Found %s\n", yytext );	}
"~"			 { printf("Found %s\n", yytext );	}
"-"			 { printf("Found %s\n", yytext );	}
"+"			 { printf("Found %s\n", yytext );	}
"*"			 { printf("Found %s\n", yytext );	}
"/"			 { printf("Found %s\n", yytext );	}
"%"			 { printf("Found %s\n", yytext );	}
"<"			 { printf("Found %s\n", yytext );	}
">"			 { printf("Found %s\n", yytext );	}
"^"			 { printf("Found %s\n", yytext );	}
"|"			 { printf("Found %s\n", yytext );	}
"?"			 { printf("Found %s\n", yytext );	}
"("			 { printf("Found %s\n", yytext );	}
")"			 { printf("Found %s\n", yytext );	}
"["			 { printf("Found %s\n", yytext );	}
"]"			 { printf("Found %s\n", yytext );	}
("{"|"<%")	 { printf("Found %s\n", yytext );	}
("}"|"%>")	 { printf("Found %s\n", yytext );	}
("["|"<:")	 { printf("Found %s\n", yytext );	}
("]"|":>")	 { printf("Found %s\n", yytext );	}

.			 {printf( "Unknown character %s\n", yytext);}
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
