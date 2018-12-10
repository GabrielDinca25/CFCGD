%{
void yyerror (const char *s);
int yylex();
#include <stdio.h>     /* C declarations used in actions */
#include <stdlib.h>
#include <ctype.h>
#include "Lexer.h"
#define YYDEBUG 1
%}

//%start line
//%token print
//%token exit_command
//%token <num> number
//%token <ID> ID
//%type <num> line exp term 
//%type <ID> assignment
%token INT
%token FLOAT
%token ID
%token CHAR
%token STRING
%token SCOMMENT
%token MCOMMENT
%token AUTO
%token BREAK
%token CASE
%token CONST
%token CONTINUE
%token DEFAULT
%token DO
%token DOUBLE
%token ELSE
%token ENUM
%token EXTERN
%token FOR
%token GOTO
%token IF
%token LONG
%token REGISTER
%token RETURN
%token SHORT
%token SIGNED
%token SIZEOF
%token STATIC
%token STRUCT
%token SWITCH
%token TYPEDEF
%token DEFINE
%token UNION
%token UNSIGNED
%token VOID
%token VOLATILE
%token WHILE


%token THREE_DOTS
%token RIGHT_SHIFT_ASSIGNMENT
%token LEFT_SHIFT_ASSIGNMENT
%token INCREMENT_ASSIGNMENT
%token ASSIGNMENT
%token DECREMENT_ASSIGNMENT
%token MULTIPLY_ASSIGNMENT
%token DIVIDE_ASSIGNMENT
%token MOD_ASSIGNMENT
%token BITWISE_AND_ASSIGNMENT
%token BITWISE_XOR_ASSIGNMENT
%token BITWISE_OR_ASSIGNMENT
%token LEFT_SHIFT
%token RIGHT_SHIFT
%token INCREMENT
%token DECREMENT
%token ARROW
%token LOGICAL_AND
%token LOGICAL_OR
%token LESS_EQUAL
%token GREATER_EQUAL
%token EQUAL
%token NOT_EQUAL
%token SEMICOLON
%token DOT
%token BITWISE_AND
%token NOT
%token TILDA
%token MINUS
%token PLUS
%token MULTIPLY
%token DIVIDE
%token MODULO
%token LESS
%token GREATER
%token XOR
%token XOR_ASSIGNMENT
%token BITWISE_OR
%token CONDITIONAL
%token OPEN_PARANTHESIS
%token CLOSED_PARANTHESIS
%token OPEN_BRACKETS
%token CLOSED_BRACKETS
%token OPEN_BRACES
%token CLOSED_BRACES
%token UNKNOWN
%token INVALID_SYNTAX

%start jump_statement
%%

expression
	: assignment_expression
	| expression ',' assignment_expression
	;

constant_expression
	: conditional_expression
	;

assignment_expression
	: conditional_expression 
	| unary_expression assignment_operator assignment_expression 
	;

conditional_expression
	: logical_or_expression 
	| logical_or_expression '?' expression ':' conditional_expression
	;

logical_or_expression
	: logical_and_expression
	| logical_or_expression LOGICAL_OR logical_and_expression
	;

logical_and_expression
	: inclusive_or_expression
	| logical_and_expression LOGICAL_AND inclusive_or_expression
	;

inclusive_or_expression
	: exclusive_or_expression
	| inclusive_or_expression '|' exclusive_or_expression 
	;

exclusive_or_expression
	: and_expression
	| exclusive_or_expression '^' and_expression
	;
	
and_expression
	: equality_expression 
	| and_expression '&' equality_expression
	;

equality_expression
	: relational_expression 
	| equality_expression EQUAL relational_expression
	| equality_expression NOT_EQUAL relational_expression
	;

relational_expression
	: shift_expression 
	| relational_expression '<' shift_expression
	| relational_expression '>' shift_expression
	| relational_expression LESS_EQUAL shift_expression
	| relational_expression GREATER_EQUAL shift_expression
	;

shift_expression
	: additive_expression
	| shift_expression LEFT_SHIFT additive_expression
	| shift_expression RIGHT_SHIFT additive_expression
	;

additive_expression
	: multiplicative_expression
	| additive_expression '+' multiplicative_expression
	| additive_expression '-' multiplicative_expression
	;

multiplicative_expression
	: cast_expression
	| multiplicative_expression '*' cast_expression
	| multiplicative_expression '/' cast_expression
	| multiplicative_expression '%' cast_expression
	;


assignment_operator
	: '='
	| MULTIPLY_ASSIGNMENT
	| DIVIDE_ASSIGNMENT
	| MOD_ASSIGNMENT
	| INCREMENT_ASSIGNMENT
	| DECREMENT_ASSIGNMENT
	| LEFT_SHIFT_ASSIGNMENT
	| RIGHT_SHIFT_ASSIGNMENT
	| BITWISE_AND_ASSIGNMENT
	| XOR_ASSIGNMENT
	| BITWISE_OR_ASSIGNMENT
	;
unary_expression
	: postfix_expression
	| INCREMENT unary_expression
	| DECREMENT unary_expression
	| unary_operator cast_expression 
	;

unary_operator
	: '&'
	| '*'
	| '+'
	| '-'
	| '~'
	| '!'
	;

cast_expression
	: unary_expression
	| '(' type_name ')' cast_expression
	;



