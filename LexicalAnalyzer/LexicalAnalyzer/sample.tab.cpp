/* A Bison parser, made by GNU Bison 3.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "sample.y" /* yacc.c:339  */

void yyerror (const char *s);
int yylex();
#include <stdio.h>     /* C declarations used in actions */
#include <stdlib.h>
#include <ctype.h>
#include "Lexer.h"
#define YYDEBUG 1

#line 76 "sample.tab.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "sample.tab.h".  */
#ifndef YY_YY_SAMPLE_TAB_H_INCLUDED
# define YY_YY_SAMPLE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
    DOT = 319,
    BITWISE_AND = 320,
    NOT = 321,
    TILDA = 322,
    MINUS = 323,
    PLUS = 324,
    MULTIPLY = 325,
    DIVIDE = 326,
    MODULO = 327,
    LESS = 328,
    GREATER = 329,
    XOR = 330,
    XOR_ASSIGNMENT = 331,
    BITWISE_OR = 332,
    CONDITIONAL = 333,
    OPEN_PARANTHESIS = 334,
    CLOSED_PARANTHESIS = 335,
    OPEN_BRACKETS = 336,
    CLOSED_BRACKETS = 337,
    OPEN_BRACES = 338,
    CLOSED_BRACES = 339,
    UNKNOWN = 340,
    INVALID_SYNTAX = 341
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

/* Copy the second part of user declarations.  */

#line 214 "sample.tab.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  39
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   668

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  111
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  163
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  248

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   341

#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   102,     2,     2,     2,    99,    92,     2,
     103,   104,    97,    95,    87,    96,   107,    98,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    89,   108,
      93,   100,    94,    88,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   105,     2,   106,    91,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   109,    90,   110,   101,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   109,   109,   110,   114,   118,   119,   123,   124,   128,
     129,   133,   134,   138,   139,   143,   144,   148,   149,   153,
     154,   155,   159,   160,   161,   162,   163,   167,   168,   169,
     173,   174,   175,   179,   180,   181,   182,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   200,   201,
     202,   203,   207,   208,   209,   210,   211,   212,   216,   217,
     223,   224,   225,   226,   227,   228,   229,   230,   234,   235,
     239,   241,   242,   254,   255,   256,   257,   258,   259,   273,
     274,   275,   276,   277,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   295,   296,   297,   301,   302,
     306,   307,   311,   315,   316,   317,   318,   322,   323,   327,
     328,   329,   333,   334,   335,   339,   340,   344,   345,   349,
     350,   354,   355,   359,   360,   361,   362,   363,   364,   365,
     369,   370,   371,   372,   376,   377,   382,   383,   387,   388,
     392,   393,   394,   398,   399,   403,   404,   408,   409,   410,
     414,   415,   416,   417,   418,   419,   420,   421,   422,   487,
     488,   489,   490,   491
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "ID", "CHAR", "STRING",
  "SCOMMENT", "MCOMMENT", "AUTO", "BREAK", "CASE", "CONST", "CONTINUE",
  "DEFAULT", "DO", "DOUBLE", "ELSE", "ENUM", "EXTERN", "FOR", "GOTO", "IF",
  "LONG", "REGISTER", "RETURN", "SHORT", "SIGNED", "SIZEOF", "STATIC",
  "STRUCT", "SWITCH", "TYPEDEF", "DEFINE", "UNION", "UNSIGNED", "VOID",
  "VOLATILE", "WHILE", "THREE_DOTS", "RIGHT_SHIFT_ASSIGNMENT",
  "LEFT_SHIFT_ASSIGNMENT", "INCREMENT_ASSIGNMENT", "ASSIGNMENT",
  "DECREMENT_ASSIGNMENT", "MULTIPLY_ASSIGNMENT", "DIVIDE_ASSIGNMENT",
  "MOD_ASSIGNMENT", "BITWISE_AND_ASSIGNMENT", "BITWISE_XOR_ASSIGNMENT",
  "BITWISE_OR_ASSIGNMENT", "LEFT_SHIFT", "RIGHT_SHIFT", "INCREMENT",
  "DECREMENT", "ARROW", "LOGICAL_AND", "LOGICAL_OR", "LESS_EQUAL",
  "GREATER_EQUAL", "EQUAL", "NOT_EQUAL", "SEMICOLON", "DOT", "BITWISE_AND",
  "NOT", "TILDA", "MINUS", "PLUS", "MULTIPLY", "DIVIDE", "MODULO", "LESS",
  "GREATER", "XOR", "XOR_ASSIGNMENT", "BITWISE_OR", "CONDITIONAL",
  "OPEN_PARANTHESIS", "CLOSED_PARANTHESIS", "OPEN_BRACKETS",
  "CLOSED_BRACKETS", "OPEN_BRACES", "CLOSED_BRACES", "UNKNOWN",
  "INVALID_SYNTAX", "','", "'?'", "':'", "'|'", "'^'", "'&'", "'<'", "'>'",
  "'+'", "'-'", "'*'", "'/'", "'%'", "'='", "'~'", "'!'", "'('", "')'",
  "'['", "']'", "'.'", "';'", "'{'", "'}'", "$accept", "expression",
  "constant_expression", "assignment_expression", "conditional_expression",
  "logical_or_expression", "logical_and_expression",
  "inclusive_or_expression", "exclusive_or_expression", "and_expression",
  "equality_expression", "relational_expression", "shift_expression",
  "additive_expression", "multiplicative_expression",
  "assignment_operator", "unary_expression", "unary_operator",
  "cast_expression", "postfix_expression", "argument_expression_list",
  "primary_expression", "declaration_specifiers",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "jump_statement", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,    44,    63,    58,
     124,    94,    38,    60,    62,    43,    45,    42,    47,    37,
      61,   126,    33,    40,    41,    91,    93,    46,    59,   123,
     125
};
# endif

