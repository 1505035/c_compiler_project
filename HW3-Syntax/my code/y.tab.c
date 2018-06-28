/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "1505035.y" /* yacc.c:339  */

#include<iostream>
#include<cstdlib>
#include<vector>
#include<cstring>
#include<string>
#include<cmath>
#include<fstream>
#include "SymbolTable.h"
//#define YYSTYPE SymbolInfo*

using namespace std;

int yyparse(void);
int yylex(void);
extern char* yytext;
extern FILE *yyin;
extern int line_count;
extern int error_count;


string list = "";
string specifier = "";
string func  = "";
vector<SymbolInfo*> param_list;
vector<SymbolInfo*> arg_list;
SymbolTable table(50);

ofstream logout("1505035_log.txt"), error("1505035_error.txt");

void yyerror(const char *s)
{
	fprintf(stderr,"line %d : %s\n",line_count,s);
	//error<<"line "<<line_count<<" : "<< s;	
	return;
}

string getOrder(int i){
	if(i == 1) return "1st";
	else if(i == 2) return "2nd";
	else if(i == 3) return "2rd";
	else return "th";
}


#line 112 "y.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    IF = 258,
    ELSE = 259,
    FOR = 260,
    WHILE = 261,
    INT = 262,
    FLOAT = 263,
    CHAR = 264,
    DOUBLE = 265,
    VOID = 266,
    RETURN = 267,
    DECOP = 268,
    ASSIGNOP = 269,
    LPAREN = 270,
    RPAREN = 271,
    LCURL = 272,
    RCURL = 273,
    LTHIRD = 274,
    RTHIRD = 275,
    SEMICOLON = 276,
    COMMA = 277,
    NOT = 278,
    PRINTLN = 279,
    DO = 280,
    COMMENT = 281,
    STRING = 282,
    SWITCH = 283,
    CASE = 284,
    DEFAULT = 285,
    BREAK = 286,
    CONTINUE = 287,
    CONST_INT = 288,
    CONST_FLOAT = 289,
    CONST_CHAR = 290,
    ID = 291,
    LOGICOP = 292,
    RELOP = 293,
    BITOP = 294,
    ADDOP = 295,
    MULOP = 296,
    INCOP = 297,
    LOWER_THAN_ELSE = 298
  };
#endif
/* Tokens.  */
#define IF 258
#define ELSE 259
#define FOR 260
#define WHILE 261
#define INT 262
#define FLOAT 263
#define CHAR 264
#define DOUBLE 265
#define VOID 266
#define RETURN 267
#define DECOP 268
#define ASSIGNOP 269
#define LPAREN 270
#define RPAREN 271
#define LCURL 272
#define RCURL 273
#define LTHIRD 274
#define RTHIRD 275
#define SEMICOLON 276
#define COMMA 277
#define NOT 278
#define PRINTLN 279
#define DO 280
#define COMMENT 281
#define STRING 282
#define SWITCH 283
#define CASE 284
#define DEFAULT 285
#define BREAK 286
#define CONTINUE 287
#define CONST_INT 288
#define CONST_FLOAT 289
#define CONST_CHAR 290
#define ID 291
#define LOGICOP 292
#define RELOP 293
#define BITOP 294
#define ADDOP 295
#define MULOP 296
#define INCOP 297
#define LOWER_THAN_ELSE 298

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 48 "1505035.y" /* yacc.c:355  */

	SymbolInfo* SymVal; 

#line 242 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 259 "y.tab.c" /* yacc.c:358  */

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
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
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
#  define YYSIZE_T unsigned int
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

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   189

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  80
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  145

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    81,    81,    88,    98,   108,   117,   124,   132,   158,
     183,   209,   217,   225,   234,   234,   289,   289,   327,   344,
     357,   373,   390,   390,   400,   400,   411,   421,   427,   436,
     446,   454,   464,   489,   516,   540,   567,   596,   625,   634,
     644,   653,   661,   669,   677,   686,   694,   703,   711,   729,
     740,   752,   760,   771,   779,   788,   811,   840,   849,   868,
     878,   889,   899,   910,   920,   931,   940,   954,   963,   972,
     982,   992,  1039,  1049,  1059,  1068,  1077,  1087,  1097,  1106,
    1119
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "ELSE", "FOR", "WHILE", "INT",
  "FLOAT", "CHAR", "DOUBLE", "VOID", "RETURN", "DECOP", "ASSIGNOP",
  "LPAREN", "RPAREN", "LCURL", "RCURL", "LTHIRD", "RTHIRD", "SEMICOLON",
  "COMMA", "NOT", "PRINTLN", "DO", "COMMENT", "STRING", "SWITCH", "CASE",
  "DEFAULT", "BREAK", "CONTINUE", "CONST_INT", "CONST_FLOAT", "CONST_CHAR",
  "ID", "LOGICOP", "RELOP", "BITOP", "ADDOP", "MULOP", "INCOP",
  "LOWER_THAN_ELSE", "$accept", "start", "program", "unit",
  "func_declaration", "func_definition", "$@1", "$@2", "parameter_list",
  "compound_statement", "$@3", "$@4", "var_declaration", "type_specifier",
  "declaration_list", "statements", "statement", "expression_statement",
  "variable", "expression", "logic_expression", "rel_expression",
  "simple_expression", "term", "unary_expression", "factor",
  "argument_list", "arguments", YY_NULLPTR
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
     295,   296,   297,   298
};
# endif

#define YYPACT_NINF -85

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-85)))