postfix_expression
	: primary_expression 
	| postfix_expression '[' expression ']'
	| postfix_expression '(' ')'
	| postfix_expression '(' argument_expression_list ')'
	| postfix_expression '.' ID
	| postfix_expression ARROW ID
	| postfix_expression INCREMENT
	| postfix_expression DECREMENT
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list ',' assignment_expression
	;

primary_expression
	: ID
//	| CHAR
	| STRING
	| '(' expression ')'
	;


///

declaration
	: declaration_specifiers ';'
	| declaration_specifiers init_declarator_list ';'
	;

declaration_specifiers
	: storage_class_specifier
	| storage_class_specifier declaration_specifiers
	| type_specifier
	| type_specifier declaration_specifiers
	| type_qualifier
	| type_qualifier declaration_specifiers
	;

init_declarator_list
	: init_declarator
	| init_declarator_list ',' init_declarator
	;

init_declarator
	: declarator
	| declarator '=' initializer
	;

storage_class_specifier
	: TYPEDEF
	| EXTERN
	| STATIC
	| AUTO
	| REGISTER
	;

type_specifier
	: VOID
	| CHAR
	| SHORT
	| INT
	| LONG
	| FLOAT
	| DOUBLE
	| SIGNED
	| UNSIGNED
	| struct_or_union_specifier
	| enum_specifier
	;

struct_or_union_specifier
	: struct_or_union ID '{' struct_declaration_list '}'
	| struct_or_union '{' struct_declaration_list '}'
	| struct_or_union ID
	;

struct_or_union
	: STRUCT
	| UNION
	;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list ';'
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier
	| type_qualifier specifier_qualifier_list
	| type_qualifier
	;

struct_declarator_list
	: struct_declarator
	| struct_declarator_list ',' struct_declarator
	;

struct_declarator
	: declarator
	| ':' constant_expression
	| declarator ':' constant_expression
	;

enum_specifier
	: ENUM '{' enumerator_list '}'
	| ENUM ID '{' enumerator_list '}'
	| ENUM ID
	;

enumerator_list
	: enumerator
	| enumerator_list ',' enumerator
	;

enumerator
	: ID
	| ID '=' constant_expression
	;

type_qualifier
	: CONST
	| VOLATILE
	;

declarator
	: pointer direct_declarator
	| direct_declarator
	;

direct_declarator
	: ID
	| '(' declarator ')'
	| direct_declarator '[' constant_expression ']'
	| direct_declarator '[' ']'
	| direct_declarator '(' parameter_type_list ')'
	| direct_declarator '(' identifier_list ')'
	| direct_declarator '(' ')'
	;

pointer
	: '*'
	| '*' type_qualifier_list
	| '*' pointer
	| '*' type_qualifier_list pointer
	;

type_qualifier_list
	: type_qualifier
	| type_qualifier_list type_qualifier
	;


parameter_type_list
	: parameter_list
	| parameter_list ',' THREE_DOTS
	;

parameter_list
	: parameter_declaration
	| parameter_list ',' parameter_declaration
	;

parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers abstract_declarator
	| declaration_specifiers
	;

identifier_list
	: ID
	| identifier_list ',' ID
	;

type_name
	: specifier_qualifier_list
	| specifier_qualifier_list abstract_declarator
	;

abstract_declarator
	: pointer
	| direct_abstract_declarator
	| pointer direct_abstract_declarator
	;

direct_abstract_declarator
	: '(' abstract_declarator ')'
	| '[' ']'
	| '[' constant_expression ']'
	| direct_abstract_declarator '[' ']'
	| direct_abstract_declarator '[' constant_expression ']'
	| '(' ')'
	| '(' parameter_type_list ')'
	| direct_abstract_declarator '(' ')'
	| direct_abstract_declarator '(' parameter_type_list ')'
	;

initializer
	: assignment_expression
	| '{' initializer_list '}'
	| '{' initializer_list ',' '}'
	;

initializer_list
	: initializer
	| initializer_list ',' initializer
	;

statement
	: labeled_statement
	| compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement
	;

labeled_statement
	: ID ':' statement
	| CASE constant_expression ':' statement
	| DEFAULT ':' statement
	;

compound_statement
	: '{' '}'
	| '{' statement_list '}'
	| '{' declaration_list '}'
	| '{' declaration_list statement_list '}'
	;

declaration_list
	: declaration
	| declaration_list declaration
	;

statement_list
	: statement
	| statement_list statement
	;

expression_statement
	: ';'
	| expression ';'
	;

selection_statement
	: IF '(' expression ')' statement
	| IF '(' expression ')' statement ELSE statement
	| SWITCH '(' expression ')' statement
	;

iteration_statement
	: WHILE '(' expression ')' statement
	| DO statement WHILE '(' expression ')' ';'
	| FOR '(' expression_statement expression_statement ')' statement
	| FOR '(' expression_statement expression_statement expression ')' statement
	;

jump_statement
	: GOTO ID SEMICOLON
	| CONTINUE SEMICOLON
	| BREAK SEMICOLON
	| RETURN SEMICOLON
	| RETURN expression SEMICOLON
	;


external_declaration
	: function_definition
	| declaration
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement
	| declaration_specifiers declarator compound_statement
	| declarator declaration_list compound_statement
	| declarator compound_statement
;

%%

int parse(char* fileName) {
	FILE* pf;
	fopen_s(&pf, fileName, "r" );
	if(!pf){
		printf("File %s could not be opened", fileName);	
	}
	initLexer(pf);
	yyparse();
    fclose(pf);
	return 1;
}

void yyerror(const char* s) {
	printf("%s", s);
}
