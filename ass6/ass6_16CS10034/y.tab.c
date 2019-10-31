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
#line 1 "ass6_17CS10030_17CS30007.y" /* yacc.c:339  */

#include <bits/stdc++.h>
#include <sstream>
#include "ass6_17CS10030_17CS30007_translator.h"

extern int yylex();
void yyerror(string s);
extern string Type;
vector <string> allstrings;

using namespace std;

#line 79 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    IDENTIFIER = 295,
    INTEGER_CONSTANT = 296,
    FLOATING_CONSTANT = 297,
    CHARACTER_CONSTANT = 298,
    ENUMERATION_CONSTANT = 299,
    STRING_LITERAL = 300,
    SQBRAOPEN = 301,
    SQBRACLOSE = 302,
    ROBRAOPEN = 303,
    ROBRACLOSE = 304,
    CURBRAOPEN = 305,
    CURBRACLOSE = 306,
    DOT = 307,
    ACC = 308,
    INC = 309,
    DEC = 310,
    AMP = 311,
    MUL = 312,
    ADD = 313,
    SUB = 314,
    NEG = 315,
    EXCLAIM = 316,
    DIV = 317,
    MODULO = 318,
    SHL = 319,
    SHR = 320,
    BITSHL = 321,
    BITSHR = 322,
    LTE = 323,
    GTE = 324,
    EQ = 325,
    NEQ = 326,
    BITXOR = 327,
    BITOR = 328,
    AND = 329,
    OR = 330,
    QUESTION = 331,
    COLON = 332,
    SEMICOLON = 333,
    DOTS = 334,
    ASSIGN = 335,
    STAREQ = 336,
    DIVEQ = 337,
    MODEQ = 338,
    PLUSEQ = 339,
    MINUSEQ = 340,
    SHLEQ = 341,
    SHREQ = 342,
    BINANDEQ = 343,
    BINXOREQ = 344,
    BINOREQ = 345,
    COMMA = 346,
    HASH = 347,
    THEN = 348
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
#define IDENTIFIER 295
#define INTEGER_CONSTANT 296
#define FLOATING_CONSTANT 297
#define CHARACTER_CONSTANT 298
#define ENUMERATION_CONSTANT 299
#define STRING_LITERAL 300
#define SQBRAOPEN 301
#define SQBRACLOSE 302
#define ROBRAOPEN 303
#define ROBRACLOSE 304
#define CURBRAOPEN 305
#define CURBRACLOSE 306
#define DOT 307
#define ACC 308
#define INC 309
#define DEC 310
#define AMP 311
#define MUL 312
#define ADD 313
#define SUB 314
#define NEG 315
#define EXCLAIM 316
#define DIV 317
#define MODULO 318
#define SHL 319
#define SHR 320
#define BITSHL 321
#define BITSHR 322
#define LTE 323
#define GTE 324
#define EQ 325
#define NEQ 326
#define BITXOR 327
#define BITOR 328
#define AND 329
#define OR 330
#define QUESTION 331
#define COLON 332
#define SEMICOLON 333
#define DOTS 334
#define ASSIGN 335
#define STAREQ 336
#define DIVEQ 337
#define MODEQ 338
#define PLUSEQ 339
#define MINUSEQ 340
#define SHLEQ 341
#define SHREQ 342
#define BINANDEQ 343
#define BINXOREQ 344
#define BINOREQ 345
#define COMMA 346
#define HASH 347
#define THEN 348

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "ass6_17CS10030_17CS30007.y" /* yacc.c:355  */

  int intval;
  char* charval;
  int instr;
  sym* symp;
  sym_type* symtp;
  expr* E;
  statement* S;
  array* A;
  char unaryOperator;

#line 317 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 334 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  47
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1162

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  211
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  365

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   348

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   168,   168,   173,   177,   191,   197,   206,   210,   212,
     220,   226,   256,   259,   269,   271,   273,   283,   293,   299,
     308,   312,   319,   322,   329,   336,   369,   372,   378,   381,
     384,   387,   390,   393,   399,   402,   409,   422,   430,   438,
     449,   452,   460,   472,   475,   483,   494,   495,   507,   519,
     531,   546,   547,   562,   581,   582,   599,   600,   617,   618,
     635,   636,   653,   654,   670,   674,   681,   682,   707,   708,
     725,   727,   729,   731,   733,   735,   737,   739,   741,   743,
     745,   750,   751,   757,   763,   765,   771,   773,   775,   777,
     779,   781,   783,   785,   790,   792,   797,   798,   805,   807,
     809,   811,   816,   817,   818,   819,   820,   821,   822,   823,
     824,   825,   826,   827,   828,   832,   834,   836,   838,   843,
     845,   847,   849,   851,   856,   858,   863,   865,   870,   872,
     874,   879,   884,   890,   896,   900,   901,   903,   905,   922,
     938,   940,   942,   944,   946,   959,   961,   978,   988,   990,
     993,   995,  1001,  1003,  1008,  1010,  1015,  1017,  1022,  1025,
    1030,  1032,  1037,  1042,  1045,  1047,  1053,  1055,  1057,  1059,
    1064,  1069,  1071,  1076,  1078,  1083,  1085,  1086,  1090,  1091,
    1092,  1096,  1097,  1098,  1102,  1103,  1107,  1108,  1115,  1118,
    1122,  1123,  1127,  1135,  1144,  1149,  1166,  1177,  1191,  1208,
    1209,  1210,  1211,  1215,  1222,  1223,  1227,  1228,  1232,  1233,
    1241,  1243
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AUTO", "ENUM", "RESTRICT", "UNSIGNED",
  "BREAK", "EXTERN", "RETURN", "VOID", "CASE", "FLOAT", "SHORT",
  "VOLATILE", "CHAR", "FOR", "SIGNED", "WHILE", "CONST", "GOTO", "SIZEOF",
  "BOOL", "CONTINUE", "IF", "STATIC", "COMPLEX", "DEFAULT", "INLINE",
  "STRUCT", "IMAGINARY", "DO", "INT", "SWITCH", "DOUBLE", "LONG",
  "TYPEDEF", "ELSE", "REGISTER", "UNION", "IDENTIFIER", "INTEGER_CONSTANT",
  "FLOATING_CONSTANT", "CHARACTER_CONSTANT", "ENUMERATION_CONSTANT",
  "STRING_LITERAL", "SQBRAOPEN", "SQBRACLOSE", "ROBRAOPEN", "ROBRACLOSE",
  "CURBRAOPEN", "CURBRACLOSE", "DOT", "ACC", "INC", "DEC", "AMP", "MUL",
  "ADD", "SUB", "NEG", "EXCLAIM", "DIV", "MODULO", "SHL", "SHR", "BITSHL",
  "BITSHR", "LTE", "GTE", "EQ", "NEQ", "BITXOR", "BITOR", "AND", "OR",
  "QUESTION", "COLON", "SEMICOLON", "DOTS", "ASSIGN", "STAREQ", "DIVEQ",
  "MODEQ", "PLUSEQ", "MINUSEQ", "SHLEQ", "SHREQ", "BINANDEQ", "BINXOREQ",
  "BINOREQ", "COMMA", "HASH", "THEN", "$accept", "primary_expression",
  "constant", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "AND_expression",
  "exclusive_OR_expression", "inclusive_OR_expression",
  "logical_AND_expression", "logical_OR_expression", "M", "N",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "enum_specifier", "enumerator_list", "enumerator", "type_qualifier",
  "function_specifier", "declarator", "direct_declarator", "CT", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name", "initializer",
  "initializer_list", "designation", "designator_list", "designator",
  "statement", "labeled_statement", "compound_statement",
  "block_item_list", "block_item", "expression_statement",
  "selection_statement", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_list", YY_NULLPTR
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
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348
};
# endif

#define YYPACT_NINF -265

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-265)))