#define YYTABLE_NINF -25

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      90,   -21,   -85,   -85,   -85,    51,   127,   -85,   -85,   -85,
     -85,   -16,    84,   142,   -85,   -85,   102,    49,   138,    20,
     -85,    27,   144,   -85,   -85,    53,     2,    45,    68,    74,
      83,     8,    88,   -85,    86,   150,   -85,   -85,   -85,    21,
     -85,   -85,   105,    65,   -85,    97,   120,   130,   129,   -85,
     -85,   -85,   105,   -85,   -85,   -85,   108,   135,   -85,    64,
     141,   152,   153,   103,   103,   -85,   103,   154,   -85,   -85,
     147,   103,   -85,   -85,   123,    72,   -85,   -85,    14,    11,
     -85,   128,    22,   131,   -85,   -85,   -85,   -85,   151,   103,
      25,   103,    13,   155,    -9,   -85,   137,   103,   103,   -85,
     -85,   -85,   -85,   103,   -85,   -85,   -85,   103,   103,   103,
     103,   158,   156,    25,   159,   -85,   -85,   -85,   160,   -85,
     162,   157,   161,   -85,   -85,   140,   131,   -85,   108,   103,
     108,    71,   -85,   103,   -85,   178,   167,   -85,   -85,   -85,
     -85,   108,   108,   -85,   -85
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    29,    30,    31,     0,     0,     4,     6,     7,
       5,     0,    34,     0,     1,     3,    34,     0,     0,     0,
      28,     0,     0,    27,    26,     0,     0,    21,     0,     0,
      32,     0,     0,    12,     0,     0,    20,    36,    35,     0,
      13,     9,     0,     0,    10,    19,     0,     0,    22,    17,
      11,     8,     0,    18,    37,    33,     0,     0,    15,     0,
       0,     0,     0,     0,     0,    51,     0,     0,    73,    74,
      55,     0,    42,    40,     0,     0,    38,    41,    70,     0,
      57,    59,    61,    63,    65,    69,    25,    54,    34,     0,
       0,     0,     0,     0,    70,    68,     0,    78,     0,    67,
      23,    39,    76,     0,    75,    53,    52,     0,     0,     0,
       0,     0,     0,     0,     0,    50,    48,    72,     0,    80,
       0,    77,     0,    58,    60,    62,    64,    66,     0,     0,
       0,     0,    71,     0,    56,    44,     0,    46,    49,    47,
      79,     0,     0,    45,    43
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -85,   -85,   -85,   179,   -85,   -85,   -85,   -85,   164,   -36,
     -85,   -85,   124,    17,   -10,   -85,   -73,   -83,   -66,   -53,
     -84,    77,    79,    80,   -63,   -85,   -85,   -85
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     5,     6,     7,     8,     9,    52,    42,    26,    72,
      56,    57,    73,    74,    13,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,   120,   121
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      94,    17,   101,    95,   102,    94,    49,   113,    99,    40,
      92,    93,   105,   119,   115,    12,    58,    11,    34,   123,
      16,    28,    46,    11,    35,   -16,   112,   102,   103,    41,
     129,    94,   106,   104,   116,    27,   111,    94,   114,    27,
      64,    94,    94,    94,    94,   122,    65,   127,    66,   140,
      23,    14,    45,    29,    47,   135,   104,   137,    68,    69,
     108,    70,   109,    30,    17,    71,    50,    94,   143,   144,
      24,    21,   138,    59,    33,    60,   136,    61,    62,     2,
       3,    36,   -14,     4,    63,    87,    51,    64,    37,    48,
     100,     1,   139,    65,    38,    66,    67,     2,     3,    18,
      88,     4,    39,    19,    43,    68,    69,    44,    70,    59,
      35,    60,    71,    61,    62,     2,     3,    22,    64,     4,
      63,    19,    48,    64,    10,    48,    66,    -2,     1,    65,
      10,    66,    67,    53,     2,     3,    68,    69,     4,    70,
      54,    68,    69,    71,    70,     2,     3,   -24,    71,     4,
      55,     2,     3,    86,    25,     4,    89,     2,     3,    88,
      31,     4,    97,    20,    21,   107,    98,    90,    91,    96,
      19,   117,   110,   118,   128,   130,   131,    87,   132,   133,
     109,   134,   141,   142,   124,    15,    32,   125,     0,   126
};

static const yytype_int16 yycheck[] =
{
      66,    11,    75,    66,    13,    71,    42,    90,    71,     1,
      63,    64,     1,    97,     1,    36,    52,     0,    16,   103,
      36,     1,     1,     6,    22,    17,     1,    13,    14,    21,
     113,    97,    21,    42,    21,    18,    89,   103,    91,    22,
      15,   107,   108,   109,   110,    98,    21,   110,    23,   133,
       1,     0,    35,    33,    33,   128,    42,   130,    33,    34,
      38,    36,    40,    36,    74,    40,     1,   133,   141,   142,
      21,    22,     1,     1,    21,     3,   129,     5,     6,     7,
       8,    36,    17,    11,    12,    21,    21,    15,    20,    17,
      18,     1,    21,    21,    20,    23,    24,     7,     8,    15,
      36,    11,    19,    19,    16,    33,    34,    21,    36,     1,
      22,     3,    40,     5,     6,     7,     8,    15,    15,    11,
      12,    19,    17,    15,     0,    17,    23,     0,     1,    21,
       6,    23,    24,    36,     7,     8,    33,    34,    11,    36,
      20,    33,    34,    40,    36,     7,     8,    18,    40,    11,
      20,     7,     8,    18,    16,    11,    15,     7,     8,    36,
      16,    11,    15,    21,    22,    37,    19,    15,    15,    15,
      19,    16,    41,    36,    16,    16,    16,    21,    16,    22,
      40,    20,     4,    16,   107,     6,    22,   108,    -1,   109
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     7,     8,    11,    45,    46,    47,    48,    49,
      56,    57,    36,    58,     0,    47,    36,    58,    15,    19,
      21,    22,    15,     1,    21,    16,    52,    57,     1,    33,
      36,    16,    52,    21,    16,    22,    36,    20,    20,    19,
       1,    21,    51,    16,    21,    57,     1,    33,    17,    53,
       1,    21,    50,    36,    20,    20,    54,    55,    53,     1,
       3,     5,     6,    12,    15,    21,    23,    24,    33,    34,
      36,    40,    53,    56,    57,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    18,    21,    36,    15,
      15,    15,    63,    63,    62,    68,    15,    15,    19,    68,
      18,    60,    13,    14,    42,     1,    21,    37,    38,    40,
      41,    63,     1,    61,    63,     1,    21,    16,    36,    64,
      70,    71,    63,    64,    65,    66,    67,    68,    16,    61,
      16,    16,    16,    22,    20,    60,    63,    60,     1,    21,
      64,     4,    16,    60,    60
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    46,    46,    47,    47,    47,    48,    48,
      48,    48,    48,    48,    50,    49,    51,    49,    52,    52,
      52,    52,    54,    53,    55,    53,    56,    56,    56,    57,
      57,    57,    58,    58,    58,    58,    58,    58,    59,    59,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    61,    61,    61,    61,    62,    62,    63,    63,    64,
      64,    65,    65,    66,    66,    67,    67,    68,    68,    68,
      69,    69,    69,    69,    69,    69,    69,    70,    70,    71,
      71
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     6,     5,
       6,     6,     5,     5,     0,     7,     0,     6,     4,     3,
       2,     1,     0,     4,     0,     3,     3,     3,     3,     1,
       1,     1,     3,     6,     1,     4,     4,     6,     1,     2,
       1,     1,     1,     7,     5,     7,     5,     5,     3,     5,
       3,     1,     2,     2,     2,     1,     4,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     2,     2,     1,
       1,     4,     3,     1,     1,     2,     2,     1,     0,     3,
       1
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
  unsigned long int yylno = yyrline[yyrule];
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
                  (unsigned long int) yystacksize));

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
        case 2:
#line 82 "1505035.y" /* yacc.c:1646  */
    {
		//write your code in this block in all the similar blocks below
		//logout << "At line no: " << line_count<<" start : program \n\n";
	}
#line 1452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 90 "1505035.y" /* yacc.c:1646  */
    {
		logout << "At line no: " << line_count<< " program : program unit\n\n";
		logout << (yyvsp[-1].SymVal)->getName()<<endl<<(yyvsp[0].SymVal)->getName()<<endl<< endl<<endl;
		
		(yyval.SymVal)->setName((yyvsp[-1].SymVal)->getName()+"\n"+(yyvsp[0].SymVal)->getName());
		
	}
#line 1464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 100 "1505035.y" /* yacc.c:1646  */
    {
		logout<< "At line no: " << line_count<<" program : unit\n\n";
		logout << (yyvsp[0].SymVal)->getName()<<endl<< endl<<endl;
		
		(yyval.SymVal)->setName((yyvsp[0].SymVal)->getName());
	}
