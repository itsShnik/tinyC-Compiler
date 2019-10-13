/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     AUTO = 258,
     ENUM = 259,
     RESTRICT = 260,
     UNSIGNED = 261,
     BREAK = 262,
     EXTERN = 263,
     RETURN = 264,
     VOID = 265,
     CASE = 266,
     FLOAT = 267,
     SHORT = 268,
     VOLATILE = 269,
     CHAR = 270,
     FOR = 271,
     SIGNED = 272,
     WHILE = 273,
     CONST = 274,
     GOTO = 275,
     SIZEOF = 276,
     BOOL = 277,
     CONTINUE = 278,
     IF = 279,
     STATIC = 280,
     COMPLEX = 281,
     DEFAULT = 282,
     INLINE = 283,
     STRUCT = 284,
     IMAGINARY = 285,
     DO = 286,
     INT = 287,
     SWITCH = 288,
     DOUBLE = 289,
     LONG = 290,
     TYPEDEF = 291,
     ELSE = 292,
     REGISTER = 293,
     UNION = 294,
     MODASSIGN = 295,
     RIGHTSHIFTASSIGN = 296,
     SUBASSIGN = 297,
     MULTIPLYASSIGN = 298,
     INCREMENT = 299,
     DIVIDEASSIGN = 300,
     ADDASSIGN = 301,
     ANDASSIGN = 302,
     XORASSIGN = 303,
     RIGHTSHIFT = 304,
     LEFTSHIFT = 305,
     NOTEQUAL = 306,
     EQUALEQUAL = 307,
     DECREMENT = 308,
     POINTER = 309,
     ORASSIGN = 310,
     LESSTHANEQUAL = 311,
     GREATERTHANEQUAL = 312,
     OR = 313,
     LEFTSHIFTASSIGN = 314,
     ELLIPSIS = 315,
     PLUS = 316,
     AND = 317,
     MULTIPLY = 318,
     MINUS = 319,
     NOT = 320,
     DIVIDE = 321,
     PERCENTAGE = 322,
     GREATERTHAN = 323,
     LESSTHAN = 324,
     EQUAL = 325,
     OPENSQUARE = 326,
     CLOSESQUARE = 327,
     OPENROUND = 328,
     CLOSEROUND = 329,
     OPENCURLY = 330,
     CLOSECURLY = 331,
     DOT = 332,
     EXCLAMATION = 333,
     COMMA = 334,
     HASH = 335,
     XOR = 336,
     QUESTIONMARK = 337,
     COLON = 338,
     SEMICOLON = 339,
     INT_CONSTANT = 340,
     FLOAT_CONSTANT = 341,
     ENU_CONSTANT = 342,
     CHAR_CONSTANT = 343,
     IDENTIFIER = 344,
     STRING_LITERAL = 345
   };
#endif
/* Tokens.  */
#define AUTO 258
#define ENUM 259
#define RESTRICT 260
#define UNSIGNED 261
#define BREAK 262
#define EXTERN 263
#define RETURN 264
#define VOID 265
#define CASE 266
#define FLOAT 267
#define SHORT 268
#define VOLATILE 269
#define CHAR 270
#define FOR 271
#define SIGNED 272
#define WHILE 273
#define CONST 274
#define GOTO 275
#define SIZEOF 276
#define BOOL 277
#define CONTINUE 278
#define IF 279
#define STATIC 280
#define COMPLEX 281
#define DEFAULT 282
#define INLINE 283
#define STRUCT 284
#define IMAGINARY 285
#define DO 286
#define INT 287
#define SWITCH 288
#define DOUBLE 289
#define LONG 290
#define TYPEDEF 291
#define ELSE 292
#define REGISTER 293
#define UNION 294
#define MODASSIGN 295
#define RIGHTSHIFTASSIGN 296
#define SUBASSIGN 297
#define MULTIPLYASSIGN 298
#define INCREMENT 299
#define DIVIDEASSIGN 300
#define ADDASSIGN 301
#define ANDASSIGN 302
#define XORASSIGN 303
#define RIGHTSHIFT 304
#define LEFTSHIFT 305
#define NOTEQUAL 306
#define EQUALEQUAL 307
#define DECREMENT 308
#define POINTER 309
#define ORASSIGN 310
#define LESSTHANEQUAL 311
#define GREATERTHANEQUAL 312
#define OR 313
#define LEFTSHIFTASSIGN 314
#define ELLIPSIS 315
#define PLUS 316
#define AND 317
#define MULTIPLY 318
#define MINUS 319
#define NOT 320
#define DIVIDE 321
#define PERCENTAGE 322
#define GREATERTHAN 323
#define LESSTHAN 324
#define EQUAL 325
#define OPENSQUARE 326
#define CLOSESQUARE 327
#define OPENROUND 328
#define CLOSEROUND 329
#define OPENCURLY 330
#define CLOSECURLY 331
#define DOT 332
#define EXCLAMATION 333
#define COMMA 334
#define HASH 335
#define XOR 336
#define QUESTIONMARK 337
#define COLON 338
#define SEMICOLON 339
#define INT_CONSTANT 340
#define FLOAT_CONSTANT 341
#define ENU_CONSTANT 342
#define CHAR_CONSTANT 343
#define IDENTIFIER 344
#define STRING_LITERAL 345