#define YYTABLE_NINF -148

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1092,  -265,    11,  -265,  -265,  -265,  -265,  -265,  -265,  -265,
    -265,  -265,  -265,  -265,  -265,  -265,  -265,  -265,  -265,  -265,
    -265,  -265,  -265,    85,  1092,  1092,  -265,  1092,  1092,  1056,
    -265,  -265,   -35,   -18,  -265,    -1,    36,  -265,    48,  -265,
     287,   -12,    25,  -265,  -265,  -265,  -265,  -265,  -265,   -18,
     -36,     1,  -265,    -3,  -265,  -265,    36,  -265,    -1,   869,
    -265,    85,    17,  1092,   664,    43,   -12,    40,   944,  -265,
      94,  -265,  -265,  -265,  -265,    86,   969,  -265,  -265,  -265,
    -265,  -265,  -265,   556,   843,   994,   994,  -265,  -265,  -265,
    -265,  -265,  -265,  -265,  -265,   152,    88,   944,  -265,    89,
      41,    95,    87,   131,   123,   113,   115,   119,   141,  -265,
    -265,  -265,   366,  -265,  -265,    17,   728,  -265,   150,   162,
     696,  -265,   787,   -38,  -265,   110,  -265,  -265,  -265,  -265,
    -265,   556,  -265,  -265,    -9,  1127,  -265,  1127,   172,   944,
     171,  -265,    46,   869,    84,  -265,   556,  -265,  -265,   944,
     894,   190,   195,  -265,  -265,  -265,  -265,  -265,  -265,  -265,
    -265,  -265,  -265,  -265,  -265,  -265,   944,  -265,   944,   944,
     944,   944,   944,   944,   944,   944,   944,   944,   944,   944,
     944,   944,   944,   944,   165,   144,   163,   581,   944,   192,
    -265,   202,   166,   199,   176,  -265,   206,   179,  -265,  -265,
      57,  -265,  -265,  -265,  -265,   207,  -265,  -265,  -265,  -265,
    -265,  -265,   210,   728,  -265,  -265,  -265,   212,   213,  -265,
      -1,   214,   170,  -265,  -265,   222,  -265,   215,  -265,   944,
    -265,  -265,   919,   218,  -265,  -265,   789,  -265,  -265,  -265,
     217,   -34,  -265,    -7,  -265,  -265,  -265,  -265,  -265,  -265,
    -265,    89,    89,    41,    41,    95,    95,    95,    95,    87,
      87,   131,   123,   113,  -265,  -265,  -265,  -265,  -265,    66,
     193,   606,   223,   196,  -265,   944,   498,   498,   944,   498,
    -265,  -265,   442,  -265,   226,  -265,  -265,  -265,  -265,   326,
    -265,   225,  -265,   843,  -265,  -265,  -265,  -265,   869,   225,
    -265,  -265,   944,   944,   944,   944,  -265,   498,  -265,   944,
    -265,   186,  -265,  -265,    -6,  -265,  -265,  -265,  -265,  -265,
      47,  -265,  -265,   115,   119,   186,  -265,   606,    -4,   230,
     263,   498,  -265,   817,   208,   235,  -265,  -265,   239,  -265,
    -265,  -265,  -265,   944,   498,   498,   944,   944,   498,   186,
    -265,  -265,     5,  -265,  -265,   245,   251,   220,  -265,  -265,
    -265,   498,   498,  -265,  -265
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   100,     0,   129,   110,    98,   102,   107,   104,   130,
     103,   109,   128,   111,    99,   112,   131,   113,   105,   108,
     106,   101,   207,     0,    87,    89,   114,    91,    93,     0,
     204,   206,   123,     0,   134,     0,   149,    85,     0,    94,
      96,   133,     0,    86,    88,    90,    92,     1,   205,     0,
     126,     0,   124,     0,   152,   151,   148,    84,     0,     0,
     210,     0,     0,   147,     0,   147,   132,     0,     0,   120,
       0,   135,   153,   150,    95,    96,     0,     2,     6,     7,
       9,     8,     4,     0,     0,     0,     0,    28,    29,    30,
      31,    32,    33,    10,     3,    22,    34,     0,    36,    40,
      43,    46,    51,    54,    56,    58,    60,    62,    66,    68,
     163,    97,     0,   209,   211,     0,     0,   139,    29,     0,
       0,   160,     0,     0,   119,     0,    34,    83,   127,   122,
     125,     0,    26,    81,     0,   116,   162,   118,     0,     0,
       0,   167,     0,     0,     0,   171,     0,    23,    24,     0,
       0,     0,     0,    16,    17,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,     0,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      64,     0,     0,     0,     0,    64,     0,     2,   185,   191,
       0,   188,   189,   175,   176,    64,   186,   177,   178,   179,
     180,   208,     0,     0,   143,   138,   137,    29,     0,   146,
     159,     0,   154,   156,   145,     0,   121,     0,     5,     0,
     115,   117,     0,     0,   174,   164,     0,   166,   170,   172,
       0,     0,    12,     0,    20,    14,    15,    69,    37,    38,
      39,    41,    42,    44,    45,    47,    48,    49,    50,    52,
      53,    55,    57,    59,    64,    64,    64,   201,   203,     0,
       0,     0,     0,     0,   200,     0,     0,     0,     0,     0,
     190,   184,     0,   141,     0,   142,   136,   158,   144,     0,
     161,    27,    82,     0,    35,   173,   165,   169,     0,     0,
      11,    13,     0,     0,     0,     0,   202,     0,    64,     0,
     199,    65,   183,    64,     0,   181,   187,   140,   155,   157,
       0,   168,    21,    61,    63,    65,   182,     0,     0,     0,
       0,     0,    18,     0,     0,    64,    64,    64,     0,   194,
      19,    64,    64,     0,     0,     0,     0,     0,     0,    65,
     195,    65,     0,    67,   197,     0,   192,     0,    64,    64,
     196,     0,     0,   198,   193
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -265,  -265,  -265,  -265,  -265,   -67,  -265,   -91,    52,    58,
      51,    54,   122,   114,   125,     2,     6,  -265,  -146,  -103,
     -65,   -26,  -265,   -60,  -118,   -32,     0,  -265,   253,  -265,
     -71,    45,  -265,   265,   -44,    12,  -265,   -21,   274,   129,
     -19,   -54,  -265,  -265,    29,  -265,  -111,   -55,    27,  -204,
    -265,   180,   -93,  -265,   -46,  -265,    44,  -264,  -265,  -265,
    -265,  -265,   294,  -265,  -265
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    93,    94,    95,   243,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   272,   184,
     109,   133,   166,   200,   128,    22,    61,    38,    39,    24,
      25,   136,    26,    51,    52,    27,    28,    75,    41,    62,
      42,    56,   221,   222,   223,   123,   138,   141,   142,   143,
     144,   145,   202,   203,   204,   205,   206,   207,   208,   209,
     210,    29,    30,    31,    63
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,   126,    40,   127,   111,   185,   167,   308,    60,   132,
     120,   224,   135,   300,    53,    49,   113,    55,   147,   148,
     227,   233,    50,   134,    43,    44,   130,    45,    46,    23,
     126,   114,   298,   110,    64,   240,    65,    73,   119,    34,
     228,     3,   301,   331,    68,   336,    71,    35,    54,   277,
       9,    32,    69,   225,   357,    12,    36,   229,   110,   282,
     135,    33,   213,   335,   135,    34,   135,   112,    72,   211,
     270,   134,   126,    35,   127,   135,    54,   248,   249,   250,
     201,   130,   229,   121,   302,   229,   134,   229,   237,   241,
     212,   124,    70,    36,   218,   137,   229,   235,   332,   171,
     172,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   110,   303,   304,
     305,   126,   220,   127,   244,    34,    57,   269,    54,   298,
     139,   125,    72,    35,    50,   280,   140,   236,   333,    58,
     247,   294,    36,   137,   306,   129,   168,   137,   229,   137,
      50,   169,   170,   175,   176,   177,   178,   229,   137,   173,
     174,   226,   327,    37,   238,   126,    59,   330,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   181,
     230,   297,   231,   312,   313,   182,   315,   284,   183,   343,
     344,   345,   115,   -65,   122,   347,   348,   214,   149,   287,
     150,   179,   180,   292,   151,   152,   153,   154,   329,   215,
     110,   234,   361,   362,   326,   311,   -65,   -65,   314,   265,
     266,   232,   334,   251,   252,    72,   255,   256,   257,   258,
     245,   253,   254,   259,   260,   246,   126,   126,   339,   264,
     271,   267,   273,   321,   274,   325,   355,   275,   356,   328,
     201,   350,   351,   276,   278,   354,   279,   283,   281,   285,
     286,   289,   290,   288,   291,   295,   299,   110,   363,   364,
     307,   309,   110,   317,   310,   293,   322,   229,   297,   337,
     126,   338,   353,   349,   342,   341,   352,   346,   359,   220,
       1,     2,     3,     4,   358,     5,   262,     6,   360,     7,
       8,     9,    10,   261,    11,   323,    12,   110,   263,    13,
     324,    74,    14,    15,    67,    16,    66,    17,   319,    18,
     320,    19,    20,    48,   239,    21,   316,     0,     0,     1,
       2,     3,     4,     0,     5,     0,     6,  -147,     7,     8,
       9,    10,     0,    11,     0,    12,     0,     0,    13,     0,
       0,    14,    15,     0,    16,     0,    17,     0,    18,     0,
      19,    20,     0,     0,    21,     0,     0,    59,     0,     1,
       2,     3,     4,   186,     5,   187,     6,   188,     7,     8,
       9,    10,   189,    11,   190,    12,   191,    76,    13,   192,
     193,    14,    15,   194,    16,     0,    17,   195,    18,   196,
      19,    20,     0,     0,    21,   318,   197,    78,    79,    80,
      81,    82,     0,     0,    83,     0,   112,   198,     0,     0,
      85,    86,    87,    88,    89,    90,    91,    92,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   199,     1,     2,     3,     4,   186,
       5,   187,     6,   188,     7,     8,     9,    10,   189,    11,
     190,    12,   191,    76,    13,   192,   193,    14,    15,   194,
      16,     0,    17,   195,    18,   196,    19,    20,     0,     0,
      21,     0,   197,    78,    79,    80,    81,    82,     0,     0,
      83,     0,   112,     0,     0,     0,    85,    86,    87,    88,
      89,    90,    91,    92,     0,   186,     0,   187,     0,   188,
       0,     0,     0,     0,   189,     0,   190,     0,   191,    76,
     199,   192,   193,     0,     0,   194,     0,     0,     0,   195,
       0,   196,     0,     0,     0,     0,     0,     0,   197,    78,
      79,    80,    81,    82,     0,     0,    83,     0,   112,     0,
       0,     0,    85,    86,    87,    88,    89,    90,    91,    92,
       2,     3,     4,     0,     0,     0,     6,     0,     7,     8,
       9,    10,     0,    11,     0,    12,   199,    76,    13,     0,
       0,     0,    15,     0,     0,     0,    17,     0,    18,     0,
      19,    20,     0,     0,     0,     0,    77,    78,    79,    80,
      81,    82,    76,     0,    83,     0,     0,     0,     0,     0,
      85,    86,    87,    88,    89,    90,    91,    92,     0,     0,
       0,    77,    78,    79,    80,    81,    82,    76,     0,    83,
       0,     0,     0,     0,     0,    85,    86,    87,    88,    89,
      90,    91,    92,     0,     0,     0,    77,    78,    79,    80,
      81,    82,     0,     0,    83,     0,     0,     0,     0,   268,
      85,    86,    87,    88,    89,    90,    91,    92,     0,     3,
       0,     0,     0,     0,     0,     0,     0,     0,     9,     0,
       0,     0,     0,    12,   199,    76,     0,     0,     0,   116,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     3,     0,     0,    77,    78,    79,    80,    81,    82,
       9,   117,    83,     0,     0,    12,     0,    76,    85,    86,
      87,   118,    89,    90,    91,    92,     0,     0,     0,     0,
       0,     0,     0,     3,     0,     0,    77,    78,    79,    80,
      81,    82,     9,   216,    83,     0,     0,    12,     0,    76,
      85,    86,    87,   217,    89,    90,    91,    92,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    77,    78,
      79,    80,    81,    82,     0,     0,    83,     0,     0,     0,
       0,     0,    85,    86,    87,    88,    89,    90,    91,    92,
       1,     2,     3,     4,     0,     5,     0,     6,     0,     7,
       8,     9,    10,     0,    11,     0,    12,     0,     0,    13,
      76,     0,    14,    15,     0,    16,     0,    17,     0,    18,
       0,    19,    20,     0,     0,    21,     0,     0,     0,    77,
      78,    79,    80,    81,    82,   139,   219,    83,    76,    84,
     296,   140,     0,    85,    86,    87,    88,    89,    90,    91,
      92,     0,     0,     0,     0,     0,     0,    77,    78,    79,
      80,    81,    82,   139,    76,    83,     0,    84,   340,   140,
       0,    85,    86,    87,    88,    89,    90,    91,    92,     0,
       0,     0,     0,    77,    78,    79,    80,    81,    82,   139,
      76,    83,     0,    84,     0,   140,     0,    85,    86,    87,
      88,    89,    90,    91,    92,     0,     0,     0,     0,    77,
      78,    79,    80,    81,    82,    76,     0,    83,     0,    84,
       0,     0,     0,    85,    86,    87,    88,    89,    90,    91,
      92,     0,     0,     0,    77,    78,    79,    80,    81,    82,
      76,     0,    83,   242,     0,     0,     0,     0,    85,    86,
      87,    88,    89,    90,    91,    92,     0,     0,     0,    77,
      78,    79,    80,    81,    82,    76,     0,    83,     0,   293,
       0,     0,     0,    85,    86,    87,    88,    89,    90,    91,
      92,     0,     0,     0,    77,    78,    79,    80,    81,    82,
      76,     0,    83,     0,     0,     0,     0,     0,    85,    86,
      87,    88,    89,    90,    91,    92,     0,     0,     0,    77,
      78,    79,    80,    81,    82,    76,     0,   131,     0,     0,
       0,     0,     0,    85,    86,    87,    88,    89,    90,    91,
      92,     0,     0,     0,    77,    78,    79,    80,    81,    82,
       0,     0,   146,     0,     0,     0,     0,     0,    85,    86,
      87,    88,    89,    90,    91,    92,    47,     0,     0,     1,
       2,     3,     4,     0,     5,     0,     6,     0,     7,     8,
       9,    10,     0,    11,     0,    12,     0,     0,    13,     0,
       0,    14,    15,     0,    16,     0,    17,     0,    18,     0,
      19,    20,     0,     0,    21,     1,     2,     3,     4,     0,
       5,     0,     6,     0,     7,     8,     9,    10,     0,    11,
       0,    12,     0,     0,    13,     0,     0,    14,    15,     0,
      16,     0,    17,     0,    18,     0,    19,    20,     0,     0,
      21,     2,     3,     4,     0,     0,     0,     6,     0,     7,
       8,     9,    10,     0,    11,     0,    12,     0,     0,    13,
       0,     0,     0,    15,     0,     0,     0,    17,     0,    18,
       0,    19,    20
};