#line 1475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 110 "1505035.y" /* yacc.c:1646  */
    {
		logout << "At line no: " << line_count<< " unit : var_declaration\n\n";
		logout << (yyvsp[0].SymVal)->getName()<<endl<< endl<<endl;
		
		(yyval.SymVal)->setName((yyvsp[0].SymVal)->getName());
	}
#line 1486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 119 "1505035.y" /* yacc.c:1646  */
    {
		logout << "At line no: " << line_count<< " unit : func_declaration\n\n";
		logout << (yyvsp[0].SymVal)->getName()<<endl<< endl<<endl;
	}
#line 1495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 126 "1505035.y" /* yacc.c:1646  */
    {
		logout << "At line no: " << line_count<< " unit : func_definition\n\n";
		logout << (yyvsp[0].SymVal)->getName()<<endl<< endl;
	}
#line 1504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 134 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " func_declaration : type_specifier ID LPAREN parameter_list RPAREN SEMICOLON\n\n";
			logout <<(yyvsp[-5].SymVal)->getName()<<" "<< (yyvsp[-4].SymVal)->getName()<<"( "<<(yyvsp[-2].SymVal)->getName()<<" );\n\n\n";
			
			SymbolInfo *temp = new SymbolInfo((yyvsp[-4].SymVal)->getName(),"ID");
			temp->setDataType((yyvsp[-5].SymVal)->getName());
			temp->setIdType("FUNC");
			temp->setParam(param_list);
			temp->isDeclared = true;
			param_list.clear();
			
			SymbolInfo* test = table.Insert(temp);
			if( test != 0 ) 
				{	
					if(test->isDefined == false){
						error << "Error at line "<<line_count<<" : Multiple declaration of "<<(yyvsp[-4].SymVal)->getName()<<"\n\n";
						error_count++;
					}
				}
				
			(yyval.SymVal) = new SymbolInfo ((yyvsp[-5].SymVal)->getName()+" "+ (yyvsp[-4].SymVal)->getName()+"("+(yyvsp[-2].SymVal)->getName()+");");
			
		}
#line 1532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 160 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " func_declaration : type_specifier ID LPAREN RPAREN SEMICOLON\n\n";
			
			logout <<(yyvsp[-4].SymVal)->getName()<<" "<< (yyvsp[-3].SymVal)->getName()<<"();\n\n\n";
			
			SymbolInfo *temp = new SymbolInfo((yyvsp[-3].SymVal)->getName(),(yyvsp[-3].SymVal)->getType());
			temp->setDataType((yyvsp[-4].SymVal)->getName());
			temp->setIdType("FUNC");
			temp->setParam(param_list);
			temp->isDeclared = true;
			param_list.clear();
			SymbolInfo *test = table.Insert(temp);
			if( test != 0 ) 
				{	
					if(test->isDefined == false){
						error << "Error at line "<<line_count<<" : Multiple declaration of "<<(yyvsp[-3].SymVal)->getName()<<"\n\n";
						error_count++;
					}
				}
				
			(yyval.SymVal) = new SymbolInfo ((yyvsp[-4].SymVal)->getName()+" "+ (yyvsp[-3].SymVal)->getName()+"();");
		}
#line 1559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 184 "1505035.y" /* yacc.c:1646  */
    {
			yyclearin; error_count++;
			logout << "At line "<<line_count <<" error ID LPAREN parameter_list RPAREN SEMICOLON\n\n";
			logout << "error"<<(yyvsp[-4].SymVal)->getName()<<"("+ (yyvsp[-2].SymVal)->getName()+");\n\n";
			error << "Error at line "<< line_count<< " : expecting return type of fucntion "<<(yyvsp[-4].SymVal)->getName()<<"\n\n";
			
			SymbolInfo *temp = new SymbolInfo((yyvsp[-4].SymVal)->getName(),"ID");
			temp->setDataType((yyvsp[-4].SymVal)->getName());
			temp->setIdType("FUNC");
			temp->setParam(param_list);
			temp->isDeclared = true;
			param_list.clear();
			SymbolInfo* test = table.Insert(temp);
			if( test != 0 ) 
				{	
					if(test->isDefined == false){
						error << "Error at line "<<line_count<<" : Multiple declaration of "<<(yyvsp[-4].SymVal)->getName()<<"\n\n";
						error_count++;
					}
				}
				
			(yyval.SymVal) = new SymbolInfo ("error "+(yyvsp[-4].SymVal)->getName()+"("+ (yyvsp[-2].SymVal)->getName()+");");
			yyerrok;
		}
#line 1588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 210 "1505035.y" /* yacc.c:1646  */
    {
			yyclearin; error_count++;
			error << "Error at line "<< line_count<< " : expecting ; after function declaration\n\n";
			(yyval.SymVal) = new SymbolInfo ((yyvsp[-5].SymVal)->getName()+(yyvsp[-4].SymVal)->getName()+"("+ (yyvsp[-2].SymVal)->getName()+") error");
			yyerrok;
		}
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 218 "1505035.y" /* yacc.c:1646  */
    {
			yyclearin; error_count++;
			error << "Error at line "<< line_count<< " : expecting return type of fucntion "<<(yyvsp[-3].SymVal)->getName()<<"\n\n";
			(yyval.SymVal) = new SymbolInfo ("error "+(yyvsp[-3].SymVal)->getName()+"();");
			yyerrok;
		}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 226 "1505035.y" /* yacc.c:1646  */
    {
			yyclearin; error_count++;
			error << "Error at line "<< line_count<< " : expecting ; after function declaration\n\n";
			(yyval.SymVal) = new SymbolInfo ((yyvsp[-4].SymVal)->getName()+" "+ (yyvsp[-3].SymVal)->getName()+"() error");
			yyerrok;
		}
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 234 "1505035.y" /* yacc.c:1646  */
    { 

			SymbolInfo *temp = new SymbolInfo((yyvsp[-3].SymVal)->getName(),"ID");
			temp->setDataType((yyvsp[-4].SymVal)->getName());
			temp->setIdType("FUNC");
			
			temp->isDefined = true;
			
			SymbolInfo* test = table.Insert(temp);
			
			if( test != 0 ) 
				{	
				//cout <<specifier<<endl;
					if(test->getDataType() != (yyvsp[-4].SymVal)->getName())
					    error<< "Error at line :"<<line_count << " : return type mismacth\n\n";	
					if(test->isDefined == true){
						error << "Error at line "<<line_count<<" : Redefinition of function "<<(yyvsp[-3].SymVal)->getName()<<"\n\n";
						error_count++;
					}
					else {
						test->isDefined = true;
						const vector<SymbolInfo*>* param = test->getParam();
				//cout << param_list.size()<<endl;
						if(param_list.size() != (*param).size()){
							error <<"Error at line "<<line_count<<" : Parameter number does not match with previous fucntion declaration\n\n ";
						}
						else{
							for(int i=0; i<param_list.size();i++ ){
								if(param_list[i]->getDataType() != (*param)[i]->getDataType()){
									error <<"Error at line "<<line_count<<" : parameter type does not match with previous function declaration\n\n";
								}
					
							}
						}
					//cout <<test->getName()<<endl;
					}
				}
				
			else{

				temp->setParam(param_list);	
			
			}
			
			func = (yyvsp[-4].SymVal)->getName();
			//param_list.clear();	
			}
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 282 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " func_definition : type_specifier ID LPAREN parameter_list RPAREN compound_statement\n\n";
			logout <<(yyvsp[-6].SymVal)->getName()<<" "<< (yyvsp[-5].SymVal)->getName()<<"("<<(yyvsp[-3].SymVal)->getName()<<")"<<(yyvsp[0].SymVal)->getName()<<"\n\n\n";
			
			(yyval.SymVal)->setName((yyvsp[-6].SymVal)->getName()+" "+ (yyvsp[-5].SymVal)->getName()+"("+(yyvsp[-3].SymVal)->getName()+")"+(yyvsp[0].SymVal)->getName());
		}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 289 "1505035.y" /* yacc.c:1646  */
    { 
		
			SymbolInfo *temp = new SymbolInfo((yyvsp[-2].SymVal)->getName(),"ID");
			temp->setDataType((yyvsp[-3].SymVal)->getName());
			temp->setIdType("FUNC");
			
			SymbolInfo* test = table.Insert(temp);
			if( test != 0 ) 
				{
					if(test->getDataType() != (yyvsp[-3].SymVal)->getName())
					    error<< "Error at line :"<<line_count << " : return type mismacth\n\n";	
					if(test->isDefined == true){
						error << "Error at line "<<line_count<<" : Redefinition of function "<<(yyvsp[-2].SymVal)->getName()<<"\n\n";
						error_count++;
					}
					else {
						test->isDefined = true;
					}
				}
				
			else{
				temp->setParam(param_list);
			}
			
			func = (yyvsp[-2].SymVal)->getName();
			param_list.clear();
		 }
