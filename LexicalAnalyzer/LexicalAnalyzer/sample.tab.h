/* A Bison parser, made by GNU Bison 3.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_SAMPLE_TAB_H_INCLUDED
# define YY_YY_SAMPLE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT = 258,
    FLOAT = 259,
    ID = 260,
    CHAR = 261,
    STRING = 262,
    SCOMMENT = 263,
    MCOMMENT = 264,
    AUTO = 265,
    BREAK = 266,
    CASE = 267,
    CONST = 268,
    CONTINUE = 269,
    DEFAULT = 270,
    DO = 271,
    DOUBLE = 272,
    ELSE = 273,
    ENUM = 274,
    EXTERN = 275,
    FOR = 276,
    GOTO = 277,
    IF = 278,
    LONG = 279,
    REGISTER = 280,
    RETURN = 281,
    SHORT = 282,
    SIGNED = 283,
    SIZEOF = 284,
    STATIC = 285,
    STRUCT = 286,
    SWITCH = 287,
    TYPEDEF = 288,
    DEFINE = 289,
    UNION = 290,
    UNSIGNED = 291,
    VOID = 292,
    VOLATILE = 293,
    WHILE = 294,
    THREE_DOTS = 295,
    RIGHT_SHIFT_ASSIGNMENT = 296,
    LEFT_SHIFT_ASSIGNMENT = 297,
    INCREMENT_ASSIGNMENT = 298,
    ASSIGNMENT = 299,
    DECREMENT_ASSIGNMENT = 300,
    MULTIPLY_ASSIGNMENT = 301,
    DIVIDE_ASSIGNMENT = 302,
    MOD_ASSIGNMENT = 303,
    BITWISE_AND_ASSIGNMENT = 304,
    BITWISE_XOR_ASSIGNMENT = 305,
    BITWISE_OR_ASSIGNMENT = 306,
    LEFT_SHIFT = 307,
    RIGHT_SHIFT = 308,
    INCREMENT = 309,
    DECREMENT = 310,
    ARROW = 311,
    LOGICAL_AND = 312,
    LOGICAL_OR = 313,
    LESS_EQUAL = 314,
    GREATER_EQUAL = 315,
    EQUAL = 316,
    NOT_EQUAL = 317,
    SEMICOLON = 318,
    COLON = 319,
    DOT = 320,
    COMMA = 321,
    BITWISE_AND = 322,
    NOT = 323,
    TILDA = 324,
    MINUS = 325,
    PLUS = 326,
    MULTIPLY = 327,
    DIVIDE = 328,
    MODULO = 329,
    LESS = 330,
    GREATER = 331,
    XOR = 332,
    XOR_ASSIGNMENT = 333,
    BITWISE_OR = 334,
    CONDITIONAL = 335,
    OPEN_PARANTHESIS = 336,
    CLOSED_PARANTHESIS = 337,
    OPEN_BRACKETS = 338,
    CLOSED_BRACKETS = 339,
    OPEN_BRACES = 340,
    CLOSED_BRACES = 341,
    UNKNOWN = 342,
    INVALID_SYNTAX = 343
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SAMPLE_TAB_H_INCLUDED  */