static const yytype_int16 yycheck[] =
{
       0,    68,    23,    68,    59,   108,    97,   271,    40,    76,
      64,    49,    83,    47,    35,    50,    62,    36,    85,    86,
     131,   139,    40,    83,    24,    25,    70,    27,    28,    29,
      97,    63,   236,    59,    46,   146,    48,    56,    64,    40,
      49,     5,    49,    49,    80,    49,    49,    48,    36,   195,
      14,    40,    51,    91,    49,    19,    57,    91,    84,   205,
     131,    50,   116,   327,   135,    40,   137,    50,    56,   115,
     188,   131,   139,    48,   139,   146,    64,   168,   169,   170,
     112,   125,    91,    40,    91,    91,   146,    91,   143,   149,
     116,    51,    91,    57,   120,    83,    91,    51,    51,    58,
      59,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   143,   264,   265,
     266,   188,   122,   188,   150,    40,    78,   187,   116,   333,
      46,    91,   120,    48,    40,    78,    52,    91,    91,    91,
     166,   232,    57,   131,    78,    51,    57,   135,    91,   137,
      40,    62,    63,    66,    67,    68,    69,    91,   146,    64,
      65,    51,   308,    78,    80,   232,    80,   313,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    56,
     135,   236,   137,   276,   277,    72,   279,   213,    73,   335,
     336,   337,    63,    74,    65,   341,   342,    47,    46,   220,
      48,    70,    71,   229,    52,    53,    54,    55,   311,    47,
     236,    40,   358,   359,   307,   275,    75,    76,   278,    75,
      76,    49,   325,   171,   172,   213,   175,   176,   177,   178,
      40,   173,   174,   179,   180,    40,   303,   304,   331,    74,
      48,    78,    40,   298,    78,   305,   349,    48,   351,   309,
     282,   344,   345,    77,    48,   348,    77,    47,    51,    47,
      47,    91,    40,    49,    49,    47,    49,   293,   361,   362,
      77,    48,   298,    47,    78,    50,   302,    91,   333,    49,
     347,    18,   347,   343,    49,    77,   346,    48,    37,   289,
       3,     4,     5,     6,    49,     8,   182,    10,    78,    12,
      13,    14,    15,   181,    17,   303,    19,   333,   183,    22,
     304,    58,    25,    26,    49,    28,    42,    30,   289,    32,
     293,    34,    35,    29,   144,    38,   282,    -1,    -1,     3,
       4,     5,     6,    -1,     8,    -1,    10,    50,    12,    13,
      14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,    -1,
      -1,    25,    26,    -1,    28,    -1,    30,    -1,    32,    -1,
      34,    35,    -1,    -1,    38,    -1,    -1,    80,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    -1,    -1,    38,    79,    40,    41,    42,    43,
      44,    45,    -1,    -1,    48,    -1,    50,    51,    -1,    -1,
      54,    55,    56,    57,    58,    59,    60,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    -1,    -1,
      38,    -1,    40,    41,    42,    43,    44,    45,    -1,    -1,
      48,    -1,    50,    -1,    -1,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    -1,     7,    -1,     9,    -1,    11,
      -1,    -1,    -1,    -1,    16,    -1,    18,    -1,    20,    21,
      78,    23,    24,    -1,    -1,    27,    -1,    -1,    -1,    31,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      42,    43,    44,    45,    -1,    -1,    48,    -1,    50,    -1,
      -1,    -1,    54,    55,    56,    57,    58,    59,    60,    61,
       4,     5,     6,    -1,    -1,    -1,    10,    -1,    12,    13,
      14,    15,    -1,    17,    -1,    19,    78,    21,    22,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    30,    -1,    32,    -1,
      34,    35,    -1,    -1,    -1,    -1,    40,    41,    42,    43,
      44,    45,    21,    -1,    48,    -1,    -1,    -1,    -1,    -1,
      54,    55,    56,    57,    58,    59,    60,    61,    -1,    -1,
      -1,    40,    41,    42,    43,    44,    45,    21,    -1,    48,
      -1,    -1,    -1,    -1,    -1,    54,    55,    56,    57,    58,
      59,    60,    61,    -1,    -1,    -1,    40,    41,    42,    43,
      44,    45,    -1,    -1,    48,    -1,    -1,    -1,    -1,    78,
      54,    55,    56,    57,    58,    59,    60,    61,    -1,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,    -1,
      -1,    -1,    -1,    19,    78,    21,    -1,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     5,    -1,    -1,    40,    41,    42,    43,    44,    45,
      14,    47,    48,    -1,    -1,    19,    -1,    21,    54,    55,
      56,    57,    58,    59,    60,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,    -1,    -1,    40,    41,    42,    43,
      44,    45,    14,    47,    48,    -1,    -1,    19,    -1,    21,
      54,    55,    56,    57,    58,    59,    60,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      42,    43,    44,    45,    -1,    -1,    48,    -1,    -1,    -1,
      -1,    -1,    54,    55,    56,    57,    58,    59,    60,    61,
       3,     4,     5,     6,    -1,     8,    -1,    10,    -1,    12,
      13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,
      21,    -1,    25,    26,    -1,    28,    -1,    30,    -1,    32,
      -1,    34,    35,    -1,    -1,    38,    -1,    -1,    -1,    40,
      41,    42,    43,    44,    45,    46,    49,    48,    21,    50,
      51,    52,    -1,    54,    55,    56,    57,    58,    59,    60,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    45,    46,    21,    48,    -1,    50,    51,    52,
      -1,    54,    55,    56,    57,    58,    59,    60,    61,    -1,
      -1,    -1,    -1,    40,    41,    42,    43,    44,    45,    46,
      21,    48,    -1,    50,    -1,    52,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,    -1,    -1,    -1,    -1,    40,
      41,    42,    43,    44,    45,    21,    -1,    48,    -1,    50,
      -1,    -1,    -1,    54,    55,    56,    57,    58,    59,    60,
      61,    -1,    -1,    -1,    40,    41,    42,    43,    44,    45,
      21,    -1,    48,    49,    -1,    -1,    -1,    -1,    54,    55,
      56,    57,    58,    59,    60,    61,    -1,    -1,    -1,    40,
      41,    42,    43,    44,    45,    21,    -1,    48,    -1,    50,
      -1,    -1,    -1,    54,    55,    56,    57,    58,    59,    60,
      61,    -1,    -1,    -1,    40,    41,    42,    43,    44,    45,
      21,    -1,    48,    -1,    -1,    -1,    -1,    -1,    54,    55,
      56,    57,    58,    59,    60,    61,    -1,    -1,    -1,    40,
      41,    42,    43,    44,    45,    21,    -1,    48,    -1,    -1,
      -1,    -1,    -1,    54,    55,    56,    57,    58,    59,    60,
      61,    -1,    -1,    -1,    40,    41,    42,    43,    44,    45,
      -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    54,    55,
      56,    57,    58,    59,    60,    61,     0,    -1,    -1,     3,
       4,     5,     6,    -1,     8,    -1,    10,    -1,    12,    13,
      14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,    -1,
      -1,    25,    26,    -1,    28,    -1,    30,    -1,    32,    -1,
      34,    35,    -1,    -1,    38,     3,     4,     5,     6,    -1,
       8,    -1,    10,    -1,    12,    13,    14,    15,    -1,    17,
      -1,    19,    -1,    -1,    22,    -1,    -1,    25,    26,    -1,
      28,    -1,    30,    -1,    32,    -1,    34,    35,    -1,    -1,
      38,     4,     5,     6,    -1,    -1,    -1,    10,    -1,    12,
      13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    30,    -1,    32,
      -1,    34,    35
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     8,    10,    12,    13,    14,
      15,    17,    19,    22,    25,    26,    28,    30,    32,    34,
      35,    38,   119,   120,   123,   124,   126,   129,   130,   155,
     156,   157,    40,    50,    40,    48,    57,    78,   121,   122,
     131,   132,   134,   120,   120,   120,   120,     0,   156,    50,
      40,   127,   128,   131,   129,   134,   135,    78,    91,    80,
     119,   120,   133,   158,    46,    48,   132,   127,    80,    51,
      91,    49,   129,   134,   122,   131,    21,    40,    41,    42,
      43,    44,    45,    48,    50,    54,    55,    56,    57,    58,
      59,    60,    61,    95,    96,    97,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   114,
     115,   141,    50,   148,   119,   133,    25,    47,    57,   115,
     135,    40,   133,   139,    51,    91,    99,   114,   118,    51,
     128,    48,    99,   115,   117,   124,   125,   129,   140,    46,
      52,   141,   142,   143,   144,   145,    48,    99,    99,    46,
      48,    52,    53,    54,    55,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,   116,   101,    57,    62,
      63,    58,    59,    64,    65,    66,    67,    68,    69,    70,
      71,    56,    72,    73,   113,   113,     7,     9,    11,    16,
      18,    20,    23,    24,    27,    31,    33,    40,    51,    78,
     117,   119,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   148,   115,   135,    47,    47,    47,    57,   115,    49,
     120,   136,   137,   138,    49,    91,    51,   140,    49,    91,
     125,   125,    49,   118,    40,    51,    91,   141,    80,   145,
     140,   117,    49,    98,   115,    40,    40,   115,   101,   101,
     101,   102,   102,   103,   103,   104,   104,   104,   104,   105,
     105,   106,   107,   108,    74,    75,    76,    78,    78,   117,
     118,    48,   112,    40,    78,    48,    77,   112,    48,    77,
      78,    51,   112,    47,   115,    47,    47,   131,    49,    91,
      40,    49,   115,    50,   101,    47,    51,   141,   143,    49,
      47,    49,    91,   112,   112,   112,    78,    77,   151,    48,
      78,   117,   146,   146,   117,   146,   150,    47,    79,   138,
     142,   141,   115,   109,   110,   117,   146,   112,   117,   113,
     112,    49,    51,    91,   113,   151,    49,    49,    18,   146,
      51,    77,    49,   112,   112,   112,    48,   112,   112,   117,
     146,   146,   117,   114,   146,   113,   113,    49,    49,    37,
      78,   112,   112,   146,   146
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    94,    95,    95,    95,    95,    96,    96,    96,    96,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      98,    98,    99,    99,    99,    99,    99,    99,   100,   100,
     100,   100,   100,   100,   101,   101,   102,   102,   102,   102,
     103,   103,   103,   104,   104,   104,   105,   105,   105,   105,
     105,   106,   106,   106,   107,   107,   108,   108,   109,   109,
     110,   110,   111,   111,   112,   113,   114,   114,   115,   115,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   117,   117,   118,   119,   119,   120,   120,   120,   120,
     120,   120,   120,   120,   121,   121,   122,   122,   123,   123,
     123,   123,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   125,   125,   125,   125,   126,
     126,   126,   126,   126,   127,   127,   128,   128,   129,   129,
     129,   130,   131,   131,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   133,   134,   134,
     134,   134,   135,   135,   136,   136,   137,   137,   138,   138,
     139,   139,   140,   141,   141,   141,   142,   142,   142,   142,
     143,   144,   144,   145,   145,   146,   146,   146,   146,   146,
     146,   147,   147,   147,   148,   148,   149,   149,   150,   150,
     151,   151,   152,   152,   152,   153,   153,   153,   153,   154,
     154,   154,   154,   154,   155,   155,   156,   156,   157,   157,
     158,   158
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     4,     3,     4,     3,     3,     2,     2,     6,     7,
       1,     3,     1,     2,     2,     2,     2,     4,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     5,     1,     5,     0,     0,     1,     9,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     2,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     2,     1,     5,
       4,     6,     5,     2,     1,     3,     1,     3,     1,     1,
       1,     1,     2,     1,     1,     3,     5,     4,     4,     3,
       6,     5,     5,     4,     5,     4,     4,     0,     2,     1,
       3,     2,     1,     2,     1,     3,     1,     3,     2,     1,
       1,     3,     1,     1,     3,     4,     2,     1,     4,     3,
       2,     1,     2,     3,     2,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     3,     2,     1,     3,     1,     1,
       2,     1,     8,    11,     5,     7,     9,     8,    11,     3,
       2,     2,     3,     2,     1,     2,     1,     1,     5,     4,
       1,     2
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
#line 168 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
	(yyval.E) = new expr();
	(yyval.E)->loc = (yyvsp[0].symp);
	(yyval.E)->type = "NONBOOL";
	}