#line 1716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 317 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " func_definition : type_specifier ID LPAREN RPAREN compound_statement\n\n";
			logout <<(yyvsp[-5].SymVal)->getName()<<" "<<(yyvsp[-4].SymVal)->getName()<<"()"<<(yyvsp[0].SymVal)->getName()<<"\n\n\n";
			
			(yyval.SymVal)->setName((yyvsp[-5].SymVal)->getName()+" "+ (yyvsp[-4].SymVal)->getName()+"()"+(yyvsp[0].SymVal)->getName());
		}
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 329 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " parameter_list  : parameter_list COMMA type_specifier ID\n\n";
			logout << (yyvsp[-3].SymVal)->getName()<<","<<(yyvsp[-1].SymVal)->getName()<<"  "<<(yyvsp[0].SymVal)->getName()<<endl<<endl<<endl;
			
			SymbolInfo* temp = new SymbolInfo((yyvsp[0].SymVal)->getName(), "ID");
			temp->setDataType(specifier);
			param_list.push_back(temp);
			
			
			(yyval.SymVal)->setName((yyvsp[-3].SymVal)->getName()+","+(yyvsp[-1].SymVal)->getName()+"  "+(yyvsp[0].SymVal)->getName());
			//for(int i=0; i<param_list.size(); i++) cout <<param_list[i].getName()<< " ";
			
			//cout << $3->getName()<<endl;
		}
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 346 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " parameter_list  : parameter_list COMMA type_specifier\n\n";
			logout << (yyvsp[-2].SymVal)->getName()<<","<<(yyvsp[0].SymVal)->getName()<<endl<<endl;
			
			SymbolInfo* temp = new SymbolInfo((yyvsp[0].SymVal)->getName(), (yyvsp[0].SymVal)->getType());
			temp->setDataType(specifier);
			param_list.push_back(temp);
			
			(yyval.SymVal)->setName((yyvsp[-2].SymVal)->getName()+","+(yyvsp[0].SymVal)->getName());
		}
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 359 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " parameter_list  : type_specifier ID\n\n";
			logout << (yyvsp[-1].SymVal)->getName()<<"  "<<(yyvsp[0].SymVal)->getName()<<endl<<endl;
			
			SymbolInfo* temp = new SymbolInfo((yyvsp[0].SymVal)->getName(), (yyvsp[0].SymVal)->getType());
			temp->setDataType(specifier);
			param_list.push_back(temp);
			
			(yyval.SymVal)->setName((yyvsp[-1].SymVal)->getName()+"  "+(yyvsp[0].SymVal)->getName());
			//for(int i=0; i<param_list.size(); i++) cout <<param_list[i]->getName()<< " ";
			//cout <<"helo here "<< $$->getName()<<endl;
			
		}
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 375 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " parameter_list  : type_specifier\n\n";
			logout << (yyvsp[0].SymVal)->getName()<<endl<<endl;
			
			SymbolInfo* temp = new SymbolInfo((yyvsp[0].SymVal)->getName(), (yyvsp[0].SymVal)->getType());
			temp->setDataType(specifier);
			param_list.push_back(temp);
			
			(yyval.SymVal)->setName((yyvsp[0].SymVal)->getName());

		}
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 390 "1505035.y" /* yacc.c:1646  */
    {table.EnterScope(logout);for(int i =0; i<param_list.size(); i++) table.Insert(param_list[i]); cout <<param_list.size();param_list.clear();}
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 392 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " compound_statement : LCURL statements RCURL\n\n";
			logout << "{\n"<<(yyvsp[-1].SymVal)->getName()<<"\n}"<<endl<< endl<<endl;
		
			(yyval.SymVal) =  new SymbolInfo("{\n"+(yyvsp[-1].SymVal)->getName()+"\n}");
			
			table.PrintAllScope(logout);	table.ExitScope(logout);
		}
#line 1814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 400 "1505035.y" /* yacc.c:1646  */
    {table.EnterScope(logout);for(int i =0; i<param_list.size(); i++) table.Insert(param_list[i]);param_list.clear();}
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 402 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " compound_statement : LCURL RCURL\n\n";
			logout << "{\n\n\n}"<<endl<< endl;
		
			(yyval.SymVal) = new SymbolInfo("{\n\n}");
			table.PrintAllScope(logout);	table.ExitScope(logout);
		}
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 413 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " var_declaration : type_specifier declaration_list SEMICOLON\n\n";      
			logout <<(yyvsp[-2].SymVal)->getName()<<" "<< (yyvsp[-1].SymVal)->getName()<<";\n\n\n";
			
			specifier = (yyvsp[-2].SymVal)->getName();
			(yyval.SymVal)->setName((yyvsp[-2].SymVal)->getName()+" "+ (yyvsp[-1].SymVal)->getName()+";");
		}
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 422 "1505035.y" /* yacc.c:1646  */
    {
			yyclearin; error_count++;
			error << "Error at line "<< line_count<< " : expecting ; after variable declaration\n\n";
			yyerrok;
		}
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 428 "1505035.y" /* yacc.c:1646  */
    {
			yyclearin; error_count++;
			error << "Error at line "<< line_count<< " : expecting type specifier before variable declaration\n\n";
			yyerrok;
		}