#define YYPACT_NINF -174

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-174)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     132,   -32,   -28,    33,   416,    83,  -174,  -174,    61,  -174,
    -174,   442,   442,  -174,  -174,  -174,  -174,  -174,  -174,  -174,
     391,   -12,  -174,  -174,    -9,    42,    65,    41,    59,   140,
     -33,   156,   117,    -7,   309,   455,  -174,   345,  -174,  -174,
    -174,   455,  -174,  -174,  -174,  -174,  -174,  -174,  -174,     4,
    -174,  -174,  -174,  -174,  -174,  -174,  -174,  -174,     2,   630,
    -174,     5,    73,  -174,   630,    53,  -174,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,  -174,  -174,  -174,
    -174,  -174,  -174,  -174,  -174,  -174,  -174,  -174,   455,  -174,
    -174,  -174,  -174,   159,   338,   455,   175,    79,   186,  -174,
    -174,    85,   630,     6,   201,   236,   -71,  -174,    22,  -174,
     455,  -174,    42,    50,    65,    41,    59,   140,   -33,   -33,
     156,   156,   156,   156,   117,   117,    -7,    -7,  -174,  -174,
    -174,  -174,  -174,  -174,  -174,    36,     1,  -174,   186,    74,
     -69,  -174,   630,    49,  -174,     8,  -174,  -174,     6,  -174,
    -174,  -174,  -174,  -174,  -174,     7,   594,   594,   594,    92,
     116,  -174,   102,  -174,   104,  -174,    22,   283,   271,  -174,
     455,   455,  -174,  -174,   -64,   455,   186,  -174,   125,  -174,
    -174,  -174,   455,    23,   -37,  -174,   128,    45,    19,  -174,
    -174,   162,  -174,    16,  -174,  -174,  -174,  -174,  -174,   556,
    -174,  -174,  -174,   115,  -174,   121,  -174,  -174,  -174,  -174,
    -174,  -174,  -174,   126,     8,  -174,   455,   244,   310,    45,
    -174,  -174,  -174,  -174,  -174,  -174,  -174,  -174,  -174,   129,
      43,  -174,   134,  -174,   237,  -174,  -174,  -174
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,   161,   160,     0,    70,
      71,     0,     0,   162,    52,    54,    55,    53,    56,    57,
       0,     0,     2,     5,     7,     9,    11,    13,    15,    17,
      19,    22,    27,    30,    58,     0,    33,    48,    60,     1,
     159,     0,    49,    50,    87,    89,    85,   119,    90,     0,
      88,    86,    91,    98,    99,    92,    84,   120,     0,   104,
      93,     0,   145,    94,   106,     0,   163,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    44,    43,    41,
      42,    38,    39,    40,    45,    47,    46,    37,     0,    58,
      51,    66,    67,     0,     0,     0,     0,   114,     0,    72,
     103,    97,     0,   130,     0,     0,   147,   146,   148,   105,
       0,     3,    10,     0,    12,    14,    16,    18,    20,    21,
      25,    26,    23,    24,    28,    29,    31,    32,    34,    35,
      36,     6,    65,    62,    68,     0,     0,    64,     0,   117,
       0,   115,     0,     0,   100,     0,   134,   132,   131,    82,
      80,    83,    81,    79,   155,   142,    73,    75,    77,     0,
     136,   138,     0,   151,     0,     4,   149,     0,     0,    59,
       0,     0,    63,    61,     0,     0,     0,   112,     0,    96,
     101,   123,     0,     0,     0,   107,   109,   122,     0,   135,
     133,     0,   140,   147,   141,    74,    76,    78,   156,     0,
     150,   152,   157,     0,   153,     0,     8,    69,   113,   118,
     116,    95,   110,     0,     0,   102,     0,     0,     0,   121,
     137,   139,   158,   154,   124,   108,   111,   143,   129,     0,
       0,   126,     0,   127,     0,   128,   125,   144
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -174,    13,  -156,   -65,  -111,  -174,   178,   183,   184,   188,
     189,   141,   302,   164,   169,  -174,    -4,  -174,   138,  -174,
    -174,  -174,    17,  -174,   -19,  -174,  -174,   118,  -110,    -5,
    -174,    32,  -174,   135,    87,   -17,  -145,  -173,   -56,  -174,
    -163,  -174,    75,  -174,  -174,   -57,  -105,  -174
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    58,   174,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    98,    99,    35,    36,    37,
     145,    38,   165,   166,   167,    60,    61,   153,   154,   155,
     194,   195,    63,   150,   151,   168,   196,   197,   198,   158,
     169,   170,   171,   240,    65,   172,   118,     5
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      34,    59,   121,    64,   175,   117,   116,    42,    43,   107,
     111,   176,   191,   191,   213,    62,    34,    21,   186,    47,
     202,   191,   215,   186,   191,   229,    76,    77,   191,   219,
     229,     6,   114,   141,   115,     7,   222,    34,     8,   144,
      59,   187,    64,   190,    57,    59,   218,    64,   223,    68,
     224,    66,    44,    45,   110,    46,   223,   157,   116,   119,
      78,    79,    47,    34,   239,    34,    48,   175,    49,   216,
     236,   225,   242,    50,   175,    67,    51,    52,   190,    69,
      53,   175,   123,    39,    54,    55,    56,    57,    67,    67,
      84,    85,    86,    59,    34,    64,   156,   192,   176,    70,
      34,    34,   200,   113,   113,   113,   109,   183,   204,   203,
     201,   193,   115,   108,   112,   175,   217,   175,   146,   201,
     113,   115,   193,   181,    40,   177,   193,   178,    44,    45,
     244,    46,    72,    59,    59,    64,    64,    67,    47,   180,
     182,   199,    48,     1,    49,   203,     2,   245,   227,    50,
     228,    73,    51,    52,     3,    71,    53,   120,     4,   189,
      54,    55,    56,    57,   142,    44,    45,   191,    46,    59,
     113,    64,   159,   100,   185,    47,   114,    34,   115,    48,
     147,    49,   160,   205,   206,   207,    50,   161,   148,    51,
      52,   149,   162,    53,   152,   163,   208,    54,    55,    56,
      57,    74,    75,   209,    44,    45,   210,    46,    80,    81,
     211,   159,    82,    83,    47,   128,   129,   226,    48,   232,
      49,   160,   138,   139,   140,    50,   161,   233,    51,    52,
     234,   162,    53,   243,   163,   221,    54,    55,    56,    57,
     246,     9,   247,    10,   134,   135,   122,    44,    45,   237,
      46,   136,   137,   124,   159,   125,   235,    47,   179,   113,
     126,    48,   127,    49,   160,   201,   164,   115,    50,   161,
     188,    51,    52,   220,   162,    53,     9,   163,    10,    54,
      55,    56,    57,   184,   231,     0,    44,    45,     0,    46,
      11,    12,     0,   159,     0,     0,    47,     0,   113,     0,
      48,     0,    49,   160,   114,   164,   115,    50,   161,     0,
      51,    52,     0,   162,    53,     9,   163,    10,    54,    55,
      56,    57,     0,     0,     0,    11,    12,     0,    14,     0,
       0,    15,    16,    17,     0,     0,     0,    18,    19,    20,
       0,     0,   173,     9,     0,    10,     0,     0,   238,     0,
      87,    88,    89,     0,    90,    91,    92,    93,    94,     0,
      95,     0,     0,    14,    11,    12,    15,    16,    17,     0,
       0,     0,    18,    19,    20,     0,     0,   214,   130,   131,
     132,   133,     0,     0,     0,    96,     0,   212,     0,     0,
       0,     0,    11,    12,    44,    45,     9,    46,    10,   101,
     102,   103,    14,     0,    47,    15,    16,    17,    48,    97,
      49,    18,    19,    20,     0,    50,   241,     0,    51,    52,
       0,     9,    53,    10,     0,     0,    54,    55,    56,    57,
      14,     0,     0,    15,    16,    17,     0,     0,     0,    18,
      19,    20,   143,     0,     0,    11,    12,     9,   104,    10,
     105,     0,   106,     0,     0,     0,     0,     0,     0,     0,
       9,     0,    10,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,     0,     0,     0,    13,
       0,     0,     0,    14,     0,     0,    15,    16,    17,     0,
       0,     0,    18,    19,    20,     0,    11,    12,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    14,    11,
      12,    15,    16,    17,     0,     0,     0,    18,    19,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    14,     0,     0,    15,    16,    17,
       0,     0,     0,    18,    19,    41,     0,    14,     0,     0,
      15,    16,    17,     0,     0,     0,    18,    19,    20,    44,
      45,     0,    46,     0,     0,     0,   159,     0,     0,    47,
       0,     0,     0,    48,     0,    49,   160,     0,     0,     0,
      50,   161,     0,    51,    52,     0,   162,    53,     0,   163,
       0,    54,    55,    56,    57,     0,   230,    44,    45,     0,
      46,     0,     0,     0,   159,     0,     0,    47,     0,     0,
       0,    48,     0,    49,   160,     0,     0,     0,    50,   161,
       0,    51,    52,     0,   162,    53,     0,   163,     0,    54,
      55,    56,    57,    44,    45,     0,    46,     0,     0,     0,
       0,     0,     0,    47,     0,     0,     0,    48,     0,    49,
       0,     0,     0,     0,    50,     0,     0,    51,    52,     0,
       0,    53,     0,     0,     0,    54,    55,    56,    57
};