/* Copy the first part of user declarations.  */
#line 11 "asgn4_17CS10030.y"
 
	#include <iostream>
	#include <string>
	#include <vector>
	#include "asgn4_17CS10030_translator.h"

	extern int yylex();
	void yyerror(char *s);
	
	/*--- declaration of symbol table ---*/
	#define MAX_SYMBOLS 100
	symboltable symtab[MAX_SYMBOLS];
	
	/*--- declaration of labeltable ---*/
	vector<label> labeltable;

	/*--- declaration of quadarray ---*/
	quad *qArray[MAX_SYMBOLS];
	int quadPtr = 0;



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 34 "asgn4_17CS10030.y"
{
	expression *E;
	boolean_expression *BE;
	statement *S;
	int intval;
	float floatval;
	char *charval;
	char *stringval;
	symboltable *symp;
  identifier *ID;
}
/* Line 193 of yacc.c.  */
#line 310 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 323 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  60
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1333

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  209
/* YYNRULES -- Number of states.  */
#define YYNSTATES  339

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   345

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
       2,     2,     2,     2,    91,     2,     2,     2,     2,     2,
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
      85,    86,    87,    88,    89,    90
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    17,
      21,    23,    28,    32,    37,    41,    45,    48,    51,    58,
      66,    68,    72,    74,    77,    80,    83,    86,    91,    93,
      95,    97,    99,   101,   103,   105,   110,   112,   116,   120,
     124,   126,   130,   134,   136,   140,   144,   146,   150,   154,
     158,   162,   164,   168,   172,   174,   178,   180,   184,   186,
     190,   192,   196,   198,   202,   204,   210,   212,   216,   218,
     220,   222,   224,   226,   228,   230,   232,   234,   236,   238,
     240,   244,   246,   249,   253,   255,   258,   260,   263,   265,
     268,   270,   273,   275,   279,   281,   285,   287,   289,   291,
     293,   295,   297,   299,   301,   303,   305,   307,   309,   311,
     313,   315,   317,   319,   322,   324,   327,   329,   334,   340,
     346,   353,   356,   358,   362,   364,   368,   370,   372,   374,
     376,   379,   381,   383,   387,   393,   400,   406,   411,   416,
     420,   422,   423,   425,   426,   428,   431,   434,   438,   440,
     443,   445,   449,   451,   455,   458,   460,   462,   466,   468,
     470,   474,   479,   481,   484,   488,   493,   496,   498,   501,
     505,   508,   510,   512,   514,   516,   518,   520,   524,   529,
     533,   536,   540,   542,   545,   547,   549,   551,   554,   560,
     568,   574,   580,   588,   595,   603,   607,   610,   613,   616,
     620,   622,   625,   627,   629,   634,   638,   642,   645,   647
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     152,     0,    -1,    85,    -1,    86,    -1,    87,    -1,    88,
      -1,    89,    -1,    93,    -1,    90,    -1,    73,   113,    74,
      -1,    94,    -1,    95,    71,   113,    72,    -1,    95,    73,
      74,    -1,    95,    73,    96,    74,    -1,    95,    77,    89,
      -1,    95,    54,    89,    -1,    95,    44,    -1,    95,    53,
      -1,    73,   137,    74,    75,   139,    76,    -1,    73,   137,
      74,    75,   139,    79,    76,    -1,   111,    -1,    96,    79,
     111,    -1,    95,    -1,    44,    97,    -1,    53,    97,    -1,
      98,    99,    -1,    21,    97,    -1,    21,    73,   137,    74,
      -1,    62,    -1,    63,    -1,    61,    -1,    64,    -1,    65,
      -1,    78,    -1,    97,    -1,    73,   137,    74,    99,    -1,
      99,    -1,   100,    63,    99,    -1,   100,    66,    99,    -1,
     100,    67,    99,    -1,   100,    -1,   101,    61,   100,    -1,
     101,    64,   100,    -1,   101,    -1,   102,    50,   101,    -1,
     102,    49,   101,    -1,   102,    -1,   103,    69,   102,    -1,
     103,    68,   102,    -1,   103,    56,   102,    -1,   103,    57,
     102,    -1,   103,    -1,   104,    52,   103,    -1,   104,    51,
     103,    -1,   104,    -1,   105,    62,   104,    -1,   105,    -1,
     106,    81,   105,    -1,   106,    -1,   107,    91,   106,    -1,
     107,    -1,   108,    62,   107,    -1,   108,    -1,   109,    58,
     108,    -1,   109,    -1,   109,    82,   113,    83,   110,    -1,
     110,    -1,    97,   112,   111,    -1,    70,    -1,    43,    -1,
      45,    -1,    40,    -1,    46,    -1,    42,    -1,    59,    -1,
      41,    -1,    47,    -1,    48,    -1,    55,    -1,   111,    -1,
     113,    79,   111,    -1,   110,    -1,   116,    84,    -1,   116,
     117,    84,    -1,   119,    -1,   119,   116,    -1,   120,    -1,
     120,   116,    -1,   125,    -1,   125,   116,    -1,   126,    -1,
     126,   116,    -1,   118,    -1,   117,    79,   118,    -1,   127,
      -1,   127,    70,   138,    -1,     8,    -1,    25,    -1,     3,
      -1,    38,    -1,    10,    -1,    15,    -1,    13,    -1,    32,
      -1,    35,    -1,    12,    -1,    34,    -1,    17,    -1,     6,
      -1,    22,    -1,    26,    -1,    30,    -1,   122,    -1,   120,
     121,    -1,   120,    -1,   125,   121,    -1,   125,    -1,     4,
      75,   123,    76,    -1,     4,    89,    75,   123,    76,    -1,
       4,    75,   123,    79,    76,    -1,     4,    89,    75,   123,
      79,    76,    -1,     4,    89,    -1,   124,    -1,   123,    79,
     124,    -1,    89,    -1,    89,    70,   114,    -1,    19,    -1,
      14,    -1,     5,    -1,    28,    -1,   131,   128,    -1,   128,
      -1,    89,    -1,    73,   127,    74,    -1,   128,    71,   129,
     130,    72,    -1,   128,    71,    25,   129,   111,    72,    -1,
     128,    71,   129,    63,    72,    -1,   128,    73,   133,    74,
      -1,   128,    73,   136,    74,    -1,   128,    73,    74,    -1,
     132,    -1,    -1,   111,    -1,    -1,    63,    -1,    63,   132,
      -1,    63,   131,    -1,    63,   132,   131,    -1,   125,    -1,
     132,   125,    -1,   134,    -1,   134,    79,    60,    -1,   135,
      -1,   134,    79,   135,    -1,   116,   127,    -1,   116,    -1,
      89,    -1,   136,    79,    89,    -1,   121,    -1,   111,    -1,
      75,   139,    76,    -1,    75,   139,    79,    76,    -1,   138,
      -1,   140,   138,    -1,   139,    79,   138,    -1,   139,    79,
     140,   138,    -1,   141,    70,    -1,   142,    -1,   141,   142,
      -1,    71,   114,    72,    -1,    77,    89,    -1,   144,    -1,
     145,    -1,   148,    -1,   149,    -1,   150,    -1,   151,    -1,
      89,    83,   143,    -1,    11,   114,    83,   143,    -1,    27,
      83,   143,    -1,    75,    76,    -1,    75,   146,    76,    -1,
     147,    -1,   146,   147,    -1,   115,    -1,   143,    -1,    84,
      -1,   113,    84,    -1,    24,    73,   113,    74,   143,    -1,
      24,    73,   113,    74,   143,    37,   143,    -1,    33,    73,
     113,    74,   143,    -1,    18,    73,   113,    74,   143,    -1,
      31,   143,    18,    73,   113,    74,    84,    -1,    16,    73,
     148,   148,    74,   143,    -1,    16,    73,   148,   148,   113,
      74,   143,    -1,    20,    89,    84,    -1,    23,    84,    -1,
       7,    84,    -1,     9,    84,    -1,     9,   113,    84,    -1,
     153,    -1,   152,   153,    -1,   154,    -1,   115,    -1,   116,
     127,   155,   145,    -1,   116,   127,   145,    -1,   127,   155,
     145,    -1,   127,   145,    -1,   115,    -1,   155,   115,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   139,   139,   141,   143,   145,   149,   151,   153,   155,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     161,   161,   163,   163,   163,   164,   164,   164,   167,   167,
     167,   167,   167,   167,   169,   169,   172,   172,   173,   173,
     177,   177,   177,   180,   180,   180,   183,   183,   183,   183,
     183,   186,   186,   186,   189,   189,   192,   192,   195,   195,
     198,   198,   201,   201,   204,   204,   207,   207,   210,   210,
     210,   210,   210,   210,   210,   210,   210,   210,   210,   213,
     213,   216,   219,   219,   222,   222,   222,   222,   222,   222,
     222,   222,   225,   225,   228,   228,   231,   231,   231,   231,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   237,   237,   237,   237,   241,   241,   241,
     241,   241,   244,   244,   247,   247,   250,   250,   250,   253,
     256,   256,   259,   259,   259,   259,   259,   259,   259,   259,
     262,   263,   267,   268,   272,   272,   272,   272,   275,   275,
     278,   278,   281,   281,   284,   284,   287,   287,   290,   293,
     293,   293,   296,   296,   296,   296,   299,   302,   302,   305,
     305,   308,   308,   308,   308,   308,   308,   311,   311,   311,
     314,   314,   317,   317,   320,   320,   323,   323,   326,   326,
     326,   329,   329,   329,   329,   332,   332,   332,   332,   332,
     335,   335,   338,   338,   341,   341,   341,   341,   344,   344
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AUTO", "ENUM", "RESTRICT", "UNSIGNED",
  "BREAK", "EXTERN", "RETURN", "VOID", "CASE", "FLOAT", "SHORT",
  "VOLATILE", "CHAR", "FOR", "SIGNED", "WHILE", "CONST", "GOTO", "SIZEOF",
  "BOOL", "CONTINUE", "IF", "STATIC", "COMPLEX", "DEFAULT", "INLINE",
  "STRUCT", "IMAGINARY", "DO", "INT", "SWITCH", "DOUBLE", "LONG",
  "TYPEDEF", "ELSE", "REGISTER", "UNION", "MODASSIGN", "RIGHTSHIFTASSIGN",
  "SUBASSIGN", "MULTIPLYASSIGN", "INCREMENT", "DIVIDEASSIGN", "ADDASSIGN",
  "ANDASSIGN", "XORASSIGN", "RIGHTSHIFT", "LEFTSHIFT", "NOTEQUAL",
  "EQUALEQUAL", "DECREMENT", "POINTER", "ORASSIGN", "LESSTHANEQUAL",
  "GREATERTHANEQUAL", "OR", "LEFTSHIFTASSIGN", "ELLIPSIS", "PLUS", "AND",
  "MULTIPLY", "MINUS", "NOT", "DIVIDE", "PERCENTAGE", "GREATERTHAN",
  "LESSTHAN", "EQUAL", "OPENSQUARE", "CLOSESQUARE", "OPENROUND",
  "CLOSEROUND", "OPENCURLY", "CLOSECURLY", "DOT", "EXCLAMATION", "COMMA",
  "HASH", "XOR", "QUESTIONMARK", "COLON", "SEMICOLON", "INT_CONSTANT",
  "FLOAT_CONSTANT", "ENU_CONSTANT", "CHAR_CONSTANT", "IDENTIFIER",
  "STRING_LITERAL", "'|'", "$accept", "constant", "primary_expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "AND_expression", "exclusive_OR_expression",
  "inclusive_OR_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "specifier_qualifier_list", "enum_specifier",
  "enumerator_list", "enumerator", "type_qualifier", "function_specifier",
  "declarator", "direct_declarator", "type_qualifier_list_opt",
  "assignment_expression_opt", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "initializer", "initializer_list",
  "designation", "designator_list", "designator", "statement",
  "labeled_statement", "compound_statement", "block_item_list",
  "block_item", "expression_statement", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
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
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   124
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    92,    93,    93,    93,    93,    94,    94,    94,    94,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      96,    96,    97,    97,    97,    97,    97,    97,    98,    98,
      98,    98,    98,    98,    99,    99,   100,   100,   100,   100,
     101,   101,   101,   102,   102,   102,   103,   103,   103,   103,
     103,   104,   104,   104,   105,   105,   106,   106,   107,   107,
     108,   108,   109,   109,   110,   110,   111,   111,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   113,
     113,   114,   115,   115,   116,   116,   116,   116,   116,   116,
     116,   116,   117,   117,   118,   118,   119,   119,   119,   119,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   121,   121,   121,   121,   122,   122,   122,
     122,   122,   123,   123,   124,   124,   125,   125,   125,   126,
     127,   127,   128,   128,   128,   128,   128,   128,   128,   128,
     129,   129,   130,   130,   131,   131,   131,   131,   132,   132,
     133,   133,   134,   134,   135,   135,   136,   136,   137,   138,
     138,   138,   139,   139,   139,   139,   140,   141,   141,   142,
     142,   143,   143,   143,   143,   143,   143,   144,   144,   144,
     145,   145,   146,   146,   147,   147,   148,   148,   149,   149,
     149,   150,   150,   150,   150,   151,   151,   151,   151,   151,
     152,   152,   153,   153,   154,   154,   154,   154,   155,   155
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     4,     3,     4,     3,     3,     2,     2,     6,     7,
       1,     3,     1,     2,     2,     2,     2,     4,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     5,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     2,     3,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     2,     1,     4,     5,     5,
       6,     2,     1,     3,     1,     3,     1,     1,     1,     1,
       2,     1,     1,     3,     5,     6,     5,     4,     4,     3,
       1,     0,     1,     0,     1,     2,     2,     3,     1,     2,
       1,     3,     1,     3,     2,     1,     1,     3,     1,     1,
       3,     4,     1,     2,     3,     4,     2,     1,     2,     3,
       2,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       2,     3,     1,     2,     1,     1,     1,     2,     5,     7,
       5,     5,     7,     6,     7,     3,     2,     2,     2,     3,
       1,     2,     1,     1,     4,     3,     3,     2,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    98,     0,   128,   108,    96,   100,   105,   102,   127,
     101,   107,   126,   109,    97,   110,   129,   111,   103,   106,
     104,    99,   144,     0,   132,   203,     0,    84,    86,   112,
      88,    90,     0,   131,     0,     0,   200,   202,     0,   121,
     148,   146,   145,     0,    82,     0,    92,    94,    85,    87,
      89,    91,     0,   208,     0,   207,     0,   141,     0,   130,
       1,   201,   124,     0,   122,     0,   149,   147,   133,     0,
      83,     0,   205,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    30,    28,
      29,    31,    32,     0,   180,    33,   186,     2,     3,     4,
       5,     6,     8,     7,    10,    22,    34,     0,    36,    40,
      43,    46,    51,    54,    56,    58,    60,    62,    64,    66,
      79,     0,   184,   185,   171,   172,     0,   182,   173,   174,
     175,   176,    94,   209,   206,   141,   143,   140,   139,   156,
     155,     0,   150,   152,     0,     0,   117,     0,     0,    93,
       0,     6,   159,    95,   204,   197,   198,     0,    34,    81,
       0,     0,     0,     0,     0,    26,   196,     0,     0,     0,
       0,     0,    23,    24,     0,   114,   158,   116,     0,     0,
      16,    17,     0,     0,     0,     0,    71,    75,    73,    69,
      70,    72,    76,    77,    78,    74,    68,     0,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   187,
     181,   183,     0,    29,   142,     0,   154,   137,     0,   138,
       0,   125,   119,   123,   118,     0,     0,     0,   162,     0,
       0,     0,   167,   199,     0,     0,     0,   195,     0,     0,
     179,     0,     0,     0,     9,   113,   115,     0,   177,    15,
       0,    12,     0,    20,    14,    67,    37,    38,    39,    41,
      42,    45,    44,    49,    50,    48,    47,    53,    52,    55,
      57,    59,    61,    63,     0,    80,     0,   136,   134,   151,
     153,   157,   120,     0,   170,   160,     0,   163,   166,   168,
     178,     0,     0,    27,     0,     0,     0,     0,     0,    35,
      11,    13,     0,     0,   135,   169,   161,   164,     0,     0,
       0,   191,   188,     0,   190,     0,    21,    65,   165,   193,
       0,     0,     0,    18,     0,   194,   189,   192,    19
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   103,   104,   105,   262,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     197,   121,   160,    25,    54,    45,    46,    27,    28,   176,
      29,    63,    64,    30,    31,    32,    33,   136,   225,    34,
     137,   141,   142,   143,   144,   178,   238,   239,   240,   241,
     242,   123,   124,   125,   126,   127,   128,   129,   130,   131,
      35,    36,    37,    56
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -278
static const yytype_int16 yypact[] =
{
     612,  -278,    -5,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,    10,   -25,  -278,  -278,   -23,  1295,  1295,  -278,
    1295,  1295,   809,     1,   -26,   262,  -278,  -278,   -64,   -59,
    -278,  -278,    10,   -28,  -278,    21,  -278,   770,  -278,  -278,
    -278,  -278,   349,  -278,   -23,  -278,   809,    64,   648,     1,
    -278,  -278,    26,   -24,  -278,   -64,  -278,  -278,  -278,   -25,
    -278,   865,  -278,   809,    47,   903,  1093,    83,   125,   101,
    1131,   132,   137,   145,   682,   147,  1169,  1169,  -278,  -278,
    -278,  -278,  -278,   524,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,   151,  -278,  -278,  -278,    14,    87,  1093,  -278,   187,
      77,    65,    68,   192,   160,   155,   154,   207,   -37,  -278,
    -278,    60,  -278,  -278,  -278,  -278,   437,  -278,  -278,  -278,
    -278,  -278,   181,  -278,  -278,    98,  1207,    98,  -278,  -278,
     -25,   197,   194,  -278,    66,  1093,  -278,   -56,    73,  -278,
     259,  -278,  -278,  -278,  -278,  -278,  -278,    74,  -278,  -278,
     195,   941,  1093,   201,   524,  -278,  -278,  1093,   682,   271,
    1093,   524,  -278,  -278,    86,   706,  -278,   706,   217,   682,
    -278,  -278,   204,  1093,   979,   206,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,  1093,  -278,  1093,
    1093,  1093,  1093,  1093,  1093,  1093,  1093,  1093,  1093,  1093,
    1093,  1093,  1093,  1093,  1093,  1093,  1093,  1093,  1093,  -278,
    -278,  -278,  1093,   229,  -278,   230,  -278,  -278,   189,  -278,
     215,  -278,  -278,  -278,  -278,   -33,  1093,   220,  -278,   176,
     865,     5,  -278,  -278,   682,   941,    89,  -278,   236,   117,
    -278,   238,   126,   239,  -278,  -278,  -278,  1017,  -278,  -278,
      44,  -278,   133,  -278,  -278,  -278,  -278,  -278,  -278,   187,
     187,    77,    77,    65,    65,    65,    65,    68,    68,   192,
     160,   155,   154,   207,     7,  -278,   242,  -278,  -278,  -278,
    -278,  -278,  -278,   243,  -278,  -278,   789,  -278,  -278,  -278,
    -278,  1055,   682,   241,   682,  1093,   682,   241,   259,  -278,
    -278,  -278,  1093,  1093,  -278,  -278,  -278,  -278,   865,   682,
     139,  -278,   280,   161,  -278,   180,  -278,  -278,  -278,  -278,
     682,   682,   234,  -278,   827,  -278,  -278,  -278,  -278
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -278,  -278,  -278,  -278,  -278,   -27,  -278,   -90,    58,    78,
      99,    88,   107,   113,   114,   112,   115,  -278,   -74,   -71,
    -278,   -63,  -138,   -29,     4,  -278,   260,  -278,   -83,   -11,
    -278,   268,  -133,   -16,  -278,   -18,   304,   205,  -278,     0,
     317,  -278,  -278,   122,  -278,   -21,   -70,    33,  -277,  -278,
     102,   -73,  -278,   -19,  -278,   216,  -152,  -278,  -278,  -278,
    -278,   343,  -278,   338
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
     152,   153,   159,    53,    26,    43,    40,   231,    47,   245,
     175,   169,   157,    55,   233,     3,    65,   198,    53,   318,
     232,   216,    41,   122,     9,    62,    66,   133,    72,    12,
     174,    48,    49,    62,    50,    51,   132,   134,    22,    26,
      22,    40,    67,   292,   133,   217,    68,    23,    23,   158,
      23,   132,   146,   165,   154,   147,    62,   318,   180,   172,
     173,    44,   140,    24,    24,   224,    24,   181,   182,     3,
      38,   159,    57,    22,    58,   298,   236,   177,     9,   152,
     158,   175,   237,    12,    39,   183,   218,   184,   175,   135,
     313,   185,   175,   301,   175,   250,   145,   122,   293,   246,
      69,   174,   233,     3,   249,    70,   258,   252,   174,   266,
     267,   268,     9,   263,   204,   205,   310,    12,   158,    40,
     260,    66,   226,   218,   206,   207,   265,   186,   187,   188,
     189,   155,   190,   191,   192,   193,   208,   209,   202,   218,
     229,   203,   194,   248,   219,   230,   195,   285,   177,   234,
     253,   286,   235,   218,   284,   177,   161,   196,   243,   177,
     254,   177,   159,   302,   255,   218,   256,   309,   218,   152,
     297,   300,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     163,   304,     1,     2,     3,     4,   218,     5,   162,     6,
     306,     7,     8,     9,    10,   218,    11,   311,    12,   158,
     167,    13,   312,   330,    14,    15,   166,    16,   218,    17,
     170,    18,   212,    19,    20,   152,   317,    21,   168,   321,
     158,   322,   140,   324,   179,   332,   213,   152,   320,   327,
     218,   326,   323,   210,   211,   214,   329,   152,   328,   289,
     199,    71,   295,   200,   201,   296,   333,   335,   336,   334,
     269,   270,    60,   152,   317,     1,     2,     3,     4,   215,
       5,   227,     6,   228,     7,     8,     9,    10,   244,    11,
      80,    12,   271,   272,    13,   247,   158,    14,    15,   251,
      16,   257,    17,   259,    18,   264,    19,    20,   277,   278,
      21,   287,   288,    86,   291,   273,   274,   275,   276,   294,
     303,   305,    87,   307,   314,   315,   308,   331,   337,   279,
      88,    89,    90,    91,    92,    22,   280,   282,   281,   149,
     236,   283,    93,   148,   150,    23,   237,    95,    59,    42,
     222,   325,   221,   299,    97,    98,    99,   100,   151,   102,
     290,    24,     1,     2,     3,     4,    74,     5,    75,     6,
      76,     7,     8,     9,    10,    77,    11,    78,    12,    79,
      80,    13,    81,    82,    14,    15,    83,    16,    61,    17,
      84,    18,    85,    19,    20,    73,     0,    21,     0,     0,
       0,     0,     0,    86,     0,     0,     0,     0,     0,     0,
       0,     0,    87,     0,     0,     0,     0,     0,     0,     0,
      88,    89,    90,    91,    92,     0,     0,     0,     0,     0,
       0,     0,    93,     0,    52,    94,     0,    95,     0,     0,
       0,     0,     0,    96,    97,    98,    99,   100,   101,   102,
       1,     2,     3,     4,    74,     5,    75,     6,    76,     7,
       8,     9,    10,    77,    11,    78,    12,    79,    80,    13,
      81,    82,    14,    15,    83,    16,     0,    17,    84,    18,
      85,    19,    20,     0,     0,    21,     0,     0,     0,     0,
       0,    86,     0,     0,     0,     0,     0,     0,     0,     0,
      87,     0,     0,     0,     0,     0,     0,     0,    88,    89,
      90,    91,    92,     0,     0,     0,     0,     0,     0,     0,
      93,     0,    52,   220,     0,    95,     0,     0,     0,     0,
       0,    96,    97,    98,    99,   100,   101,   102,     2,     3,
       4,     0,     0,     0,     6,     0,     7,     8,     9,    10,
       0,    11,     0,    12,     0,    80,    13,     0,     0,     0,
      15,     0,     0,     0,    17,     0,    18,     0,    19,    20,
       0,     0,     0,     0,     0,     0,     0,     0,    86,     0,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,    88,    89,    90,    91,    92,
       0,     0,     0,     0,     0,     0,     0,    93,     0,     0,
       0,     0,    95,     0,     0,     0,     0,     0,     0,    97,
      98,    99,   100,   151,   102,     1,     2,     3,     4,     0,
       5,     0,     6,     0,     7,     8,     9,    10,     0,    11,
       0,    12,     0,     0,    13,     0,     0,    14,    15,     0,
      16,     0,    17,     0,    18,     0,    19,    20,     0,     0,
      21,     1,     2,     3,     4,     0,     5,     0,     6,     0,
       7,     8,     9,    10,     0,    11,     0,    12,     0,     0,
      13,     0,     0,    14,    15,    22,    16,     0,    17,     0,
      18,     0,    19,    20,     0,    23,    21,     0,     0,    74,
       0,    75,     0,    76,     0,     0,     0,     0,    77,     0,
      78,    24,    79,    80,     0,    81,    82,     0,     0,    83,
       2,     3,     4,    84,     0,    85,     6,     0,     7,     8,
       9,    10,   138,    11,     0,    12,    86,     0,    13,     0,
       0,     0,    15,     0,     0,    87,    17,   139,    18,     0,
      19,    20,     0,    88,    89,    90,    91,    92,     0,     0,
       0,     0,     0,     0,     0,    93,     0,    52,     0,     0,
      95,     0,     0,     0,     0,     0,    96,    97,    98,    99,
     100,   101,   102,     1,     2,     3,     4,     0,     5,     0,
       6,     0,     7,     8,     9,    10,     0,    11,     0,    12,
       0,     0,    13,     0,     0,    14,    15,     0,    16,     0,
      17,     0,    18,     0,    19,    20,     0,     0,    21,     0,
      80,     0,     1,     2,     3,     4,     0,     5,     0,     6,
       0,     7,     8,     9,    10,     0,    11,     0,    12,     0,
       0,    13,     0,    86,    14,    15,     0,    16,     0,    17,
      71,    18,    87,    19,    20,    52,     0,    21,    80,     0,
      88,    89,    90,    91,    92,     0,     0,     0,     0,     0,
     236,     0,    93,     0,   150,   316,   237,    95,     0,     0,
       0,    86,     0,     0,    97,    98,    99,   100,   151,   102,
      87,     0,     0,     0,    52,     0,    80,     0,    88,    89,
      90,    91,    92,     0,     0,     0,     0,     0,   236,     0,
      93,     0,   150,   338,   237,    95,     0,     0,     0,    86,
       0,     0,    97,    98,    99,   100,   151,   102,    87,     0,
       0,     0,     0,     0,    80,     0,    88,    89,    90,    91,
      92,     0,     0,     0,     0,     0,     0,     0,    93,     0,
     150,     0,     0,    95,     0,     0,     0,    86,     0,     0,
      97,    98,    99,   100,   151,   102,    87,     0,     0,     0,
       0,     0,    80,     0,    88,    89,    90,    91,    92,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,     0,
       0,    95,     0,     0,     0,    86,     0,   156,    97,    98,
      99,   100,   151,   102,    87,     0,     0,     0,     0,     0,
      80,     0,    88,    89,    90,    91,    92,     0,     0,     0,
       0,     0,     0,     0,    93,     0,     0,     0,     0,    95,
       0,     0,     0,    86,     0,    96,    97,    98,    99,   100,
     151,   102,    87,     0,     0,     0,     0,     0,    80,     0,
      88,    89,    90,    91,    92,     0,     0,     0,     0,     0,
       0,     0,    93,   261,     0,     0,     0,    95,     0,     0,
       0,    86,     0,     0,    97,    98,    99,   100,   151,   102,
      87,     0,     0,     0,     0,     0,    80,     0,    88,    89,
      90,    91,    92,     0,     0,     0,     0,     0,     0,     0,
      93,     0,   308,     0,     0,    95,     0,     0,     0,    86,
       0,     0,    97,    98,    99,   100,   151,   102,    87,     0,
       0,     0,     0,     0,    80,     0,    88,    89,    90,    91,
      92,     0,     0,     0,     0,     0,     0,     0,    93,   319,
       0,     0,     0,    95,     0,     0,     0,    86,     0,     0,
      97,    98,    99,   100,   151,   102,    87,     0,     0,     0,
       0,     0,    80,     0,    88,    89,    90,    91,    92,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,     0,
       0,    95,     0,     0,     0,    86,     0,     0,    97,    98,
      99,   100,   151,   102,    87,     0,     0,     0,     0,     0,
      80,     0,    88,    89,    90,    91,    92,     0,     0,     0,
       0,     0,     0,     0,   164,     0,     0,     0,     0,    95,
       0,     0,     0,    86,     0,     0,    97,    98,    99,   100,
     151,   102,    87,     0,     0,     0,     0,     0,    80,     0,
      88,    89,    90,    91,    92,     0,     0,     0,     0,     0,
       0,     0,   171,     0,     0,     0,     0,    95,     0,     0,
       0,    86,     0,     0,    97,    98,    99,   100,   151,   102,
      87,     0,     0,     0,     0,     0,     0,     0,    88,    89,
     223,    91,    92,     0,     0,     0,     0,     0,     0,     0,
      93,     0,     0,     0,     0,    95,     0,     0,     0,     0,
       0,     0,    97,    98,    99,   100,   151,   102,     1,     2,
       3,     4,     0,     5,     0,     6,     0,     7,     8,     9,
      10,     0,    11,     0,    12,     0,     0,    13,     0,     0,
      14,    15,     0,    16,     0,    17,     0,    18,     0,    19,
      20,     0,     0,    21
};