#line 1864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 438 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " type_specifier : INT\n\n"<< "int\n\n";
			(yyval.SymVal) = new SymbolInfo("int");
			specifier = "int";
			//cout <<"int"<<endl;
			//logout << $$->getName()<<endl;
		}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 448 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " type_specifier : FLOAT\n\n"<<"float\n\n";
			(yyval.SymVal) = new SymbolInfo("float");
			specifier = "float";
		}
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 456 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " type_specifier : VOID\n\n"<<"void\n\n";
			(yyval.SymVal) = new SymbolInfo("void");
			specifier = "void";
		}
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 466 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " declaration_list : declaration_list COMMA ID\n\n";
			logout << (yyvsp[-2].SymVal)->getName()<<","<<(yyvsp[0].SymVal)->getName()<<"\n\n";
			
			if(specifier == "void") 
				{
					error << "Error at line "<<line_count <<" : variable type can not be void\n\n";
					error_count++;
				}
			
			
			SymbolInfo *temp = new SymbolInfo((yyvsp[0].SymVal)->getName(),(yyvsp[0].SymVal)->getType());
			temp->setDataType(specifier);
			temp->setIdType("VAR");
			SymbolInfo* test = table.Insert(temp);
			if( test != 0 ){ 
				error << "Error at line "<<line_count<<" : Multiple declaration of "<<(yyvsp[0].SymVal)->getName()<<"\n\n";
				error_count++;
			}	
			
			(yyval.SymVal)->setName((yyvsp[-2].SymVal)->getName()+","+(yyvsp[0].SymVal)->getName()); 
		}
#line 1923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 491 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " declaration_list : declaration_list COMMA ID LTHIRD CONST_INT RTHIRD\n\n";
			logout << (yyvsp[-5].SymVal)->getName() << " , " << (yyvsp[-3].SymVal)->getName()<<"["<<(yyvsp[-1].SymVal)->getName()<<"]\n\n";
			
			
			if(specifier == "void") 
				{
					error << "Error at line "<<line_count <<" : array type can not be void\n\n";
					error_count++;
				}
			
			SymbolInfo *temp = new SymbolInfo((yyvsp[-3].SymVal)->getName(),(yyvsp[-3].SymVal)->getType());
			temp->setDataType(specifier);
			temp->setIdType("ARRAY");
			table.PrintAllScope(logout);
			temp->arraySize = atoi(((yyvsp[-1].SymVal)->getName()).c_str());
			SymbolInfo* test = table.Insert(temp);
			if( test != 0 ) {
				error << "Error at line "<<line_count<<" : Multiple declaration of "<<(yyvsp[-3].SymVal)->getName()<<"\n\n";
				error_count++;
			}
			list = (yyvsp[-5].SymVal)->getName()+","+(yyvsp[-3].SymVal)->getName()+"["+(yyvsp[-1].SymVal)->getName()+"]";
			(yyval.SymVal)->setName(list);
		}
#line 1952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 518 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " declaration_list : ID\n\n"<<(yyvsp[0].SymVal)->getName()<<"\n\n";
			
			if(specifier == "void") 
				{
					error << "Error at line "<<line_count <<" : variable type can not be void\n\n";
					error_count++;
				}
			
			SymbolInfo *temp = new SymbolInfo((yyvsp[0].SymVal)->getName(),(yyvsp[0].SymVal)->getType());
			temp->setDataType(specifier);
			temp->setIdType("VAR");
			SymbolInfo* test = table.Insert(temp);
			if( test != 0 ) {
				error << "Error at line "<<line_count<<" : Multiple declaration of "<<(yyvsp[0].SymVal)->getName()<<"\n\n";
				error_count++;
			}
						
			(yyval.SymVal) = new SymbolInfo((yyvsp[0].SymVal)->getName());
			
		}
#line 1978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 542 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " declaration_list : ID LTHIRD CONST_INT RTHIRD\n\n";
			logout << (yyvsp[-3].SymVal)->getName()<<"["<<(yyvsp[-1].SymVal)->getName()<<"]\n\n";
			
			if(specifier == "void") 
				{
					error << "Error at line "<<line_count <<" : array type can not be void\n\n";
					error_count++;
				}
			
			SymbolInfo *temp = new SymbolInfo((yyvsp[-3].SymVal)->getName(),"ID");
			temp->setDataType(specifier);
			temp->setIdType("ARRAY");
			temp->arraySize = atoi(((yyvsp[-1].SymVal)->getName()).c_str());
			//cout <<temp->getIdType()<<endl;
			SymbolInfo* test = table.Insert(temp);
			if( test != 0 ) {
				logout << "Error at line "<<line_count<<" : Multiple declaration of "<<(yyvsp[-3].SymVal)->getName()<<"\n\n";
				error << "Error at line "<<line_count<<" : Multiple declaration of "<<(yyvsp[-3].SymVal)->getName()<<"\n\n";
				error_count++;
			}
	
			(yyval.SymVal) = new SymbolInfo((yyvsp[-3].SymVal)->getName()+"["+(yyvsp[-1].SymVal)->getName()+"]");			
		}
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 569 "1505035.y" /* yacc.c:1646  */
    {
			yyclearin;	error_count++;
			logout << "At line no: " << line_count<< " declaration_list : ID LTHIRD error RTHIRD\n\n";
			logout << (yyvsp[-3].SymVal)->getName()<<"[error]\n\n";
			(yyvsp[-3].SymVal)->setDataType(specifier);
			(yyvsp[-3].SymVal)->setIdType("ARRAY");
			
			if(specifier == "void") 
				{
					error << "Error at line "<<line_count <<" : array type can not be void\n\n";
					error_count++;
				}
			SymbolInfo *temp = new SymbolInfo((yyvsp[-3].SymVal)->getName(),(yyvsp[-3].SymVal)->getType());
			temp->setDataType(specifier);
			temp->setIdType("ARRAY");
			
			SymbolInfo* test = table.Insert(temp);
			if( test != 0 ){
				error << "Error at line "<<line_count<<" : Multiple declaration of "<<(yyvsp[-3].SymVal)->getName()<<"\n\n";
				error_count++;
			}
			error << "Error at line "<<line_count <<" : Non-integer Array Index\n\n";
			
			(yyval.SymVal) = new SymbolInfo((yyvsp[-3].SymVal)->getName()+"[error]");
			yyerrok;
		}
#line 2038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 598 "1505035.y" /* yacc.c:1646  */
    {
			yyclearin;	error_count++;
			logout << "At line no: " << line_count<< " declaration_list : ID LTHIRD error RTHIRD\n\n";
			logout << (yyvsp[-3].SymVal)->getName()<<"[error]\n\n";
			
			if(specifier == "void") 
				{
					error << "Error at line "<<line_count <<" : array type can not be void\n\n";
					error_count++;
				}
			SymbolInfo *temp = new SymbolInfo((yyvsp[-3].SymVal)->getName(),(yyvsp[-3].SymVal)->getType());
			temp->setDataType(specifier);
			temp->setIdType("ARRAY");
			
			SymbolInfo* test = table.Insert(temp);
			if( test != 0 ){
				error << "Error at line "<<line_count<<" : Multiple declaration of "<<(yyvsp[-3].SymVal)->getName()<<"\n\n";
				error_count++;
			}
			
			error << "Error at line "<<line_count <<" : Non-integer Array Index\n\n";
			
			(yyval.SymVal) = new SymbolInfo((yyvsp[-3].SymVal)->getName()+"[error]");
			yyerrok;
		}
#line 2068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 627 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " statements : statement\n\n";
			logout << (yyvsp[0].SymVal)->getName()<<endl<< endl<<endl;
		
			(yyval.SymVal)->setName((yyvsp[0].SymVal)->getName());
		}