#line 1868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 173 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
	(yyval.E) = new expr();
	(yyval.E)->loc = (yyvsp[0].symp);
	}
#line 1877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 177 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
	(yyval.E) = new expr();
	sym_type* tmp = new sym_type("PTR");
	(yyval.E)->loc = gentemp(tmp, (yyvsp[0].charval));
	(yyval.E)->loc->type->ptr = new sym_type("CHAR");

	allstrings.push_back((yyvsp[0].charval));
	stringstream strs;
    strs << allstrings.size()-1;
    string temp_str = strs.str();
    char* intStr = (char*) temp_str.c_str();
	string str = string(intStr);
	emit("EQUALSTR", (yyval.E)->loc->name, str);
	}
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 191 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
	(yyval.E) = (yyvsp[-1].E);
	}
#line 1904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 197 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
	stringstream strs;
    strs << (yyvsp[0].intval);
    string temp_str = strs.str();
    char* intStr = (char*) temp_str.c_str();
	string str = string(intStr);
	(yyval.symp) = gentemp(new sym_type("INTEGER"), str);
	emit("EQUAL", (yyval.symp)->name, (yyvsp[0].intval));
	}
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 206 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
	(yyval.symp) = gentemp(new sym_type("DOUBLE"), string((yyvsp[0].charval)));
	emit("EQUAL", (yyval.symp)->name, string((yyvsp[0].charval)));
	}
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 210 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 1934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 212 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
	(yyval.symp) = gentemp(new sym_type("CHAR"),(yyvsp[0].charval));
	emit("EQUALCHAR", (yyval.symp)->name, string((yyvsp[0].charval)));
	}