static const yytype_int16 yycheck[] =
{
      71,    71,    76,    32,     0,    23,    22,   145,    26,   161,
      93,    84,    75,    32,   147,     5,    75,   107,    47,   296,
      76,    58,    22,    52,    14,    89,    42,    56,    47,    19,
      93,    27,    28,    89,    30,    31,    54,    56,    63,    35,
      63,    57,    42,    76,    73,    82,    74,    73,    73,    76,
      73,    69,    76,    80,    73,    79,    89,   334,    44,    86,
      87,    84,    58,    89,    89,   136,    89,    53,    54,     5,
      75,   145,    71,    63,    73,    70,    71,    93,    14,   150,
     107,   164,    77,    19,    89,    71,    79,    73,   171,    25,
      83,    77,   175,   245,   177,   168,    70,   126,   236,   162,
      79,   164,   235,     5,   167,    84,   179,   170,   171,   199,
     200,   201,    14,   184,    49,    50,    72,    19,   145,   135,
     183,   137,   140,    79,    56,    57,   197,    40,    41,    42,
      43,    84,    45,    46,    47,    48,    68,    69,    61,    79,
      74,    64,    55,   164,    84,    79,    59,   218,   164,    76,
     171,   222,    79,    79,   217,   171,    73,    70,    84,   175,
      74,   177,   236,    74,   175,    79,   177,   257,    79,   240,
     240,   244,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
      89,    74,     3,     4,     5,     6,    79,     8,    73,    10,
      74,    12,    13,    14,    15,    79,    17,    74,    19,   236,
      73,    22,    79,    74,    25,    26,    84,    28,    79,    30,
      73,    32,    62,    34,    35,   296,   296,    38,    83,   302,
     257,   304,   228,   306,    83,    74,    81,   308,   301,   313,
      79,   312,   305,    51,    52,    91,   319,   318,   318,    60,
      63,    70,    76,    66,    67,    79,    76,   330,   331,    79,
     202,   203,     0,   334,   334,     3,     4,     5,     6,    62,
       8,    74,    10,    79,    12,    13,    14,    15,    83,    17,
      21,    19,   204,   205,    22,    84,   313,    25,    26,    18,
      28,    74,    30,    89,    32,    89,    34,    35,   210,   211,
      38,    72,    72,    44,    89,   206,   207,   208,   209,    89,
      74,    73,    53,    74,    72,    72,    75,    37,    84,   212,
      61,    62,    63,    64,    65,    63,   213,   215,   214,    69,
      71,   216,    73,    65,    75,    73,    77,    78,    34,    22,
     135,   308,   126,   241,    85,    86,    87,    88,    89,    90,
     228,    89,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    35,    30,
      31,    32,    33,    34,    35,    47,    -1,    38,    -1,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    -1,    75,    76,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    84,    85,    86,    87,    88,    89,    90,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    -1,    -1,    38,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    -1,    75,    76,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    84,    85,    86,    87,    88,    89,    90,     4,     5,
       6,    -1,    -1,    -1,    10,    -1,    12,    13,    14,    15,
      -1,    17,    -1,    19,    -1,    21,    22,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    30,    -1,    32,    -1,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,     3,     4,     5,     6,    -1,
       8,    -1,    10,    -1,    12,    13,    14,    15,    -1,    17,
      -1,    19,    -1,    -1,    22,    -1,    -1,    25,    26,    -1,
      28,    -1,    30,    -1,    32,    -1,    34,    35,    -1,    -1,
      38,     3,     4,     5,     6,    -1,     8,    -1,    10,    -1,
      12,    13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,
      22,    -1,    -1,    25,    26,    63,    28,    -1,    30,    -1,
      32,    -1,    34,    35,    -1,    73,    38,    -1,    -1,     7,
      -1,     9,    -1,    11,    -1,    -1,    -1,    -1,    16,    -1,
      18,    89,    20,    21,    -1,    23,    24,    -1,    -1,    27,
       4,     5,     6,    31,    -1,    33,    10,    -1,    12,    13,
      14,    15,    74,    17,    -1,    19,    44,    -1,    22,    -1,
      -1,    -1,    26,    -1,    -1,    53,    30,    89,    32,    -1,
      34,    35,    -1,    61,    62,    63,    64,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    -1,    75,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,
      88,    89,    90,     3,     4,     5,     6,    -1,     8,    -1,
      10,    -1,    12,    13,    14,    15,    -1,    17,    -1,    19,
      -1,    -1,    22,    -1,    -1,    25,    26,    -1,    28,    -1,
      30,    -1,    32,    -1,    34,    35,    -1,    -1,    38,    -1,
      21,    -1,     3,     4,     5,     6,    -1,     8,    -1,    10,
      -1,    12,    13,    14,    15,    -1,    17,    -1,    19,    -1,
      -1,    22,    -1,    44,    25,    26,    -1,    28,    -1,    30,
      70,    32,    53,    34,    35,    75,    -1,    38,    21,    -1,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    73,    -1,    75,    76,    77,    78,    -1,    -1,
      -1,    44,    -1,    -1,    85,    86,    87,    88,    89,    90,
      53,    -1,    -1,    -1,    75,    -1,    21,    -1,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      73,    -1,    75,    76,    77,    78,    -1,    -1,    -1,    44,
      -1,    -1,    85,    86,    87,    88,    89,    90,    53,    -1,
      -1,    -1,    -1,    -1,    21,    -1,    61,    62,    63,    64,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,
      75,    -1,    -1,    78,    -1,    -1,    -1,    44,    -1,    -1,
      85,    86,    87,    88,    89,    90,    53,    -1,    -1,    -1,
      -1,    -1,    21,    -1,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    44,    -1,    84,    85,    86,
      87,    88,    89,    90,    53,    -1,    -1,    -1,    -1,    -1,
      21,    -1,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,    78,
      -1,    -1,    -1,    44,    -1,    84,    85,    86,    87,    88,
      89,    90,    53,    -1,    -1,    -1,    -1,    -1,    21,    -1,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    74,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    44,    -1,    -1,    85,    86,    87,    88,    89,    90,
      53,    -1,    -1,    -1,    -1,    -1,    21,    -1,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    -1,    75,    -1,    -1,    78,    -1,    -1,    -1,    44,
      -1,    -1,    85,    86,    87,    88,    89,    90,    53,    -1,
      -1,    -1,    -1,    -1,    21,    -1,    61,    62,    63,    64,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    44,    -1,    -1,
      85,    86,    87,    88,    89,    90,    53,    -1,    -1,    -1,
      -1,    -1,    21,    -1,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    44,    -1,    -1,    85,    86,
      87,    88,    89,    90,    53,    -1,    -1,    -1,    -1,    -1,
      21,    -1,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,    78,
      -1,    -1,    -1,    44,    -1,    -1,    85,    86,    87,    88,
      89,    90,    53,    -1,    -1,    -1,    -1,    -1,    21,    -1,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    -1,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    44,    -1,    -1,    85,    86,    87,    88,    89,    90,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,     3,     4,
       5,     6,    -1,     8,    -1,    10,    -1,    12,    13,    14,
      15,    -1,    17,    -1,    19,    -1,    -1,    22,    -1,    -1,
      25,    26,    -1,    28,    -1,    30,    -1,    32,    -1,    34,
      35,    -1,    -1,    38
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     8,    10,    12,    13,    14,
      15,    17,    19,    22,    25,    26,    28,    30,    32,    34,
      35,    38,    63,    73,    89,   115,   116,   119,   120,   122,
     125,   126,   127,   128,   131,   152,   153,   154,    75,    89,
     125,   131,   132,   127,    84,   117,   118,   127,   116,   116,
     116,   116,    75,   115,   116,   145,   155,    71,    73,   128,
       0,   153,    89,   123,   124,    75,   125,   131,    74,    79,
      84,    70,   145,   155,     7,     9,    11,    16,    18,    20,
      21,    23,    24,    27,    31,    33,    44,    53,    61,    62,
      63,    64,    65,    73,    76,    78,    84,    85,    86,    87,
      88,    89,    90,    93,    94,    95,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   113,   115,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   127,   115,   145,    25,   129,   132,    74,    89,
     116,   133,   134,   135,   136,    70,    76,    79,   123,   118,
      75,    89,   111,   138,   145,    84,    84,   113,    97,   110,
     114,    73,    73,    89,    73,    97,    84,    73,    83,   143,
      73,    73,    97,    97,   113,   120,   121,   125,   137,    83,
      44,    53,    54,    71,    73,    77,    40,    41,    42,    43,
      45,    46,    47,    48,    55,    59,    70,   112,    99,    63,
      66,    67,    61,    64,    49,    50,    56,    57,    68,    69,
      51,    52,    62,    81,    91,    62,    58,    82,    79,    84,
      76,   147,   129,    63,   111,   130,   127,    74,    79,    74,
      79,   114,    76,   124,    76,    79,    71,    77,   138,   139,
     140,   141,   142,    84,    83,   148,   113,    84,   137,   113,
     143,    18,   113,   137,    74,   121,   121,    74,   143,    89,
     113,    74,    96,   111,    89,   111,    99,    99,    99,   100,
     100,   101,   101,   102,   102,   102,   102,   103,   103,   104,
     105,   106,   107,   108,   113,   111,   111,    72,    72,    60,
     135,    89,    76,   114,    89,    76,    79,   138,    70,   142,
     143,   148,    74,    74,    74,    73,    74,    74,    75,    99,
      72,    74,    79,    83,    72,    72,    76,   138,   140,    74,
     113,   143,   143,   113,   143,   139,   111,   110,   138,   143,
      74,    37,    74,    76,    79,   143,   143,    84,    76
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

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
#line 140 "asgn4_17CS10030.y"
    {(yyval.E)->loc = gentemp(); qArray[quadPtr++] = new quad(copy_ins, (yyval.E)->loc->name, (yyvsp[(1) - (1)].intval));}
    break;

  case 3:
#line 142 "asgn4_17CS10030.y"
    {(yyval.E)->loc = gentemp(); qArray[quadPtr++] = new quad(copy_ins, (yyval.E)->loc->name, (yyvsp[(1) - (1)].floatval));}
    break;

  case 4:
#line 144 "asgn4_17CS10030.y"
    {(yyval.E)->loc = gentemp(); qArray[quadPtr++] = new quad(copy_ins, (yyval.E)->loc->name, (yyvsp[(1) - (1)].symp)->name);}
    break;

  case 5:
#line 146 "asgn4_17CS10030.y"
    {(yyval.E)->loc = gentemp(); qArray[quadPtr++] = new quad(copy_ins, (yyval.E)->loc->name, (yyvsp[(1) - (1)].charval));}
    break;

  case 6:
#line 150 "asgn4_17CS10030.y"
    {(yyval.E)->loc = (yyvsp[(1) - (1)].ID)->loc; qArray[quadPtr++] = new quad((yyval.E)->loc->name, (yyvsp[(1) - (1)].ID)->loc->name);}
    break;

  case 7:
#line 152 "asgn4_17CS10030.y"
    {(yyval.E)->loc = gentemp(); qArray[quadPtr++] = new quad((yyval.E)->loc->name, (yyvsp[(1) - (1)].E)->loc->name);}
    break;

  case 8:
#line 154 "asgn4_17CS10030.y"
    {(yyval.E)->loc = gentemp(); qArray[quadPtr++] = new quad((yyval.E)->loc->name, (yyvsp[(1) - (1)].stringval));}
    break;

  case 9:
#line 156 "asgn4_17CS10030.y"
    {(yyval.E)->loc = (yyvsp[(2) - (3)].E)->loc; qArray[quadPtr++] = new quad((yyval.E)->loc->name, (yyvsp[(2) - (3)].E)->loc->name);}
    break;

  case 19:
#line 159 "asgn4_17CS10030.y"
    {printf("POSTFIX_EXPRESSION\n");}
    break;

  case 21:
#line 161 "asgn4_17CS10030.y"
    {printf("ARGUMENT EXPRESSION LIST\n");}
    break;

  case 27:
#line 165 "asgn4_17CS10030.y"
    {printf("UNARY EXPRESSION\n");}
    break;

  case 33:
#line 167 "asgn4_17CS10030.y"
    {printf("UNARY OPERATOR\n");}
    break;

  case 35:
#line 169 "asgn4_17CS10030.y"
    {printf("CAST EXPRESSION\n");}
    break;

  case 39:
#line 174 "asgn4_17CS10030.y"
    {printf("MULTIPLICATIVE EXPRESSION\n");}
    break;

  case 42:
#line 177 "asgn4_17CS10030.y"
    {printf("ADDITIVE EXPRESSION\n");}
    break;

  case 45:
#line 180 "asgn4_17CS10030.y"
    {printf("SHIFT EXPRESSION\n");}
    break;

  case 50:
#line 183 "asgn4_17CS10030.y"
    {printf("RELATIONAL EXPRESSION\n");}
    break;

  case 53:
#line 186 "asgn4_17CS10030.y"
    {printf("EQUALITY EXPRESSION\n");}
    break;

  case 55:
#line 189 "asgn4_17CS10030.y"
    {printf("AND_expression\n");}
    break;

  case 57:
#line 192 "asgn4_17CS10030.y"
    {printf("EXCLUSIVE OR EXPRESSION \n");}
    break;

  case 59:
#line 195 "asgn4_17CS10030.y"
    {printf("INCLUSIVE OR EXPRESSION\n");}
    break;

  case 61:
#line 198 "asgn4_17CS10030.y"
    {printf("LOGICAL AND EXPRESSION\n");}
    break;

  case 63:
#line 201 "asgn4_17CS10030.y"
    {printf("LOGICAL OR EXPRESSION \n");}
    break;

  case 65:
#line 204 "asgn4_17CS10030.y"
    {printf("CONDITIONAL EXPRESSION\n");}
    break;

  case 67:
#line 207 "asgn4_17CS10030.y"
    {printf("ASSIGNMENT EXPRESSION\n");}
    break;

  case 78:
#line 210 "asgn4_17CS10030.y"
    {printf("ASSIGNMENT OPERATOR\n");}
    break;

  case 80:
#line 213 "asgn4_17CS10030.y"
    {printf("EXPRESSION\n");}
    break;

  case 81:
#line 216 "asgn4_17CS10030.y"
    {printf("CONSTANT EXPRESSION\n");}
    break;

  case 83:
#line 219 "asgn4_17CS10030.y"
    {printf("DECLARATION\n");}
    break;

  case 91:
#line 222 "asgn4_17CS10030.y"
    {printf("DECLARATION SPECIFIERS\n");}
    break;

  case 93:
#line 225 "asgn4_17CS10030.y"
    {printf("INIT DECLARATOR LIST\n");}
    break;

  case 95:
#line 228 "asgn4_17CS10030.y"
    {printf("INIT DECLARATOR\n");}
    break;

  case 99:
#line 231 "asgn4_17CS10030.y"
    {printf("STORAGE CLASS SPECIFIER\n");}
    break;

  case 112:
#line 234 "asgn4_17CS10030.y"
    {printf("TYPE SPECIFIER\n");}
    break;

  case 116:
#line 237 "asgn4_17CS10030.y"
    {printf("SPECIFIER_QUALIFIER_LIST\n");}
    break;

  case 121:
#line 241 "asgn4_17CS10030.y"
    {printf("ENUM_SPECIFIER\n");}
    break;

  case 123:
#line 244 "asgn4_17CS10030.y"
    {printf("ENUMERATOR_LIST\n");}
    break;

  case 125:
#line 247 "asgn4_17CS10030.y"
    {printf("ENUMERATOR\n");}
    break;

  case 128:
#line 250 "asgn4_17CS10030.y"
    {printf("TYPE QUAIFIER \n");}
    break;

  case 129:
#line 253 "asgn4_17CS10030.y"
    {printf("FUNCTION SPECIFIER\n");}
    break;

  case 131:
#line 256 "asgn4_17CS10030.y"
    {printf("DECLARATOR\n");}
    break;

  case 139:
#line 259 "asgn4_17CS10030.y"
    {printf("DIRECT_DECLARATOR\n");}
    break;

  case 147:
#line 272 "asgn4_17CS10030.y"
    {printf("POINTER\n");}
    break;

  case 149:
#line 275 "asgn4_17CS10030.y"
    {printf("TYPE QUALIFIER LIST\n");}
    break;

  case 151:
#line 278 "asgn4_17CS10030.y"
    {printf("PARAMETER TYPE LIST\n");}
    break;

  case 153:
#line 281 "asgn4_17CS10030.y"
    {printf("PARAMETER LIST\n");}
    break;

  case 155:
#line 284 "asgn4_17CS10030.y"
    {printf("PARAMETER DECLARATION\n");}
    break;

  case 157:
#line 287 "asgn4_17CS10030.y"
    {printf("IDENTIFIER LIST\n");}
    break;

  case 158:
#line 290 "asgn4_17CS10030.y"
    {printf("TYPE NAME\n");}
    break;

  case 161:
#line 293 "asgn4_17CS10030.y"
    {printf("INITIALIZER\n");}
    break;

  case 165:
#line 296 "asgn4_17CS10030.y"
    {printf("INITIALIZER LIST\n");}
    break;

  case 166:
#line 299 "asgn4_17CS10030.y"
    {printf("DESIGNATION\n");}
    break;

  case 168:
#line 302 "asgn4_17CS10030.y"
    {printf("DESIGNATOR LIST\n");}
    break;

  case 170:
#line 305 "asgn4_17CS10030.y"
    {printf("DESIGNATOR\n");}
    break;

  case 176:
#line 308 "asgn4_17CS10030.y"
    {printf("STATEMENT\n");}
    break;

  case 179:
#line 311 "asgn4_17CS10030.y"
    {printf("LABELED STATMENT\n");}
    break;

  case 181:
#line 314 "asgn4_17CS10030.y"
    {printf("COMPOUND STATEMENT\n");}
    break;

  case 183:
#line 317 "asgn4_17CS10030.y"
    {printf("BLOCK ITEM LIST\n");}
    break;

  case 185:
#line 320 "asgn4_17CS10030.y"
    {printf("BLOCK ITEM\n");}
    break;

  case 187:
#line 323 "asgn4_17CS10030.y"
    {printf("EXPRESSION STATEMENT\n");}
    break;

  case 190:
#line 326 "asgn4_17CS10030.y"
    {printf("SELECTION STATEMENT\n");}
    break;

  case 194:
#line 329 "asgn4_17CS10030.y"
    {printf("ITERATION STATEMENT\n");}
    break;

  case 199:
#line 332 "asgn4_17CS10030.y"
    {printf("JUMP STATEMENT\n");}
    break;

  case 201:
#line 335 "asgn4_17CS10030.y"
    {printf("TRANSLATION UNIT\n");}
    break;

  case 203:
#line 338 "asgn4_17CS10030.y"
    {printf("EXTERNAL DECLARATION\n");}
    break;

  case 207:
#line 341 "asgn4_17CS10030.y"
    {printf("FUNCTION DEFINITION\n");}
    break;

  case 209:
#line 344 "asgn4_17CS10030.y"
    {printf("DECLARATION LIST\n");}
    break;


/* Line 1267 of yacc.c.  */
#line 2410 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 346 "asgn4_17CS10030.y"


/*--------------- Additional C code ----------------*/

/*--------------- Func for error ------------------*/
void yyerror(char *s) {
  cout << "Error is: " << s << endl;
}

/*------------ Functions related to symbol table ---------*/
symboltable *symlook(string s) {
  symboltable *it;

  for (it = symtab; it < &symtab[MAX_SYMBOLS]; it++) {
    // is symbol s already here
    if (!((it->name).empty())&& it->name != s) {
      return it;
    }
    // if iterator has reached an empty slot in the symboltable, use that slot
    if (!((it->name).empty())) {
      it->name = s;
      return it;
    }
  }
  yyerror("Too many symbols!\n");
  exit(1);
}

// gentemp with no argument
symboltable *gentemp() {
  static int c = 0; //temp counter for variables
  char str[10]; //temp name
  sprintf(str, "t%02d", c++);
  return symlook(str);
}

void update(symboltable *st, string type, int size, int offset) {
  symboltable *item = symlook(st->name);
  item->type = type;
  item->size = size;
  item->offset = offset;
}

void print() {
  symboltable *it;
  for (it = symtab; it < &symtab[MAX_SYMBOLS]; it++) {
    cout << it->name << " " << it->type << " " << it->size << " " << it->offset << " " << it->nested_table << endl;
  }
}

/*--------------- Functions related to handling unconditional jump ----------------*/
void handle_label(string label_id) {

  vector<label>::iterator it;

  for (it = labeltable.begin(); it != labeltable.end(); it++) {

    //if it exists in the labeltable
    if (it->name == label_id) {
      if (it->addr == NULL) {
        it->addr = quadPtr;
        backpatch(it->list , it->addr);
        (it->list).clear();
        return;
      }

      else{
        yyerror("Duplicate definition of label\n");
        return;
      }
    }

  }
  //if it does not exist in the table
  it->addr = quadPtr;
  (it->list).clear();

}

void handle_goto(string label_id){
  vector<label>::iterator it;

  for (it = labeltable.begin(); it != labeltable.end(); it++) {

      // if the label has been used
      if (label_id == it->name) {

      // label has been used before but not declared
      // add this line to the list of usages
        if (it->addr) {
          it->list = merge(it->list, makelist(quadPtr));
          return;
        }

        // if the label has been declared before
        else {
          //#TODO 
          //emit a goto with it->addr
          return;
        }
    }

   }

  //if goto label does not exist in the table, add it
  it->addr = 0;
  it->list = makelist(quadPtr);

}

vector<int> makelist(int i) {
  vector<int> list;  
  list.push_back(i);
  return list;
}

vector<int> merge(vector<int> l1, vector<int> l2) {
  vector<int> l3 = l1;
  l3.insert(l3.end(), l2.begin(), l2.end());
  return l3;
}

void backpatch(vector<int> p, int i) {
  // for each quad in p, the goto address should be i
  vector<int>::iterator it;

  for (it = p.begin(); it != p.end(); it++) {
    (*qArray[*it]).result = to_string(i);
  }
}

// for binary and unary operators
quad::quad(opcodeType op1, string s1, string s2, string s3):
  op(op1), result(s1), arg1(s2), arg2(s3) {}

quad::quad(opcodeType op1, string s1, string s2):
  op(op1), result(s1), arg1(s2), arg2(0) {}

// for instructions with int constants
quad::quad(opcodeType op1, string s1, int num):
  op(op1), result(s1), arg1(0), arg2(0) {
	arg1 = to_string(num);
  }

// for instructions with float constants
quad::quad(opcodeType op1, string s1, float num):
  op(op1), result(s1), arg1(0), arg2(0) {
	arg1 = to_string(num);
  }

// for copy statement
quad::quad(string s1, string s2):
  op(copy_ins), result(s1), arg1(s2), arg2(0) {}

// for goto statement
quad::quad(opcodeType op1, string s1):
  op(op1), result(s1) {}

void quad::print() {
  if ((this->op <= div_ins) && (this->op >= plus_ins)) {
    cout << this->result << " = " << this->arg1 << endl;
	switch(this->op) {
	  case plus_ins: printf("+"); break;
	  case minus_ins: printf("-"); break;
	  case mult_ins: printf("*"); break;
	  case div_ins: printf("/"); break;
	}
  cout << " " << this->arg2 << endl;
  }
  else if (this->op == unaryminus_ins) {
    cout << this->result << " = - " << this->arg1 << endl;
  }
  else if (this->op == copy_ins) {
    cout << this->result << " = " << this->arg1 << endl;
  }
  else if (this->op == unconditional_jump_ins) {
    cout << "goto " << this->result << endl;
  }
  else if (this->op == return_ins) {
    cout << "return" << endl;
  }

}