#line 2079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 636 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " statements : statements statement\n\n";
			logout << (yyvsp[-1].SymVal)->getName()<<endl<<(yyvsp[0].SymVal)->getName()<<endl<<endl<<endl;
		
			(yyval.SymVal)->setName((yyvsp[-1].SymVal)->getName()+"\n"+(yyvsp[0].SymVal)->getName());
		}
#line 2090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 646 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " statement : var_declaration\n\n";
			logout << (yyvsp[0].SymVal)->getName()<<endl<< endl<<endl;
		
			(yyval.SymVal) = new SymbolInfo((yyvsp[0].SymVal)->getName());
		}
#line 2101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 654 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " statement : expression_statement\n\n";
			logout << (yyvsp[0].SymVal)->getName() << endl<<endl<<endl;
		
			(yyval.SymVal) = new SymbolInfo((yyvsp[0].SymVal)->getName());
		}
#line 2112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 662 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " statement : compound_statement\n\n";
			logout << (yyvsp[0].SymVal)->getName() <<endl<< endl<<endl;
		
			(yyval.SymVal) = new SymbolInfo((yyvsp[0].SymVal)->getName());
		}
#line 2123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 670 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " statement : FOR LPAREN expression_statement expression_statement expression RPAREN statementn\n\n";
			logout << "for("<<(yyvsp[-4].SymVal)->getName()<<(yyvsp[-3].SymVal)->getName()<<(yyvsp[-2].SymVal)->getName()<<")"<<(yyvsp[0].SymVal)->getName()<< endl<<endl<<endl;
		
			(yyval.SymVal) = new SymbolInfo("for("+(yyvsp[-4].SymVal)->getName()+(yyvsp[-3].SymVal)->getName()+(yyvsp[-2].SymVal)->getName()+")"+(yyvsp[0].SymVal)->getName());
		}
#line 2134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 678 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " statement : IF LPAREN expression RPAREN statement\n\n";
			logout << "if("<<(yyvsp[-2].SymVal)->getName()<<")"<<(yyvsp[0].SymVal)->getName()<< endl<<endl<<endl;
		
			(yyval.SymVal) = new SymbolInfo("if("+(yyvsp[-2].SymVal)->getName()+")"+(yyvsp[0].SymVal)->getName());
			
		}
#line 2146 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 687 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " statement : IF LPAREN expression RPAREN statement ELSE statement\n\n";
			logout << "if("<<(yyvsp[-4].SymVal)->getName()<<")"<<(yyvsp[-2].SymVal)->getName()<<"else"<<(yyvsp[0].SymVal)->getName()<<endl<< endl<<endl;
		
			(yyval.SymVal) = new SymbolInfo("if("+(yyvsp[-4].SymVal)->getName()+")"+(yyvsp[-2].SymVal)->getName()+"else"+(yyvsp[0].SymVal)->getName());
		}
#line 2157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 695 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " statement : WHILE LPAREN expression RPAREN statement\n\n";
			logout << "while("<<(yyvsp[-2].SymVal)->getName()<<")"<<(yyvsp[0].SymVal)->getName()<<endl<< endl<<endl;
		
			(yyval.SymVal) = new SymbolInfo("while("+(yyvsp[-2].SymVal)->getName()+")"+(yyvsp[0].SymVal)->getName());
			
		}
#line 2169 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 704 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " statement : PRINTLN LPAREN ID RPAREN SEMICOLON\n\n";
			logout << "println("<<(yyvsp[-2].SymVal)->getName()<<");"<<endl<< endl<<endl;
		
			(yyval.SymVal) = new SymbolInfo("println("+(yyvsp[-2].SymVal)->getName()+");");
		}
#line 2180 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 712 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " statement : RETURN expression SEMICOLON\n\n";
			logout <<"return "<< (yyvsp[-1].SymVal)->getName() <<";"<<endl<< endl<<endl;
			
			SymbolInfo* test = table.LookUp(func,logout);
			
			if(test != 0){
				string dataType = test->getDataType();
				if((dataType == "void") || ((dataType == "int") && ((yyvsp[-1].SymVal)->getDataType() == "float"))) {
					error<< "Error at line "<<line_count<<" : Return type does not match \n\n";
					error_count++;
				}
			
			}
			(yyval.SymVal) = new SymbolInfo("return "+ (yyvsp[-1].SymVal)->getName()+";");
		}
#line 2201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 730 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " statement : PRINTLN LPAREN ID RPAREN SEMICOLON\n\n";
			logout << "println("<<(yyvsp[-2].SymVal)->getName()<<") error"<<endl<< endl<<endl;
			
			(yyval.SymVal) = new SymbolInfo("println("+(yyvsp[-2].SymVal)->getName()+") error"); 
			yyclearin; error_count++;
			error << "Error at line "<< line_count <<" : Expecting a ; after println statement\n\n";
			yyerrok;
		}
#line 2215 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 741 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " statement : RETURN expression SEMICOLON\n\n";
			logout <<"return "<< (yyvsp[-1].SymVal)->getName() <<"error"<<endl<< endl<<endl;
		
			(yyval.SymVal) = new SymbolInfo("return "+ (yyvsp[-1].SymVal)->getName()+"error");
			yyclearin; error_count++;
			error << "Error at line "<< line_count <<" : Expecting a ; after return statement\n\n";
			yyerrok;
		}
#line 2229 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 753 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " expression_statement : SEMICOLON\n\n";
			logout << ";" << endl<<endl;
		
			(yyval.SymVal) = new SymbolInfo(";");			
		}
#line 2240 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 762 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " expression_statement : expression SEMICOLON\n\n";
			logout << (yyvsp[-1].SymVal)->getName() <<";"<< endl<<endl<<endl;
		
			(yyval.SymVal) = new SymbolInfo((yyvsp[-1].SymVal)->getName()+";","expression_statement");			
			(yyval.SymVal)->setDataType((yyvsp[-1].SymVal)->getDataType());
			
		}
#line 2253 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 773 "1505035.y" /* yacc.c:1646  */
    {
			yyclearin; error_count++;
			error << "Error at line "<< line_count <<" : Expecting a ; after expression end\n\n";
			yyerrok;
		}
#line 2263 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 781 "1505035.y" /* yacc.c:1646  */
    {
			yyclearin; error_count++;
			error << "Error at line "<< line_count <<" : not an expression\n\n";
			yyerrok;
		}
#line 2273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 789 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " variable : ID\n\n";
			logout << (yyvsp[0].SymVal)->getName() << endl<<endl;
		
			(yyval.SymVal) = new SymbolInfo((yyvsp[0].SymVal)->getName(),"variable");	
			SymbolInfo* temp = table.LookUp((yyvsp[0].SymVal)->getName(),logout);
			
			if(temp == 0){
				error_count++;
				error << "Error at line "<< line_count<< " : undecalared variable : "<<(yyvsp[0].SymVal)->getName()<<endl<<endl;
			}
			else{
				if(temp->getIdType() == "ARRAY") {
					error_count++;
					error<<"Error at line "<<line_count<<" : Trying to access array like normal variable\n\n";
				
				}		
				(yyval.SymVal)->setDataType(temp->getDataType());
			}
			
		}