#line 1943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 220 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		(yyval.A) = new array ();
		(yyval.A)->array = (yyvsp[0].E)->loc;
		(yyval.A)->loc = (yyval.A)->array;
		(yyval.A)->type = (yyvsp[0].E)->loc->type;
	}
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 226 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		(yyval.A) = new array();
		
		(yyval.A)->array = (yyvsp[-3].A)->loc;							// copy the base
		(yyval.A)->type = (yyvsp[-3].A)->type->ptr;						// type = type of element
		(yyval.A)->loc = gentemp(new sym_type("INTEGER"));		// store computed address
		
		// New address =(if only) already computed + $3 * new width
		if ((yyvsp[-3].A)->cat=="ARR") {						// if already computed
			sym* t = gentemp(new sym_type("INTEGER"));
			stringstream strs;
		    strs <<size_type((yyval.A)->type);
		    string temp_str = strs.str();
		    char* intStr = (char*) temp_str.c_str();
			string str = string(intStr);				
 			emit ("MULT", t->name, (yyvsp[-1].E)->loc->name, str);
			emit ("ADD", (yyval.A)->loc->name, (yyvsp[-3].A)->loc->name, t->name);
		}
 		else {
 			stringstream strs;
		    strs <<size_type((yyval.A)->type);
		    string temp_str = strs.str();
		    char* intStr1 = (char*) temp_str.c_str();
			string str1 = string(intStr1);		
	 		emit("MULT", (yyval.A)->loc->name, (yyvsp[-1].E)->loc->name, str1);
 		}

 		// Mark that it contains array address and first time computation is done
		(yyval.A)->cat = "ARR";
	}
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 256 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
	//later
	}
#line 1997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 259 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		(yyval.A) = new array();
		(yyval.A)->array = gentemp((yyvsp[-3].A)->type);
		stringstream strs;
	    strs <<(yyvsp[-1].intval);
	    string temp_str = strs.str();
	    char* intStr = (char*) temp_str.c_str();
		string str = string(intStr);		
		emit("CALL", (yyval.A)->array->name, (yyvsp[-3].A)->array->name, str);
	}
#line 2012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 269 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 271 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 2026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 273 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		(yyval.A) = new array();

		// copy $1 to $$
		(yyval.A)->array = gentemp((yyvsp[-1].A)->array->type);
		emit ("EQUAL", (yyval.A)->array->name, (yyvsp[-1].A)->array->name);

		// Increment $1
		emit ("ADD", (yyvsp[-1].A)->array->name, (yyvsp[-1].A)->array->name, "1");
	}
#line 2041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 283 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		(yyval.A) = new array();

		// copy $1 to $$
		(yyval.A)->array = gentemp((yyvsp[-1].A)->array->type);
		emit ("EQUAL", (yyval.A)->array->name, (yyvsp[-1].A)->array->name);

		// Decrement $1
		emit ("SUB", (yyvsp[-1].A)->array->name, (yyvsp[-1].A)->array->name, "1");
	}
#line 2056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 293 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		//later to be added more
		(yyval.A) = new array();
		(yyval.A)->array = gentemp(new sym_type("INTEGER"));
		(yyval.A)->loc = gentemp(new sym_type("INTEGER"));
	}
#line 2067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 299 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		//later to be added more
		(yyval.A) = new array();
		(yyval.A)->array = gentemp(new sym_type("INTEGER"));
		(yyval.A)->loc = gentemp(new sym_type("INTEGER"));
	}
#line 2078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 308 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
	emit ("PARAM", (yyvsp[0].E)->loc->name);
	(yyval.intval) = 1;
	}
#line 2087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 312 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
	emit ("PARAM", (yyvsp[0].E)->loc->name);
	(yyval.intval) = (yyvsp[-2].intval)+1;
	}
#line 2096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 319 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
	(yyval.A) = (yyvsp[0].A);
	}
#line 2104 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 322 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		// Increment $2
		emit ("ADD", (yyvsp[0].A)->array->name, (yyvsp[0].A)->array->name, "1");

		// Use the same value as $2
		(yyval.A) = (yyvsp[0].A);
	}
#line 2116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 329 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		// Decrement $2
		emit ("SUB", (yyvsp[0].A)->array->name, (yyvsp[0].A)->array->name, "1");

		// Use the same value as $2
		(yyval.A) = (yyvsp[0].A);
	}