static const yytype_int16 yycheck[] =
{
       4,    20,    67,    20,   115,    62,    62,    11,    12,     5,
       5,   116,     5,     5,   177,    20,    20,     4,    87,    13,
     165,     5,   178,    87,     5,   198,    59,    60,     5,   185,
     203,    63,   103,    98,   105,    63,   192,    41,     5,   104,
      59,   110,    59,   153,    38,    64,   110,    64,   193,    58,
      87,    63,     3,     4,    59,     6,   201,   113,   114,    64,
      93,    94,    13,    67,   227,    69,    17,   178,    19,   180,
     226,   108,   228,    24,   185,    87,    27,    28,   188,    88,
      31,   192,    69,     0,    35,    36,    37,    38,    87,    87,
      97,    98,    99,   112,    98,   112,   113,    89,   203,    57,
     104,   105,   158,    97,    97,    97,   104,   106,   165,   165,
     103,   103,   105,   109,   109,   226,   181,   228,   105,   103,
      97,   105,   103,    87,    63,   103,   103,   105,     3,     4,
      87,     6,    91,   152,   153,   152,   153,    87,    13,    89,
     104,   158,    17,    11,    19,   201,    14,   104,   103,    24,
     105,    92,    27,    28,    22,    90,    31,   104,    26,   110,
      35,    36,    37,    38,     5,     3,     4,     5,     6,   188,
      97,   188,    10,    35,   100,    13,   103,   181,   105,    17,
       5,    19,    20,   166,   167,   168,    24,    25,   109,    27,
      28,     5,    30,    31,   109,    33,   104,    35,    36,    37,
      38,    61,    62,    87,     3,     4,   104,     6,    52,    53,
     106,    10,    95,    96,    13,    74,    75,    89,    17,   104,
      19,    20,    84,    85,    86,    24,    25,   106,    27,    28,
     104,    30,    31,   104,    33,   110,    35,    36,    37,    38,
     106,     5,     5,     7,    80,    81,    68,     3,     4,     5,
       6,    82,    83,    70,    10,    71,   224,    13,   120,    97,
      72,    17,    73,    19,    20,   103,   104,   105,    24,    25,
     152,    27,    28,   186,    30,    31,     5,    33,     7,    35,
      36,    37,    38,   148,   209,    -1,     3,     4,    -1,     6,
      54,    55,    -1,    10,    -1,    -1,    13,    -1,    97,    -1,
      17,    -1,    19,    20,   103,   104,   105,    24,    25,    -1,
      27,    28,    -1,    30,    31,     5,    33,     7,    35,    36,
      37,    38,    -1,    -1,    -1,    54,    55,    -1,    92,    -1,
      -1,    95,    96,    97,    -1,    -1,    -1,   101,   102,   103,
      -1,    -1,   106,     5,    -1,     7,    -1,    -1,   104,    -1,
      41,    42,    43,    -1,    45,    46,    47,    48,    49,    -1,
      51,    -1,    -1,    92,    54,    55,    95,    96,    97,    -1,
      -1,    -1,   101,   102,   103,    -1,    -1,   106,    76,    77,
      78,    79,    -1,    -1,    -1,    76,    -1,   104,    -1,    -1,
      -1,    -1,    54,    55,     3,     4,     5,     6,     7,    54,
      55,    56,    92,    -1,    13,    95,    96,    97,    17,   100,
      19,   101,   102,   103,    -1,    24,   106,    -1,    27,    28,
      -1,     5,    31,     7,    -1,    -1,    35,    36,    37,    38,
      92,    -1,    -1,    95,    96,    97,    -1,    -1,    -1,   101,
     102,   103,   104,    -1,    -1,    54,    55,     5,   103,     7,
     105,    -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    92,    -1,    -1,    95,    96,    97,    -1,
      -1,    -1,   101,   102,   103,    -1,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    54,
      55,    95,    96,    97,    -1,    -1,    -1,   101,   102,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    95,    96,    97,
      -1,    -1,    -1,   101,   102,   103,    -1,    92,    -1,    -1,
      95,    96,    97,    -1,    -1,    -1,   101,   102,   103,     3,
       4,    -1,     6,    -1,    -1,    -1,    10,    -1,    -1,    13,
      -1,    -1,    -1,    17,    -1,    19,    20,    -1,    -1,    -1,
      24,    25,    -1,    27,    28,    -1,    30,    31,    -1,    33,
      -1,    35,    36,    37,    38,    -1,    40,     3,     4,    -1,
       6,    -1,    -1,    -1,    10,    -1,    -1,    13,    -1,    -1,
      -1,    17,    -1,    19,    20,    -1,    -1,    -1,    24,    25,
      -1,    27,    28,    -1,    30,    31,    -1,    33,    -1,    35,
      36,    37,    38,     3,     4,    -1,     6,    -1,    -1,    -1,
      -1,    -1,    -1,    13,    -1,    -1,    -1,    17,    -1,    19,
      -1,    -1,    -1,    -1,    24,    -1,    -1,    27,    28,    -1,
      -1,    31,    -1,    -1,    -1,    35,    36,    37,    38
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    11,    14,    22,    26,   158,    63,    63,     5,     5,
       7,    54,    55,    63,    92,    95,    96,    97,   101,   102,
     103,   112,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   127,   128,   129,   130,   132,     0,
      63,   103,   127,   127,     3,     4,     6,    13,    17,    19,
      24,    27,    28,    31,    35,    36,    37,    38,   112,   135,
     136,   137,   140,   143,   146,   155,    63,    87,    58,    88,
      57,    90,    91,    92,    61,    62,    59,    60,    93,    94,
      52,    53,    95,    96,    97,    98,    99,    41,    42,    43,
      45,    46,    47,    48,    49,    51,    76,   100,   126,   127,
     129,    54,    55,    56,   103,   105,   107,     5,   109,   104,
     140,     5,   109,    97,   103,   105,   149,   156,   157,   140,
     104,   114,   117,   112,   118,   119,   120,   121,   122,   122,
     123,   123,   123,   123,   124,   124,   125,   125,   129,   129,
     129,   114,     5,   104,   114,   131,   112,     5,   109,     5,
     144,   145,   109,   138,   139,   140,   146,   149,   150,    10,
      20,    25,    30,    33,   104,   133,   134,   135,   146,   151,
     152,   153,   156,   106,   113,   115,   157,   103,   105,   129,
      89,    87,   104,   106,   144,   100,    87,   110,   138,   110,
     139,     5,    89,   103,   141,   142,   147,   148,   149,   146,
     149,   103,   147,   149,   156,   133,   133,   133,   104,    87,
     104,   106,   104,   151,   106,   113,   115,   114,   110,   113,
     145,   110,   113,   147,    87,   108,    89,   103,   105,   148,
      40,   153,   104,   106,   104,   142,   113,     5,   104,   151,
     154,   106,   113,   104,    87,   104,   106,     5
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   111,   112,   112,   113,   114,   114,   115,   115,   116,
     116,   117,   117,   118,   118,   119,   119,   120,   120,   121,
     121,   121,   122,   122,   122,   122,   122,   123,   123,   123,
     124,   124,   124,   125,   125,   125,   125,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   127,   127,
     127,   127,   128,   128,   128,   128,   128,   128,   129,   129,
     130,   130,   130,   130,   130,   130,   130,   130,   131,   131,
     132,   132,   132,   133,   133,   133,   133,   133,   133,   134,
     134,   134,   134,   134,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   136,   136,   136,   137,   137,
     138,   138,   139,   140,   140,   140,   140,   141,   141,   142,
     142,   142,   143,   143,   143,   144,   144,   145,   145,   146,
     146,   147,   147,   148,   148,   148,   148,   148,   148,   148,
     149,   149,   149,   149,   150,   150,   151,   151,   152,   152,
     153,   153,   153,   154,   154,   155,   155,   156,   156,   156,
     157,   157,   157,   157,   157,   157,   157,   157,   157,   158,
     158,   158,   158,   158
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     1,     1,     3,     1,     5,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     4,     3,     4,     3,     3,     2,     2,     1,     3,
       1,     1,     3,     1,     2,     1,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     4,     2,     1,     1,
       1,     2,     3,     2,     1,     2,     1,     1,     3,     1,
       2,     3,     4,     5,     2,     1,     3,     1,     3,     1,
       1,     2,     1,     1,     3,     4,     3,     4,     4,     3,
       1,     2,     2,     3,     1,     2,     1,     3,     1,     3,
       2,     2,     1,     1,     3,     1,     2,     1,     1,     2,
       3,     2,     3,     3,     4,     2,     3,     3,     4,     3,
       2,     2,     2,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
      
#line 1591 "sample.tab.cpp" /* yacc.c:1651  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 507 "sample.y" /* yacc.c:1910  */


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
