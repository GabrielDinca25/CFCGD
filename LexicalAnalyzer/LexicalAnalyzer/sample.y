%{
void yyerror (char *s);
int yylex();
#include <stdio.h>     /* C declarations used in actions */
#include <stdlib.h>
#include <ctype.h>
%}

//%start line
//%token print
//%token exit_command
//%token <num> number
//%token <id> identifier
//%type <num> line exp term 
//%type <id> assignment

%token INT,
%token FLOAT,
%token ID,
%token CHAR,
%token STRING,
%token SCOMMENT,
%token MCOMMENT,
%token KEYWORD_AUTO,
%token KEYWORD_BREAK,
%token KEYWORD_CASE,
%token KEYWORD_CHAR,
%token KEYWORD_CONST,
%token KEYWORD_CONTINUE,
%token KEYWORD_DEFAULT,
%token KEYWORD_DO,
%token KEYWORD_DOUBLE,
%token KEYWORD_ELSE,
%token KEYWORD_ENUM,
%token KEYWORD_EXTERN,
%token KEYWORD_FLOAT,
%token KEYWORD_FOR,
%token KEYWORD_GOTO,
%token KEYWORD_IF,
%token KEYWORD_INT,
%token KEYWORD_LONG,
%token KEYWORD_REGISTER,
%token KEYWORD_RETURN,
%token KEYWORD_SHORT,
%token KEYWORD_SIGNED,
%token KEYWORD_SIZEOF,
%token KEYWORD_STATIC,
%token KEYWORD_STRUCT,
%token KEYWORD_SWITCH,
%token KEYWORD_TYPEDEF,
%token KEYWORD_DEFINE,
%token KEYWORD_UNION,
%token KEYWORD_UNSIGNED,
%token KEYWORD_VOID,
%token KEYWORD_VOLATILE,
%token KEYWORD_WHILE,

%token THREE_DOTS,
%token RIGHT_SHIFT_ASSIGNMENT,
%token LEFT_SHIFT_ASSIGNMENT,
%token INCREMENT_ASSIGNMENT,
%token ASSIGNMENT,
%token DECREMENT_ASSIGNMENT,
%token MULTIPLY_ASSIGNMENT,
%token DIVIDE_ASSIGNMENT,
%token BITWISE_AND_ASSIGNMENT,
%token BITWISE_XOR_ASSIGNMENT,
%token BITWISE_OR_ASSIGNMENT,
%token RIGHT_SHIFT,
%token INCREMENT,
%token DECREMENT,
%token ARROW,
%token LOGICAL_AND,
%token LOGICAL_OR,
%token LESS_EQUAL,
%token GREATER_EQUAL,
%token LESS_EQUAL,
%token EQUAL,
%token NOT_EQUAL,
%token SEMICOLON,
%token DOT,
%token BITWISE_AND,
%token NOT,
%token TILDA,
%token MINUS,
%token PLUS,
%token MULTIPLY,
%token DIVIDE,
%token MODULO,
%token LESS,
%token GREATER,
%token XOR,
%token BITWISE_OR,
%token CONDITIONAL,
%token OPEN_PARANTHESIS,
%token CLOSED_PARANTHESIS,
%token OPEN_BRACKETS,
%token CLOSED_BRACKETS,
%token OPEN_BRACES,
%token CLOSED_BRACES,
%token UNKNOWN,

%start unit
%%

unit    : assignment ';'		{;}
		| exit_command ';'		{exit(EXIT_SUCCESS);}
		| print exp ';'			{printf("Printing %d\n", $2);}
		| line assignment ';'	{;}
		| line print exp ';'	{printf("Printing %d\n", $3);}
		| line exit_command ';'	{exit(EXIT_SUCCESS);}
        ;

assignment : ID '=' exp  { updateSymbolVal($1,$3); }
			;
exp    	: term                  {$$ = $1;}
       	| exp '+' term          {$$ = $1 + $3;}
       	| exp '-' term          {$$ = $1 - $3;}
       	;
term   	: INT                {$$ = $1;}
		| ID {$$ = symbolVal($1);} 
%%