#line 2299 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 813 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " variable : ID LTHIRD expression RTHIRD\n\n";
			logout << (yyvsp[-3].SymVal)->getName()<<"["<<(yyvsp[-1].SymVal)->getName()<<"]"<< endl<<endl;
		
			(yyval.SymVal) = new SymbolInfo((yyvsp[-3].SymVal)->getName()+"["+(yyvsp[-1].SymVal)->getName()+"]","variable");	
			SymbolInfo* temp = table.LookUp((yyvsp[-3].SymVal)->getName(),logout);
			if(temp == 0){
				error_count++;
				error << "Error at line "<< line_count<< " : undecalared array : "<<(yyvsp[-3].SymVal)->getName()<<endl<<endl;
			}
			else{
				if(temp->getIdType() == "VAR") {
					error_count++;
					error<<"Error at line "<<line_count<<" : "<<(yyvsp[-3].SymVal)->getName()<<" not an Array\n\n";
				
				}		
				(yyval.SymVal)->setDataType(temp->getDataType());
			}
			
			if((yyvsp[-1].SymVal)->getDataType() == "float") {
				error_count++;
				error << "Error at line "<< line_count<<" : Non-integer array index\n\n";
			}
		}
#line 2328 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 841 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " expression : logic_expression\n\n";
			logout << (yyvsp[0].SymVal)->getName() << endl<<endl;
		
			(yyval.SymVal) = new SymbolInfo((yyvsp[0].SymVal)->getName(),"expression");			
			(yyval.SymVal)->setDataType((yyvsp[0].SymVal)->getDataType());
		}
#line 2340 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 850 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " expression : variable ASSIGNOP logic_expression\n\n";
			logout << (yyvsp[-2].SymVal)->getName()<<"="<<(yyvsp[0].SymVal)->getName()<< endl<<endl<<endl;
		
			(yyval.SymVal) = new SymbolInfo((yyvsp[-2].SymVal)->getName()+"="+(yyvsp[0].SymVal)->getName(),"logic_expression");			
			if((yyvsp[-2].SymVal)->getDataType() == "float" || (yyvsp[0].SymVal)->getDataType() == "float") (yyval.SymVal)->setDataType("float");
			else (yyval.SymVal)->setDataType("int");
			
			if((yyvsp[-2].SymVal)->getDataType() == "int" && (yyvsp[0].SymVal)->getDataType() == "float"){
				error_count++;
				error<< "Error at line "<<line_count<<" : Type mismatch \n\n";
				error <<"Warning at line "<<line_count <<" : Possible data loss in float to int conversion\n\n";
				logout<<"Warning at line "<<line_count <<" : Possible data loss in float to int conversion\n\n";
			}
		
		}
#line 2361 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 869 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " logic_expression : rel_expression\n\n";
			logout << (yyvsp[0].SymVal)->getName() << endl<<endl;
		
			(yyval.SymVal) = new SymbolInfo((yyvsp[0].SymVal)->getName(),"logic_expression");			
			(yyval.SymVal)->setDataType((yyvsp[0].SymVal)->getDataType());
			
		}
#line 2374 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 879 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " logic_expression : rel_expression LOGICOP rel_expression\n\n";
			logout << (yyvsp[-2].SymVal)->getName()<<(yyvsp[-1].SymVal)->getName()<<(yyvsp[0].SymVal)->getName()<< endl<<endl;
		
			(yyval.SymVal) = new SymbolInfo((yyvsp[-2].SymVal)->getName()+(yyvsp[-1].SymVal)->getName()+(yyvsp[0].SymVal)->getName(),"logic_expression");			
			(yyval.SymVal)->setDataType("int");
	
		}
#line 2387 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 890 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " rel_expression : simple_expression\n\n";
			logout << (yyvsp[0].SymVal)->getName() << endl<<endl;
		
			(yyval.SymVal) = new SymbolInfo((yyvsp[0].SymVal)->getName(),"rel_expression");			
			(yyval.SymVal)->setDataType((yyvsp[0].SymVal)->getDataType());

		}
#line 2400 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 900 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " rel_expression : simple_expression RELOP simple_expression\n\n";
			logout << (yyvsp[-2].SymVal)->getName()<<(yyvsp[-1].SymVal)->getName()<<(yyvsp[0].SymVal)->getName()<< endl<<endl;
		
			(yyval.SymVal) = new SymbolInfo((yyvsp[-2].SymVal)->getName()+(yyvsp[-1].SymVal)->getName()+(yyvsp[0].SymVal)->getName(),"rel_expression");			
			(yyval.SymVal)->setDataType("int");
			
		}
#line 2413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 911 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " simple_expression : term\n\n";
			logout << (yyvsp[0].SymVal)->getName() << endl<<endl;
		
			(yyval.SymVal) = new SymbolInfo((yyvsp[0].SymVal)->getName(),"simple_expression");			
			(yyval.SymVal)->setDataType((yyvsp[0].SymVal)->getDataType());

		}
#line 2426 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 921 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " simple_expression : simple_expression ADDOP term\n\n";
			logout << (yyvsp[-2].SymVal)->getName()<<(yyvsp[-1].SymVal)->getName()<<(yyvsp[0].SymVal)->getName()<< endl<<endl;
		
			(yyval.SymVal) = new SymbolInfo((yyvsp[-2].SymVal)->getName()+(yyvsp[-1].SymVal)->getName()+(yyvsp[0].SymVal)->getName(),"simple_expression");			
			if((yyvsp[-2].SymVal)->getDataType() == "float" || (yyvsp[0].SymVal)->getDataType() == "float") (yyval.SymVal)->setDataType("float");
			else (yyval.SymVal)->setDataType("int");	
		}
#line 2439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 932 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " term : unary_expression\n\n";
			logout << (yyvsp[0].SymVal)->getName() << endl<<endl;
		
			(yyval.SymVal) = new SymbolInfo((yyvsp[0].SymVal)->getName(),"term");			
			(yyval.SymVal)->setDataType((yyvsp[0].SymVal)->getDataType());
		}
#line 2451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 941 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " term : term MULOP unary_expression\n\n";
			logout << (yyvsp[-2].SymVal)->getName()<<(yyvsp[-1].SymVal)->getName()<<(yyvsp[0].SymVal)->getName()<< endl<<endl;
		
			(yyval.SymVal) = new SymbolInfo((yyvsp[-2].SymVal)->getName()+(yyvsp[-1].SymVal)->getName()+(yyvsp[0].SymVal)->getName(),"term");			
			if((yyvsp[-2].SymVal)->getDataType() == "float" || (yyvsp[0].SymVal)->getDataType() == "float"){
				(yyval.SymVal)->setDataType("float");
				if((yyvsp[-1].SymVal)->getName() == "%") error<<"Error at line "<< line_count <<" : both operands on modulus should be integer\n\n";
			}
			else (yyval.SymVal)->setDataType("int");
		}
#line 2467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 955 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " unary_expression : ADDOP unary_expression\n\n";
			logout << (yyvsp[-1].SymVal)->getName()<<(yyvsp[0].SymVal)->getName()<< endl<<endl;
		
			(yyval.SymVal) = new SymbolInfo((yyvsp[-1].SymVal)->getName()+(yyvsp[0].SymVal)->getName(),"unary_expression");			
			(yyval.SymVal)->setDataType((yyvsp[0].SymVal)->getDataType());
		}