#line 2128 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 336 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		(yyval.A) = new array();
		switch ((yyvsp[-1].unaryOperator)) {
			case '&':
				(yyval.A)->array = gentemp((new sym_type("PTR")));
				(yyval.A)->array->type->ptr = (yyvsp[0].A)->array->type; 
				emit ("ADDRESS", (yyval.A)->array->name, (yyvsp[0].A)->array->name);
				break;
			case '*':
				(yyval.A)->cat = "PTR";
				(yyval.A)->loc = gentemp ((yyvsp[0].A)->array->type->ptr);
				emit ("PTRR", (yyval.A)->loc->name, (yyvsp[0].A)->array->name);
				(yyval.A)->array = (yyvsp[0].A)->array;
				break;
			case '+':
				(yyval.A) = (yyvsp[0].A);
				break;
			case '-':
				(yyval.A)->array = gentemp(new sym_type((yyvsp[0].A)->array->type->type));
				emit ("UMINUS", (yyval.A)->array->name, (yyvsp[0].A)->array->name);
				break;
			case '~':
				(yyval.A)->array = gentemp(new sym_type((yyvsp[0].A)->array->type->type));
				emit ("BNOT", (yyval.A)->array->name, (yyvsp[0].A)->array->name);
				break;
			case '!':
				(yyval.A)->array = gentemp(new sym_type((yyvsp[0].A)->array->type->type));
				emit ("LNOT", (yyval.A)->array->name, (yyvsp[0].A)->array->name);
				break;
			default:
				break;
		}
	}
#line 2166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 369 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
	//later
	}
#line 2174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 372 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
	//later
	}
#line 2182 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 378 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		(yyval.unaryOperator) = '&';
	}
#line 2190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 381 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		(yyval.unaryOperator) = '*';
	}
#line 2198 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 384 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		(yyval.unaryOperator) = '+';
	}
#line 2206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 387 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		(yyval.unaryOperator) = '-';
	}
#line 2214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 390 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		(yyval.unaryOperator) = '~';
	}
#line 2222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 393 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		(yyval.unaryOperator) = '!';
	}
#line 2230 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 399 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		(yyval.A)=(yyvsp[0].A);
	}
#line 2238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 402 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		//to be added later
		(yyval.A)=(yyvsp[0].A);
	}
#line 2247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 409 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		(yyval.E) = new expr();
		if ((yyvsp[0].A)->cat=="ARR") { // Array
			(yyval.E)->loc = gentemp((yyvsp[0].A)->loc->type);
			emit("ARRR", (yyval.E)->loc->name, (yyvsp[0].A)->array->name, (yyvsp[0].A)->loc->name);
		}
		else if ((yyvsp[0].A)->cat=="PTR") { // Pointer
			(yyval.E)->loc = (yyvsp[0].A)->loc;
		}
		else { // otherwise
			(yyval.E)->loc = (yyvsp[0].A)->array;
		}
	}
#line 2265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 422 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].A)->array) ) {
			(yyval.E) = new expr();
			(yyval.E)->loc = gentemp(new sym_type((yyvsp[-2].E)->loc->type->type));
			emit ("MULT", (yyval.E)->loc->name, (yyvsp[-2].E)->loc->name, (yyvsp[0].A)->array->name);
		}
		else cout << "Type Error"<< endl;
	}
#line 2278 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 430 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].A)->array) ) {
			(yyval.E) = new expr();
			(yyval.E)->loc = gentemp(new sym_type((yyvsp[-2].E)->loc->type->type));
			emit ("DIVIDE", (yyval.E)->loc->name, (yyvsp[-2].E)->loc->name, (yyvsp[0].A)->array->name);
		}
		else cout << "Type Error"<< endl;
	}
#line 2291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 438 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].A)->array) ) {
			(yyval.E) = new expr();
			(yyval.E)->loc = gentemp(new sym_type((yyvsp[-2].E)->loc->type->type));
			emit ("MODOP", (yyval.E)->loc->name, (yyvsp[-2].E)->loc->name, (yyvsp[0].A)->array->name);
		}
		else cout << "Type Error"<< endl;
	}
#line 2304 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 449 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		(yyval.E)=(yyvsp[0].E);
	}
#line 2312 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 452 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc) ) {
			(yyval.E) = new expr();
			(yyval.E)->loc = gentemp(new sym_type((yyvsp[-2].E)->loc->type->type));
			emit ("ADD", (yyval.E)->loc->name, (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
		}
		else cout << "Type Error"<< endl;
	}
#line 2325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 460 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
			if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc) ) {
			(yyval.E) = new expr();
			(yyval.E)->loc = gentemp(new sym_type((yyvsp[-2].E)->loc->type->type));
			emit ("SUB", (yyval.E)->loc->name, (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
		}
		else cout << "Type Error"<< endl;

	}
#line 2339 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 472 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		(yyval.E)=(yyvsp[0].E);
	}
#line 2347 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 475 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		if ((yyvsp[0].E)->loc->type->type == "INTEGER") {
			(yyval.E) = new expr();
			(yyval.E)->loc = gentemp (new sym_type("INTEGER"));
			emit ("LEFTOP", (yyval.E)->loc->name, (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
		}
		else cout << "Type Error"<< endl;
	}
#line 2360 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 483 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		if ((yyvsp[0].E)->loc->type->type == "INTEGER") {
			(yyval.E) = new expr();
			(yyval.E)->loc = gentemp (new sym_type("INTEGER"));
			emit ("RIGHTOP", (yyval.E)->loc->name, (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
		}
		else cout << "Type Error"<< endl;
	}
#line 2373 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 494 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {(yyval.E)=(yyvsp[0].E);}
#line 2379 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 495 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc) ) {
			(yyval.E) = new expr();
			(yyval.E)->type = "BOOL";

			(yyval.E)->truelist = makelist (nextinstr());
			(yyval.E)->falselist = makelist (nextinstr()+1);
			emit("LT", "", (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
			emit ("GOTOOP", "");
		}
		else cout << "Type Error"<< endl;
	}
#line 2396 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 507 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc) ) {
			(yyval.E) = new expr();
			(yyval.E)->type = "BOOL";

			(yyval.E)->truelist = makelist (nextinstr());
			(yyval.E)->falselist = makelist (nextinstr()+1);
			emit("GT", "", (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
			emit ("GOTOOP", "");
		}
		else cout << "Type Error"<< endl;
	}
#line 2413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 519 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc) ) {
			(yyval.E) = new expr();
			(yyval.E)->type = "BOOL";

			(yyval.E)->truelist = makelist (nextinstr());
			(yyval.E)->falselist = makelist (nextinstr()+1);
			emit("LE", "", (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
			emit ("GOTOOP", "");
		}
		else cout << "Type Error"<< endl;
	}
#line 2430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 531 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc) ) {
			(yyval.E) = new expr();
			(yyval.E)->type = "BOOL";

			(yyval.E)->truelist = makelist (nextinstr());
			(yyval.E)->falselist = makelist (nextinstr()+1);
			emit("GE", "", (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
			emit ("GOTOOP", "");
		}
		else cout << "Type Error"<< endl;
	}
#line 2447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 546 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {(yyval.E)=(yyvsp[0].E);}
#line 2453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 547 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc)) {
			bool2int ((yyvsp[-2].E));
			bool2int ((yyvsp[0].E));

			(yyval.E) = new expr();
			(yyval.E)->type = "BOOL";

			(yyval.E)->truelist = makelist (nextinstr());
			(yyval.E)->falselist = makelist (nextinstr()+1);
			emit("EQOP", "", (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
			emit ("GOTOOP", "");
		}
		else cout << "Type Error"<< endl;
	}
#line 2473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 562 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc) ) {
			// If any is bool get its value
			bool2int ((yyvsp[-2].E));
			bool2int ((yyvsp[0].E));

			(yyval.E) = new expr();
			(yyval.E)->type = "BOOL";

			(yyval.E)->truelist = makelist (nextinstr());
			(yyval.E)->falselist = makelist (nextinstr()+1);
			emit("NEOP", "", (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
			emit ("GOTOOP", "");
		}
		else cout << "Type Error"<< endl;
	}
#line 2494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 581 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {(yyval.E)=(yyvsp[0].E);}
#line 2500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 582 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc) ) {
			// If any is bool get its value
			bool2int ((yyvsp[-2].E));
			bool2int ((yyvsp[0].E));
			
			(yyval.E) = new expr();
			(yyval.E)->type = "NONBOOL";

			(yyval.E)->loc = gentemp (new sym_type("INTEGER"));
			emit ("BAND", (yyval.E)->loc->name, (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
		}
		else cout << "Type Error"<< endl;
	}
#line 2519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 599 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {(yyval.E)=(yyvsp[0].E);}
#line 2525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 600 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc) ) {
			// If any is bool get its value
			bool2int ((yyvsp[-2].E));
			bool2int ((yyvsp[0].E));
			
			(yyval.E) = new expr();
			(yyval.E)->type = "NONBOOL";

			(yyval.E)->loc = gentemp (new sym_type("INTEGER"));
			emit ("XOR", (yyval.E)->loc->name, (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
		}
		else cout << "Type Error"<< endl;
	}
#line 2544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 617 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {(yyval.E)=(yyvsp[0].E);}
#line 2550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 618 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc) ) {
			// If any is bool get its value
			bool2int ((yyvsp[-2].E));
			bool2int ((yyvsp[0].E));
			
			(yyval.E) = new expr();
			(yyval.E)->type = "NONBOOL";

			(yyval.E)->loc = gentemp (new sym_type("INTEGER"));
			emit ("INOR", (yyval.E)->loc->name, (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
		}
		else cout << "Type Error"<< endl;
	}
#line 2569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 635 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {(yyval.E)=(yyvsp[0].E);}
#line 2575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 636 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		int2bool((yyvsp[0].E));

		// convert $1 to bool and backpatch using N
		backpatch((yyvsp[-3].S)->nextlist, nextinstr());
		int2bool((yyvsp[-4].E));

		(yyval.E) = new expr();
		(yyval.E)->type = "BOOL";

		backpatch((yyvsp[-4].E)->truelist, (yyvsp[-1].instr));
		(yyval.E)->truelist = (yyvsp[0].E)->truelist;
		(yyval.E)->falselist = merge ((yyvsp[-4].E)->falselist, (yyvsp[0].E)->falselist);
	}
#line 2594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 653 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {(yyval.E)=(yyvsp[0].E);}
#line 2600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 654 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		int2bool((yyvsp[0].E));

		// convert $1 to bool and backpatch using N
		backpatch((yyvsp[-3].S)->nextlist, nextinstr());
		int2bool((yyvsp[-4].E));

		(yyval.E) = new expr();
		(yyval.E)->type = "BOOL";

		backpatch ((yyvsp[-4].E)->falselist, (yyvsp[-1].instr));
		(yyval.E)->truelist = merge ((yyvsp[-4].E)->truelist, (yyvsp[0].E)->truelist);
		(yyval.E)->falselist = (yyvsp[0].E)->falselist;
	}
#line 2619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 670 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {	// To store the address of the next instruction
		(yyval.instr) = nextinstr();
	}
#line 2627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 674 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    { 	// gaurd against fallthrough by emitting a goto
		(yyval.S)  = new statement();
		(yyval.S)->nextlist = makelist(nextinstr());
		emit ("GOTOOP","");
	}
#line 2637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 681 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {(yyval.E)=(yyvsp[0].E);}
#line 2643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 682 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		(yyval.E)->loc = gentemp((yyvsp[-4].E)->loc->type);
		(yyval.E)->loc->update((yyvsp[-4].E)->loc->type);
		
		emit("EQUAL", (yyval.E)->loc->name, (yyvsp[0].E)->loc->name);
		list<int> l = makelist(nextinstr());
		emit ("GOTOOP", "");

	
		backpatch((yyvsp[-3].S)->nextlist, nextinstr());
		emit("EQUAL", (yyval.E)->loc->name, (yyvsp[-4].E)->loc->name);
		list<int> m = makelist(nextinstr());
		l = merge (l, m);
		emit ("GOTOOP", "");

	
		backpatch((yyvsp[-7].S)->nextlist, nextinstr());
		int2bool((yyvsp[-8].E));
		backpatch ((yyvsp[-8].E)->truelist, (yyvsp[-5].instr));
		backpatch ((yyvsp[-8].E)->falselist, (yyvsp[-1].instr));
		backpatch (l, nextinstr());
	}
#line 2670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 707 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {(yyval.E)=(yyvsp[0].E);}
#line 2676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 708 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		if((yyvsp[-2].A)->cat=="ARR") {
			(yyvsp[0].E)->loc = conv((yyvsp[0].E)->loc, (yyvsp[-2].A)->type->type);
			emit("ARRL", (yyvsp[-2].A)->array->name, (yyvsp[-2].A)->loc->name, (yyvsp[0].E)->loc->name);	
			}
		else if((yyvsp[-2].A)->cat=="PTR") {
			emit("PTRL", (yyvsp[-2].A)->array->name, (yyvsp[0].E)->loc->name);	
			}
		else{
			(yyvsp[0].E)->loc = conv((yyvsp[0].E)->loc, (yyvsp[-2].A)->array->type->type);
			emit("EQUAL", (yyvsp[-2].A)->array->name, (yyvsp[0].E)->loc->name);
			}
		(yyval.E) = (yyvsp[0].E);
	}
#line 2695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 725 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 2702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 727 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 2709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 729 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 2716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 731 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 2723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 733 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 2730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 735 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 2737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 737 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 2744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 739 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 2751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 741 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 2758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 743 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 2765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 745 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 2772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 750 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {(yyval.E)=(yyvsp[0].E);}
#line 2778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 751 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
	//later
	}
#line 2786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 757 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
	//later
	}
#line 2794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 763 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 2801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 765 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 2808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 771 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 2815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 773 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 2822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 775 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 2829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 777 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 2836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 779 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 2843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 781 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 2850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 783 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 2857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 785 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 2864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 790 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 2871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 792 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 2878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 797 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {(yyval.symp)=(yyvsp[0].symp);}
#line 2884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 798 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		if ((yyvsp[0].symp)->initial_value!="") (yyvsp[-2].symp)->initial_value=(yyvsp[0].symp)->initial_value;
		emit ("EQUAL", (yyvsp[-2].symp)->name, (yyvsp[0].symp)->name);
	}
#line 2893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 805 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 2900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 807 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 2907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 809 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 2914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 811 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 2921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 816 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {Type="VOID";}
#line 2927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 817 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {Type="CHAR";}
#line 2933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 819 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {Type="INTEGER";}
#line 2939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 822 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {Type="DOUBLE";}
#line 2945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 832 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 2952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 834 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 2959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 836 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 2966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 838 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 2973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 843 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 2980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 845 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 2987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 847 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 2994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 849 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 851 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 856 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 858 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 863 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 865 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3036 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 870 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 872 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 874 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 879 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 884 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		sym_type * t = (yyvsp[-1].symtp);
		while (t->ptr !=NULL) t = t->ptr;
		t->ptr = (yyvsp[0].symp)->type;
		(yyval.symp) = (yyvsp[0].symp)->update((yyvsp[-1].symtp));
	}
#line 3075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 890 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 896 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		(yyval.symp) = (yyvsp[0].symp)->update(new sym_type(Type));
		currentsymbol = (yyval.symp);
	}
#line 3091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 900 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {(yyval.symp)=(yyvsp[-1].symp);}
#line 3097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 901 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3104 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 903 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 905 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		sym_type * t = (yyvsp[-3].symp) -> type;
		sym_type * prev = NULL;
		while (t->type == "ARR") {
			prev = t;
			t = t->ptr;
		}
		if (prev==NULL) {
			int temp = atoi((yyvsp[-1].E)->loc->initial_value.c_str());
			sym_type* s = new sym_type("ARR", (yyvsp[-3].symp)->type, temp);
			(yyval.symp) = (yyvsp[-3].symp)->update(s);
		}
		else {
			prev->ptr =  new sym_type("ARR", t, atoi((yyvsp[-1].E)->loc->initial_value.c_str()));
			(yyval.symp) = (yyvsp[-3].symp)->update ((yyvsp[-3].symp)->type);
		}
	}
#line 3133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 922 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		sym_type * t = (yyvsp[-2].symp) -> type;
		sym_type * prev = NULL;
		while (t->type == "ARR") {
			prev = t;
			t = t->ptr;
		}
		if (prev==NULL) {
			sym_type* s = new sym_type("ARR", (yyvsp[-2].symp)->type, 0);
			(yyval.symp) = (yyvsp[-2].symp)->update(s);
		}
		else {
			prev->ptr =  new sym_type("ARR", t, 0);
			(yyval.symp) = (yyvsp[-2].symp)->update ((yyvsp[-2].symp)->type);
		}
	}