#line 2479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 964 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " unary_expression : NOT unary_expression\n\n";
			logout << "!"<<(yyvsp[0].SymVal)->getName()<< endl<<endl;
		
			(yyval.SymVal) = new SymbolInfo("!"+(yyvsp[0].SymVal)->getName(),"unary_expression");			
			(yyval.SymVal)->setDataType((yyvsp[0].SymVal)->getDataType());
		}
#line 2491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 973 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " unary_expression : factor\n\n";
			logout << (yyvsp[0].SymVal)->getName() << endl<<endl;
		
			(yyval.SymVal) = new SymbolInfo((yyvsp[0].SymVal)->getName(),"unary_expression");			
			(yyval.SymVal)->setDataType((yyvsp[0].SymVal)->getDataType());
		}
#line 2503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 983 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " factor : variable\n\n";
			logout << (yyvsp[0].SymVal)->getName() << endl<<endl;
		
			(yyval.SymVal) = new SymbolInfo((yyvsp[0].SymVal)->getName(),"factor");			
			(yyval.SymVal)->setDataType((yyvsp[0].SymVal)->getDataType());

		}
#line 2516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 993 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " factor : ID LPAREN argument_list RPAREN\n\n";
			logout <<(yyvsp[-3].SymVal)->getName()<<"("<< (yyvsp[-1].SymVal)->getName()<<")\n\n";
			
			(yyval.SymVal) = new SymbolInfo((yyvsp[-3].SymVal)->getName()+"("+(yyvsp[-1].SymVal)->getName()+")");
			SymbolInfo* temp = table.LookUp((yyvsp[-3].SymVal)->getName(),logout);
			
			if(temp == 0){
				error_count++;
				error << "Error at line "<< line_count<< " : function "<<(yyvsp[-3].SymVal)->getName()<<" does not exist\n\n";
			}
			else{
			
			if(temp->getIdType() != "FUNC") {
				error_count++;
			 	error << "Error at line "<< line_count<< " : function "<<(yyvsp[-3].SymVal)->getName()<<" does not exist\n\n";
			}
			else{
				if(temp->getDataType() == "void") {
					error_count++;
					error<<"Error at line "<<line_count<<" : a void function can not be called as a part of an expression or assignment\n\n";
				}
				if(temp->isDefined == false){
					error << "Error at line "<< line_count<<" : function "<<(yyvsp[-3].SymVal)->getName()<<" is not defined\n\n";
				}
				const vector<SymbolInfo*>* param = temp->getParam();
				
				if(arg_list.size() != (*param).size()){
				error_count++;
					error <<"Error at line "<<line_count<<" : Parameter number does not match\n\n ";
				}
				else{
					for(int i=0; i<arg_list.size();i++ ){
						if(arg_list[i]->getDataType() != (*param)[i]->getDataType()){
							error <<"Error at line "<<line_count<<" : parameter type does not match\n\n";
							error_count++;
						}
					
					}
				}		
				(yyval.SymVal)->setDataType(temp->getDataType());
			}
			}
			arg_list.clear();
		}
#line 2566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 1040 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " factor : LPAREN expression RPAREN\n\n";
			logout <<"("<< (yyvsp[-1].SymVal)->getName()<<")\n\n";
			
			(yyval.SymVal) = new SymbolInfo("("+(yyvsp[-1].SymVal)->getName()+")","factor");
			(yyval.SymVal)->setDataType((yyvsp[-1].SymVal)->getDataType());
			
		}
#line 2579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 1050 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " factor : CONST_INT\n\n";
			logout << (yyvsp[0].SymVal)->getName() << endl<<endl;

			(yyval.SymVal) = new SymbolInfo((yyvsp[0].SymVal)->getName(),"CONST_INT");			
			(yyval.SymVal)->setDataType("int");
			
		}
#line 2592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 1060 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " factor : CONST_FLOAT\n\n";
			logout << (yyvsp[0].SymVal)->getName() << endl<<endl;
		
			(yyval.SymVal) = new SymbolInfo((yyvsp[0].SymVal)->getName(),"CONST_FLOAT");			
			(yyval.SymVal)->setDataType("float");
		}
#line 2604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 1069 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " factor : variable INCOP\n\n";
			logout << (yyvsp[-1].SymVal)->getName()<<"++" << endl<<endl;
		
			(yyval.SymVal) = new SymbolInfo((yyvsp[-1].SymVal)->getName()+"++");
			(yyval.SymVal)->setDataType((yyvsp[-1].SymVal)->getDataType());
		}
#line 2616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 1078 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " factor : vaiable DECOP\n\n";
			logout << (yyvsp[-1].SymVal)->getName()<<"--" << endl<<endl;
		
			(yyval.SymVal) = new SymbolInfo((yyvsp[-1].SymVal)->getName()+"--");
			(yyval.SymVal)->setDataType((yyvsp[-1].SymVal)->getDataType());
		}
#line 2628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 1088 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " argument_list : arguments\n\n";
			logout << (yyvsp[0].SymVal)->getName() << endl<<endl;
		
			(yyval.SymVal) = new SymbolInfo((yyvsp[0].SymVal)->getName());
			(yyval.SymVal)->setDataType((yyvsp[0].SymVal)->getDataType());
		}
#line 2640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 1097 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " argument_list : \n\n";
			logout << endl<<endl;
		
			(yyval.SymVal) = new SymbolInfo("","arguments");
			//cout<<"hello \n";
		}
#line 2652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 1107 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " arguments : arguments COMMA logic_expression\n\n";
			logout << (yyvsp[-2].SymVal)->getName()<<","<<(yyvsp[0].SymVal)->getName() << endl<<endl;
		
			SymbolInfo* temp = new SymbolInfo((yyvsp[0].SymVal)->getName(), "arguments");
			temp->setDataType((yyvsp[0].SymVal)->getDataType());
			arg_list.push_back(temp);
			
			(yyval.SymVal) = new SymbolInfo((yyvsp[-2].SymVal)->getName()+","+(yyvsp[0].SymVal)->getName(),"arguments");
			
		}
#line 2668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 1120 "1505035.y" /* yacc.c:1646  */
    {
			logout << "At line no: " << line_count<< " arguments : logic_expression\n\n";
			logout << (yyvsp[0].SymVal)->getName() << endl<<endl;
			
			SymbolInfo* temp = new SymbolInfo((yyvsp[0].SymVal)->getName(), "logic_expression");
			temp->setDataType((yyvsp[0].SymVal)->getDataType());
			arg_list.push_back(temp);
			
			(yyval.SymVal) = new SymbolInfo((yyvsp[0].SymVal)->getName(),"arguments");
			(yyval.SymVal)->setDataType((yyvsp[0].SymVal)->getDataType());
		}
#line 2684 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2688 "y.tab.c" /* yacc.c:1646  */
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
#line 1135 "1505035.y" /* yacc.c:1906  */


int main(int argc,char *argv[])
{

	if((yyin = fopen(argv[1],"r"))==NULL)
	{
		printf("Cannot Open Input File.\n");
		exit(1);
	}

	yyparse();
	
	logout<<endl<<endl<<"		Symbol Table:"<<endl<<endl;
	table.PrintAllScope(logout);
	logout <<endl<<endl;
	logout << "Total lines : "<< --line_count<< endl<<endl << "Total errors : "<<error_count << endl; 
	error  <<"Total errors : "<<error_count<< endl;
	return 0;
}