#line 3154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 938 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 940 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3168 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 942 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 944 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3182 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 946 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		table->name = (yyvsp[-4].symp)->name;

		if ((yyvsp[-4].symp)->type->type !="VOID") {
			sym *s = table->lookup("return");
			s->update((yyvsp[-4].symp)->type);		
		}
		(yyvsp[-4].symp)->nested=table;
		(yyvsp[-4].symp)->category = "function";
		table->parent = globalsymbolTable;
		changeTable (globalsymbolTable);				// Come back to globalsymbol table
		currentsymbol = (yyval.symp);
	}
#line 3200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 959 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 961 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		table->name = (yyvsp[-3].symp)->name;

		if ((yyvsp[-3].symp)->type->type !="VOID") {
			sym *s = table->lookup("return");
			s->update((yyvsp[-3].symp)->type);		
		}
		(yyvsp[-3].symp)->nested=table;
		(yyvsp[-3].symp)->category = "function";
		
		table->parent = globalsymbolTable;
		changeTable (globalsymbolTable);				// Come back to globalsymbol table
		currentsymbol = (yyval.symp);
	}
#line 3226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 978 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    { 															// Used for changing to symbol table for a function
		if (currentsymbol->nested==NULL) changeTable(new symTable(""));	// Function symbol table doesn't already exist
		else {
			changeTable (currentsymbol ->nested);						// Function symbol table already exists
			emit ("FUNC", table->name);
		}
	}
#line 3238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 988 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3245 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 990 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		(yyval.symtp) = new sym_type("PTR");
	}
#line 3253 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 993 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3260 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 995 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		(yyval.symtp) = new sym_type("PTR", (yyvsp[0].symtp));
	}
#line 3268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1001 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3275 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1003 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1008 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3289 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1010 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3296 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1015 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1017 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3310 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1022 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		(yyvsp[0].symp)->category = "param";
	}
#line 3318 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1025 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1030 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3332 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1032 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3339 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1037 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3346 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1042 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		(yyval.symp) = (yyvsp[0].E)->loc;
	}
#line 3354 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1045 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3361 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1047 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3368 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1053 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3375 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1055 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3382 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1057 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1059 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3396 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1064 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3403 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1069 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3410 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1071 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1076 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3424 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1078 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1083 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3438 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1085 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {(yyval.S)=(yyvsp[0].S);}
#line 3444 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1086 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		(yyval.S) = new statement();
		(yyval.S)->nextlist = (yyvsp[0].E)->nextlist;
	}
#line 3453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1090 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {(yyval.S)=(yyvsp[0].S);}
#line 3459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1091 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {(yyval.S)=(yyvsp[0].S);}
#line 3465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1092 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {(yyval.S)=(yyvsp[0].S);}
#line 3471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1096 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {(yyval.S) = new statement();}
#line 3477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1097 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {(yyval.S) = new statement();}
#line 3483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1098 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {(yyval.S) = new statement();}
#line 3489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1102 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {(yyval.S)=(yyvsp[-1].S);}
#line 3495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1103 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {(yyval.S) = new statement();}
#line 3501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1107 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {(yyval.S)=(yyvsp[0].S);}
#line 3507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1108 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		(yyval.S)=(yyvsp[0].S);
		backpatch ((yyvsp[-2].S)->nextlist, (yyvsp[-1].instr));
	}
#line 3516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1115 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		(yyval.S) = new statement();
	}
#line 3524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1118 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {(yyval.S) = (yyvsp[0].S);}
#line 3530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1122 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {(yyval.E)=(yyvsp[-1].E);}
#line 3536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1123 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {(yyval.E) = new expr();}
#line 3542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1127 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		backpatch ((yyvsp[-4].S)->nextlist, nextinstr());
		int2bool((yyvsp[-5].E));
		(yyval.S) = new statement();
		backpatch ((yyvsp[-5].E)->truelist, (yyvsp[-2].instr));
		list<int> temp = merge ((yyvsp[-5].E)->falselist, (yyvsp[-1].S)->nextlist);
		(yyval.S)->nextlist = merge ((yyvsp[0].S)->nextlist, temp);
	}
#line 3555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1135 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		backpatch ((yyvsp[-7].S)->nextlist, nextinstr());
		int2bool((yyvsp[-8].E));
		(yyval.S) = new statement();
		backpatch ((yyvsp[-8].E)->truelist, (yyvsp[-5].instr));
		backpatch ((yyvsp[-8].E)->falselist, (yyvsp[-1].instr));
		list<int> temp = merge ((yyvsp[-4].S)->nextlist, (yyvsp[-3].S)->nextlist);
		(yyval.S)->nextlist = merge ((yyvsp[0].S)->nextlist,temp);
	}
#line 3569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1144 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1149 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		(yyval.S) = new statement();
		int2bool((yyvsp[-3].E));
		// M1 to go back to boolean again
		// M2 to go to statement if the boolean is true
		backpatch((yyvsp[0].S)->nextlist, (yyvsp[-5].instr));
		backpatch((yyvsp[-3].E)->truelist, (yyvsp[-1].instr));
		(yyval.S)->nextlist = (yyvsp[-3].E)->falselist;
		// Emit to prevent fallthrough
		stringstream strs;
	    strs << (yyvsp[-5].instr);
	    string temp_str = strs.str();
	    char* intStr = (char*) temp_str.c_str();
		string str = string(intStr);

		emit ("GOTOOP", str);
	}
#line 3598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1166 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		(yyval.S) = new statement();
		int2bool((yyvsp[-2].E));
		// M1 to go back to statement if expression is true
		// M2 to go to check expression if statement is complete
		backpatch ((yyvsp[-2].E)->truelist, (yyvsp[-7].instr));
		backpatch ((yyvsp[-6].S)->nextlist, (yyvsp[-5].instr));

		// Some bug in the next statement
		(yyval.S)->nextlist = (yyvsp[-2].E)->falselist;
	}
#line 3614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1177 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		(yyval.S) = new statement();
		int2bool((yyvsp[-3].E));
		backpatch ((yyvsp[-3].E)->truelist, (yyvsp[-1].instr));
		backpatch ((yyvsp[0].S)->nextlist, (yyvsp[-4].instr));
		stringstream strs;
	    strs << (yyvsp[-4].instr);
	    string temp_str = strs.str();
	    char* intStr = (char*) temp_str.c_str();
		string str = string(intStr);

		emit ("GOTOOP", str);
		(yyval.S)->nextlist = (yyvsp[-3].E)->falselist;
	}
#line 3633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1191 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		(yyval.S) = new statement();
		int2bool((yyvsp[-6].E));
		backpatch ((yyvsp[-6].E)->truelist, (yyvsp[-1].instr));
		backpatch ((yyvsp[-3].S)->nextlist, (yyvsp[-7].instr));
		backpatch ((yyvsp[0].S)->nextlist, (yyvsp[-5].instr));
		stringstream strs;
	    strs << (yyvsp[-5].instr);
	    string temp_str = strs.str();
	    char* intStr = (char*) temp_str.c_str();
		string str = string(intStr);
		emit ("GOTOOP", str);
		(yyval.S)->nextlist = (yyvsp[-6].E)->falselist;
	}
#line 3652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1208 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {(yyval.S) = new statement();}
#line 3658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1209 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {(yyval.S) = new statement();}
#line 3664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1210 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {(yyval.S) = new statement();}
#line 3670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1211 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		(yyval.S) = new statement();
		emit("RETURN",(yyvsp[-1].E)->loc->name);
	}
#line 3679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1215 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		(yyval.S) = new statement();
		emit("RETURN","");
	}
#line 3688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1222 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {}
#line 3694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1223 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {}
#line 3700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1227 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {}
#line 3706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1228 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {}
#line 3712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1232 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {}
#line 3718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1233 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {
		emit ("FUNCEND", table->name);
		table->parent = globalsymbolTable;
		changeTable (globalsymbolTable);
	}
#line 3728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1241 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1243 "ass6_17CS10030_17CS30007.y" /* yacc.c:1646  */
    {//later
	}
#line 3742 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3746 "y.tab.c" /* yacc.c:1646  */
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
#line 1249 "ass6_17CS10030_17CS30007.y" /* yacc.c:1906  */


void yyerror(string s) {
    cout<<s<<endl;
}
