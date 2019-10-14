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
#line 10 "parser.y" /* yacc.c:339  */

#include <cstdlib>
#include <stdio.h>
#include <string>
#include <iostream>
#include <sstream>
#include "translator.h"
extern int yylex();
void yyerror(string s);
extern string Type;

using namespace std;

int htop = 1;
int debug_flag = 0;

#line 83 "parser.tab.c" /* yacc.c:339  */

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
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    CHARACTER_CONSTANT = 258,
    ENUMERATION_CONSTANT = 259,
    FLOATING_CONSTANT = 260,
    INTEGER_CONSTANT = 261,
    IDENTIFIER = 262,
    STRING_LITERAL = 263,
    SHREQ = 264,
    ENUM = 265,
    SQBRAOPEN = 266,
    DEC = 267,
    CONST = 268,
    SHORT = 269,
    ROBRACLOSE = 270,
    AUTO = 271,
    CONTINUE = 272,
    IF = 273,
    BINOREQ = 274,
    COMMA = 275,
    MINUSEQ = 276,
    SHLEQ = 277,
    BREAK = 278,
    EXTERN = 279,
    RETURN = 280,
    GOTO = 281,
    DOUBLE = 282,
    LONG = 283,
    TYPEDEF = 284,
    ELSE = 285,
    CURBRACLOSE = 286,
    DOT = 287,
    ACC = 288,
    INC = 289,
    AMP = 290,
    MUL = 291,
    ADD = 292,
    SUB = 293,
    NEG = 294,
    EXCLAIM = 295,
    BINANDEQ = 296,
    BINXOREQ = 297,
    CURBRAOPEN = 298,
    SHL = 299,
    SHR = 300,
    DOTS = 301,
    STAREQ = 302,
    DIVEQ = 303,
    DEFAULT = 304,
    INLINE = 305,
    REGISTER = 306,
    WHILE = 307,
    SQBRACLOSE = 308,
    ROBRAOPEN = 309,
    DIV = 310,
    MODULO = 311,
    STRUCT = 312,
    VOLATILE = 313,
    MODEQ = 314,
    PLUSEQ = 315,
    ASSIGN = 316,
    CHAR = 317,
    FOR = 318,
    SIGNED = 319,
    RESTRICT = 320,
    UNSIGNED = 321,
    EQ = 322,
    UNION = 323,
    COMPLEX = 324,
    GTE = 325,
    NEQ = 326,
    HASH = 327,
    BITSHL = 328,
    BITSHR = 329,
    LTE = 330,
    BITXOR = 331,
    BITOR = 332,
    AND = 333,
    VOID = 334,
    OR = 335,
    QUESTION = 336,
    COLON = 337,
    SEMICOLON = 338,
    CASE = 339,
    FLOAT = 340,
    STATIC = 341,
    SIZEOF = 342,
    BOOL = 343,
    IMAGINARY = 344,
    DO = 345,
    INT = 346,
    SWITCH = 347,
    THEN = 348
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 30 "parser.y" /* yacc.c:355  */

  symtype* symtp;
  expr* E;
  int integer_val;
  char* character_val;
  char unOp;
  int instr;
  sym* symp;
  statement* S;
  array* A;

#line 229 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 246 "parser.tab.c" /* yacc.c:358  */

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
#define YYLAST   1321

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
       0,   201,   201,   208,   216,   222,   234,   240,   245,   253,
     305,   310,   317,   356,   367,   377,   380,   385,   387,   395,
     405,   407,   418,   422,   424,   433,   441,   445,   451,   455,
     461,   477,   499,   515,   534,   543,   551,   556,   563,   570,
     578,   585,   592,   603,   618,   619,   634,   650,   674,   696,
     700,   725,   744,   748,   760,   763,   779,   793,   797,   816,
     820,   838,   841,   845,   859,   864,   878,   882,   885,   888,
     900,   906,   908,   914,   916,   918,   920,   922,   924,   926,
     928,   932,   951,   956,   963,   967,   969,   971,   973,   977,
     979,   984,   989,   994,   999,  1004,  1009,  1014,  1019,  1024,
    1029,  1034,  1044,  1046,  1048,  1050,  1055,  1057,  1061,  1063,
    1067,  1073,  1075,  1077,  1082,  1085,  1087,  1089,  1094,  1096,
    1103,  1105,  1107,  1109,  1111,  1117,  1127,  1134,  1136,  1138,
    1140,  1146,  1169,  1171,  1184,  1186,  1187,  1191,  1193,  1195,
    1211,  1213,  1215,  1217,  1232,  1233,  1234,  1235,  1236,  1237,
    1238,  1239,  1240,  1241,  1242,  1243,  1244,  1250,  1260,  1262,
    1266,  1268,  1273,  1278,  1280,  1282,  1287,  1292,  1294,  1300,
    1302,  1306,  1307,  1308,  1312,  1313,  1318,  1320,  1326,  1330,
    1334,  1338,  1341,  1342,  1346,  1348,  1353,  1355,  1361,  1370,
    1372,  1383,  1384,  1385,  1386,  1390,  1391,  1395,  1401,  1409,
    1410,  1417,  1426,  1427,  1431,  1432,  1436,  1446,  1463,  1477,
    1496,  1497
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CHARACTER_CONSTANT",
  "ENUMERATION_CONSTANT", "FLOATING_CONSTANT", "INTEGER_CONSTANT",
  "IDENTIFIER", "STRING_LITERAL", "SHREQ", "ENUM", "SQBRAOPEN", "DEC",
  "CONST", "SHORT", "ROBRACLOSE", "AUTO", "CONTINUE", "IF", "BINOREQ",
  "COMMA", "MINUSEQ", "SHLEQ", "BREAK", "EXTERN", "RETURN", "GOTO",
  "DOUBLE", "LONG", "TYPEDEF", "ELSE", "CURBRACLOSE", "DOT", "ACC", "INC",
  "AMP", "MUL", "ADD", "SUB", "NEG", "EXCLAIM", "BINANDEQ", "BINXOREQ",
  "CURBRAOPEN", "SHL", "SHR", "DOTS", "STAREQ", "DIVEQ", "DEFAULT",
  "INLINE", "REGISTER", "WHILE", "SQBRACLOSE", "ROBRAOPEN", "DIV",
  "MODULO", "STRUCT", "VOLATILE", "MODEQ", "PLUSEQ", "ASSIGN", "CHAR",
  "FOR", "SIGNED", "RESTRICT", "UNSIGNED", "EQ", "UNION", "COMPLEX", "GTE",
  "NEQ", "HASH", "BITSHL", "BITSHR", "LTE", "BITXOR", "BITOR", "AND",
  "VOID", "OR", "QUESTION", "COLON", "SEMICOLON", "CASE", "FLOAT",
  "STATIC", "SIZEOF", "BOOL", "IMAGINARY", "DO", "INT", "SWITCH", "THEN",
  "$accept", "primary_expression", "unary_expression",
  "postfix_expression", "constant", "argument_expression_list",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "unary_operator", "relational_expression", "exclusive_OR_expression",
  "equality_expression", "shift_expression", "inclusive_OR_expression",
  "logical_AND_expression", "logical_OR_expression", "M", "AND_expression",
  "assignment_expression", "expression", "N", "constant_expression",
  "declaration", "declaration_specifiers", "conditional_expression",
  "init_declarator", "storage_class_specifier", "init_declarator_list",
  "assignment_operator", "specifier_qualifier_list", "enumerator",
  "enumerator_list", "function_specifier", "type_qualifier", "pointer",
  "parameter_list", "enum_specifier", "declarator", "initializer_list",
  "direct_declarator", "type_specifier", "CT", "type_qualifier_list",
  "identifier_list", "type_name", "initializer", "designation",
  "designator_list", "designator", "labeled_statement",
  "compound_statement", "declaration_list", "block_item_list",
  "function_definition", "expression_statement", "parameter_type_list",
  "parameter_declaration", "selection_statement", "statement",
  "jump_statement", "translation_unit", "external_declaration",
  "iteration_statement", "block_item", YY_NULLPTR
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

#define YYPACT_NINF -244

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-244)))

#define YYTABLE_NINF -158

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1198,    38,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,
    -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,
    -244,  -244,  -244,     3,  1198,  1198,  1198,  -244,  1198,  -244,
     241,  -244,    15,    54,  -244,    30,    83,  -244,  -244,    -8,
      37,  1030,    -4,  -244,  -244,  -244,  -244,  -244,  -244,    54,
      23,  -244,   108,  -244,  -244,    30,   118,    83,  -244,    -4,
     825,  -244,     3,    58,  1198,   639,   120,   114,   945,    16,
    -244,  -244,  -244,  -244,  -244,    82,  -244,  -244,  -244,  -244,
    -244,  -244,   988,   988,  -244,  -244,  -244,  -244,  -244,  -244,
     770,   571,   999,  -244,   237,   147,  -244,  -244,   105,    17,
     945,   112,    71,   -19,    49,    80,    89,    84,   138,  -244,
    -244,  -244,   330,  -244,  -244,    58,   123,  -244,   780,   137,
     677,  -244,  1098,    31,    34,  -244,  -244,  -244,  -244,  -244,
    -244,   571,  -244,  -244,   945,   181,   131,  -244,   825,    10,
    -244,  -244,   148,  -244,  1230,  1230,   179,   571,  -244,  -244,
    -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,
     945,   945,  -244,   191,   202,  -244,   836,   945,   945,   945,
     945,   945,  -244,   945,   945,   945,   945,   945,   945,   945,
     945,   945,   945,   149,   140,   945,   150,   151,   186,   152,
     879,   226,  -244,   161,  -244,   190,  -244,   945,  -244,   196,
      -7,  -244,  -244,  -244,   216,  -244,  -244,  -244,  -244,  -244,
    -244,  -244,  -244,   199,   780,  -244,   200,  -244,   207,  -244,
      83,   242,   246,  -244,  -244,   256,  -244,   252,   217,  -244,
     584,  -244,  -244,  -244,  -244,  -244,   945,  -244,  -244,   891,
     257,  -244,    29,  -244,  -244,  -244,   169,  -244,  -244,  -244,
    -244,   105,   105,    49,    49,    49,    49,   138,   112,   112,
      17,    17,    71,  -244,  -244,  -244,   -19,   510,  -244,   945,
    -244,  -244,    -6,   192,   510,   219,   934,   201,   510,   945,
    -244,  -244,   420,  -244,   228,  -244,  -244,  -244,  1130,  -244,
    -244,   243,  -244,  -244,  -244,   825,  -244,   770,  -244,   243,
    -244,  -244,   945,   945,   945,   945,  -244,   267,  -244,  -244,
    -244,   945,  -244,   510,  -244,   176,  -244,  -244,  -244,  -244,
    -244,   135,  -244,    80,    89,   267,   274,   182,   934,  -244,
     238,   510,   716,  -244,   211,  -244,  -244,   279,   248,  -244,
    -244,  -244,   510,   510,  -244,   945,   945,   945,  -244,  -244,
     510,   267,   193,  -244,   265,  -244,   285,   221,  -244,  -244,
    -244,   510,   510,  -244,  -244
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,   113,   155,    85,    88,   154,   152,   110,    86,
     112,   150,   148,   111,   149,   144,   146,   147,    87,   153,
     145,   151,   204,     0,    78,    79,    77,   156,    73,   205,
       0,   203,   120,     0,   136,   117,     0,    71,    90,     0,
       0,    84,   126,    76,    80,    74,    75,     1,   202,     0,
     107,   109,     0,   159,   114,   116,     0,     0,    72,   125,
       0,   177,     0,     0,   157,     0,   157,     0,     0,     0,
     122,   158,   115,   135,    89,    84,    22,    23,    25,    24,
       3,     5,     0,     0,    38,    42,    40,    39,    41,    37,
       0,     0,     0,    13,    29,     6,     2,    31,    36,    54,
       0,    52,    57,    64,    44,    59,    61,    82,    49,   165,
      66,    83,     0,   180,   176,     0,    42,   139,     0,     0,
       0,   161,     0,     0,     0,   123,    29,   106,    70,   124,
     108,     0,     8,    10,     0,     0,     0,   130,     0,     0,
     168,    68,     0,   162,   103,   105,     0,     0,    11,    95,
      96,    99,    94,    92,    93,   101,    97,   100,    98,    91,
       0,     0,    21,     0,     0,    18,     0,     0,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     3,     0,     0,     0,
       0,     0,   175,     0,    62,     0,   182,     0,    62,     0,
       0,   211,   196,   193,    62,   194,   195,   210,   192,   191,
     179,   181,   138,     0,     0,   131,    42,   132,     0,   143,
     186,   185,     0,   119,   142,     0,   121,     0,     0,   169,
       0,   164,   128,   166,   167,     4,     0,   102,   104,     0,
       0,    65,     0,    17,    20,    15,     0,    27,    30,    33,
      32,    35,    34,    46,    43,    47,    45,    48,    50,    51,
      55,    53,    56,    62,    62,    62,    63,     0,   197,     0,
     201,   198,     0,     0,     0,     0,     0,     0,     0,     0,
     183,   174,     0,   141,     0,   137,   134,   187,     0,   133,
     160,     0,   170,   163,   129,     0,    67,     0,    28,     7,
      12,    14,     0,     0,     0,     0,   173,    69,   200,   199,
     171,     0,    62,     0,    62,     0,   178,   140,   184,   118,
     127,     0,    26,    58,    60,    69,     0,     0,     0,   172,
       0,     0,     0,    19,     0,    62,    62,    62,     0,   189,
      16,    62,     0,     0,    62,     0,     0,     0,    69,   207,
       0,    69,     0,    81,   190,   209,     0,     0,    62,    62,
     206,     0,     0,   188,   208
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -244,  -244,   -65,  -244,  -244,  -244,   -95,    41,    43,  -244,
      50,   126,   124,    42,     8,    11,  -244,  -166,   136,   -31,
     -69,  -103,  -114,   -33,     0,   -67,   255,  -244,  -244,  -244,
      86,   -60,   268,  -244,     5,     1,  -244,  -244,   -17,    19,
     278,     9,    60,   -50,  -244,   -94,   -58,  -214,  -244,   175,
    -244,   -52,  -244,  -244,  -244,  -243,  -244,    33,  -244,  -136,
    -244,  -244,   289,  -244,    40
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    93,    94,    95,    96,   246,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   275,   108,   141,
     200,   183,   127,    22,    62,   110,    38,    24,    39,   160,
     143,    51,    52,    25,    26,    40,   221,    27,    75,   136,
      42,    28,    63,    55,   123,   146,   137,   138,   139,   140,
     202,   203,    64,   204,    29,   205,   222,   223,   206,   207,
     208,    30,    31,   209,   210
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,   128,   111,   126,   184,   172,    41,    65,    61,   130,
      34,   113,    57,   236,   236,   120,   295,   132,   133,    56,
     228,   134,   142,    50,    43,    44,    45,   148,    46,   109,
      23,   114,   278,   312,   119,   126,    54,   227,   282,    35,
      53,    50,   135,     2,    34,    32,   224,   129,   178,   236,
      66,   225,   179,   240,   170,   171,    72,    36,    49,   109,
      71,    50,   142,   211,   130,   226,    35,   128,   214,   126,
      53,   233,   248,   249,   250,    58,   280,   308,   142,   201,
     232,    33,   300,   277,    68,   337,    37,   213,    10,   218,
      34,    36,   242,   180,   181,    13,   144,   303,   304,   305,
     145,   112,   126,   126,   126,   126,   126,   109,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   295,    35,
     126,   272,   220,    53,   115,    71,   122,   121,    69,   241,
     128,   306,   126,    73,   124,   247,   144,    36,   310,    70,
     145,   167,   314,    60,   298,   125,   328,   177,   330,   144,
     144,   230,   144,   145,   145,   332,   145,   182,   161,   162,
     168,   169,   231,   235,   -69,   -69,   333,   -69,   236,   342,
     343,   345,   294,   185,   126,   347,   212,   329,   350,   163,
     164,   165,   173,   284,   301,   174,   175,   176,   229,   302,
     215,   331,   361,   362,   239,   339,   236,   336,   243,   109,
     307,   166,   236,   287,   326,   296,   348,   349,   357,   244,
     315,   251,   252,   236,   355,   253,   254,   255,   256,    71,
     264,   265,   334,   260,   261,   363,   364,   263,   258,   259,
     237,   238,   267,   273,   268,   270,   325,   320,   126,   126,
     269,    47,   327,   274,   276,   354,   149,   281,   356,   201,
     279,     1,   283,   285,     2,     3,   150,     4,   151,   152,
     286,   289,   288,   290,   109,     5,   109,   291,     6,     7,
     292,   322,   299,   311,   294,   309,   351,   352,   153,   154,
     353,   317,   126,   313,   155,   156,   297,   236,   220,   335,
     338,     8,     9,   341,   344,   358,   157,   158,   159,    10,
     359,   109,   346,    11,   360,    12,    13,    14,   262,   266,
      15,   323,    74,   257,   234,   324,   321,    67,    59,    48,
      16,   319,   316,     0,     0,     0,    17,    18,     0,    19,
      20,     0,    21,    76,    77,    78,    79,   186,    81,     0,
       1,     0,    82,     2,     3,     0,     4,   187,   188,     0,
       0,     0,     0,   189,     5,   190,   191,     6,     7,     0,
       0,   192,     0,     0,    83,    84,    85,    86,    87,    88,
      89,     0,     0,   112,     0,     0,     0,     0,     0,   193,
       8,     9,   194,     0,    91,     0,     0,     0,    10,     0,
       0,     0,    11,   195,    12,    13,    14,     0,     0,    15,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    16,
       0,     0,     0,   196,   197,    17,    18,    92,    19,    20,
     198,    21,   199,    76,    77,    78,    79,   186,    81,     0,
       1,     0,    82,     2,     3,     0,     4,   187,   188,     0,
       0,     0,     0,   189,     5,   190,   191,     6,     7,     0,
       0,     0,     0,     0,    83,    84,    85,    86,    87,    88,
      89,     0,     0,   112,     0,     0,     0,     0,     0,   193,
       8,     9,   194,     0,    91,     0,     0,     0,    10,     0,
       0,     0,    11,   195,    12,    13,    14,     0,     0,    15,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    16,
       0,     0,     0,   196,   197,    17,    18,    92,    19,    20,
     198,    21,   199,    76,    77,    78,    79,   186,    81,     0,
       0,     0,    82,     0,     0,     0,     0,   187,   188,     0,
       0,     0,     0,   189,     0,   190,   191,     0,     0,     0,
       0,     0,     0,     0,    83,    84,    85,    86,    87,    88,
      89,     0,     0,   112,     0,     0,     0,     0,     0,   193,
       0,     0,   194,     0,    91,     0,     0,     0,     0,     0,
       0,     0,     0,   195,    76,    77,    78,    79,    80,    81,
       0,     1,     0,    82,     2,     3,     0,    76,    77,    78,
      79,    80,    81,   196,   197,   134,    82,    92,     6,     7,
     198,     0,   199,     0,     0,    83,    84,    85,    86,    87,
      88,    89,     0,     0,     0,   293,   135,     0,    83,    84,
      85,    86,    87,    88,    89,    91,     0,    90,     0,    10,
       0,     0,     0,    11,     0,    12,    13,    14,    91,     0,
      15,     0,    76,    77,    78,    79,    80,    81,     0,     0,
      16,    82,     2,     0,     0,     0,    17,     0,    92,    19,
      20,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,    92,     0,    83,    84,   116,    86,    87,    88,    89,
      76,    77,    78,    79,    80,    81,     0,     0,     0,    82,
       2,     0,   117,    91,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,    13,     0,     0,     0,     0,     0,
       0,    83,    84,   216,    86,    87,    88,    89,     0,    76,
      77,    78,    79,    80,    81,   118,    92,   134,    82,     0,
     217,    91,     0,     0,     0,    10,     0,     0,     0,     0,
       0,     0,    13,     0,     0,     0,     0,   340,   135,     0,
      83,    84,    85,    86,    87,    88,    89,     0,     0,    90,
       0,     0,     0,     0,    92,     0,     0,     0,     0,     0,
      91,     0,     0,    76,    77,    78,    79,    80,    81,     0,
       0,   134,    82,    76,    77,    78,    79,    80,    81,     0,
       0,     0,    82,     2,     0,     0,     0,     0,     0,     0,
       0,     0,   135,    92,    83,    84,    85,    86,    87,    88,
      89,     0,     0,    90,    83,    84,    85,    86,    87,    88,
      89,     0,     0,     0,    91,     0,     0,     0,    76,    77,
      78,    79,    80,    81,    91,     0,     0,    82,    10,    76,
      77,    78,    79,    80,    81,    13,     0,     0,    82,     0,
       0,   245,     0,     0,     0,     0,     0,    92,     0,    83,
      84,    85,    86,    87,    88,    89,     0,    92,    90,     0,
      83,    84,    85,    86,    87,    88,    89,     0,     0,    91,
       0,     0,    76,    77,    78,    79,    80,    81,     0,     0,
      91,    82,     0,     0,    76,    77,    78,    79,    80,    81,
       0,     0,     0,    82,     0,     0,     0,     0,     0,     0,
       0,     0,    92,    83,    84,    85,    86,    87,    88,    89,
       0,     0,     0,    92,     0,    83,    84,    85,    86,    87,
      88,    89,     0,    91,   297,     0,     0,    76,    77,    78,
      79,    80,    81,     0,     0,    91,    82,     0,    76,    77,
      78,    79,    80,    81,     0,     0,     0,    82,     0,     0,
       0,     0,   271,     0,     0,     0,    92,     0,    83,    84,
      85,    86,    87,    88,    89,     0,     0,     0,    92,    83,
      84,    85,    86,    87,    88,    89,     0,     0,    91,     0,
       0,    76,    77,    78,    79,    80,    81,     0,     0,    91,
      82,     0,    76,    77,    78,    79,    80,    81,     0,     0,
       0,    82,     0,     0,     0,     0,     0,   196,     0,     0,
       0,    92,    83,    84,    85,    86,    87,    88,    89,     0,
       0,     0,    92,    83,    84,    85,    86,    87,    88,    89,
       1,     0,   131,     2,     3,     0,     4,     0,     0,     0,
       0,     0,     0,   147,     5,     0,     0,     6,     7,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -157,     0,    92,     0,     0,     0,     0,
       8,     9,     0,     0,     0,     0,    92,     0,    10,     0,
       0,    60,    11,     0,    12,    13,    14,     0,     0,    15,
       0,     0,     0,     0,     0,     0,     0,     0,     1,    16,
       0,     2,     3,   219,     4,    17,    18,     0,    19,    20,
       0,    21,     5,     0,     0,     6,     7,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     2,     3,     0,     4,     0,     8,     9,
       0,     0,     0,     0,     5,     0,    10,     6,     7,     0,
      11,     0,    12,    13,    14,     0,     0,    15,     0,     0,
       0,     0,     0,     0,     0,     0,   318,    16,     0,     0,
       8,     9,     0,    17,    18,     0,    19,    20,    10,    21,
       0,     0,    11,     0,    12,    13,    14,     0,     0,    15,
       0,     0,     0,     0,     0,     0,     0,     0,     1,    16,
       0,     2,     3,     0,     4,    17,    18,     0,    19,    20,
       0,    21,     5,     0,     0,     6,     7,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     2,     3,     0,     0,     0,     8,     9,
       0,     0,     0,     0,     0,     0,    10,     6,     7,     0,
      11,     0,    12,    13,    14,     0,     0,    15,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    16,     0,     0,
       0,     0,     0,    17,    18,     0,    19,    20,    10,    21,
       0,     0,    11,     0,    12,    13,    14,     0,     0,    15,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    16,
       0,     0,     0,     0,     0,    17,     0,     0,    19,    20,
       0,    21
};

static const yytype_int16 yycheck[] =
{
       0,    68,    60,    68,   107,   100,    23,    11,    41,    69,
       7,    63,    20,    20,    20,    65,   230,    82,    83,    36,
     134,    11,    91,     7,    24,    25,    26,    92,    28,    60,
      30,    64,   198,   276,    65,   100,    35,   131,   204,    36,
      35,     7,    32,    13,     7,     7,    15,    31,    67,    20,
      54,    20,    71,   147,    37,    38,    55,    54,    43,    90,
      55,     7,   131,   115,   124,    31,    36,   134,   118,   134,
      65,    61,   167,   168,   169,    83,    83,    83,   147,   112,
     138,    43,    53,   197,    61,   328,    83,   118,    58,   120,
       7,    54,   161,    44,    45,    65,    91,   263,   264,   265,
      91,    43,   167,   168,   169,   170,   171,   138,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   332,    36,
     185,   190,   122,   118,    64,   120,    66,     7,    20,   160,
     197,   267,   197,    15,    20,   166,   131,    54,   274,    31,
     131,    36,   278,    61,   239,    31,   312,    76,   314,   144,
     145,    20,   147,   144,   145,    20,   147,    77,    11,    12,
      55,    56,    31,    15,    80,    81,    31,    78,    20,   335,
     336,   337,   230,    35,   239,   341,    53,   313,   344,    32,
      33,    34,    70,   214,    15,    73,    74,    75,     7,    20,
      53,    15,   358,   359,    15,   331,    20,    15,     7,   230,
     269,    54,    20,   220,   307,   236,   342,   343,    15,     7,
     279,   170,   171,    20,   350,   173,   174,   175,   176,   214,
      80,    81,   325,   180,   181,   361,   362,    78,   178,   179,
     144,   145,    82,     7,    83,    83,   305,   295,   303,   304,
      54,     0,   311,    82,    54,   348,     9,    31,   351,   282,
      54,    10,    53,    53,    13,    14,    19,    16,    21,    22,
      53,    15,    20,     7,   295,    24,   297,    15,    27,    28,
      53,   302,    15,    54,   332,    83,   345,   346,    41,    42,
     347,    53,   347,    82,    47,    48,    43,    20,   288,    15,
      52,    50,    51,    82,    15,    30,    59,    60,    61,    58,
      15,   332,    54,    62,    83,    64,    65,    66,   182,   185,
      69,   303,    57,   177,   139,   304,   297,    49,    40,    30,
      79,   288,   282,    -1,    -1,    -1,    85,    86,    -1,    88,
      89,    -1,    91,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    12,    13,    14,    -1,    16,    17,    18,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    -1,
      -1,    31,    -1,    -1,    34,    35,    36,    37,    38,    39,
      40,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    49,
      50,    51,    52,    -1,    54,    -1,    -1,    -1,    58,    -1,
      -1,    -1,    62,    63,    64,    65,    66,    -1,    -1,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    -1,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    12,    13,    14,    -1,    16,    17,    18,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      40,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    49,
      50,    51,    52,    -1,    54,    -1,    -1,    -1,    58,    -1,
      -1,    -1,    62,    63,    64,    65,    66,    -1,    -1,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    -1,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    17,    18,    -1,
      -1,    -1,    -1,    23,    -1,    25,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      40,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,     3,     4,     5,     6,     7,     8,
      -1,    10,    -1,    12,    13,    14,    -1,     3,     4,     5,
       6,     7,     8,    83,    84,    11,    12,    87,    27,    28,
      90,    -1,    92,    -1,    -1,    34,    35,    36,    37,    38,
      39,    40,    -1,    -1,    -1,    31,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    54,    -1,    43,    -1,    58,
      -1,    -1,    -1,    62,    -1,    64,    65,    66,    54,    -1,
      69,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      79,    12,    13,    -1,    -1,    -1,    85,    -1,    87,    88,
      89,    -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    34,    35,    36,    37,    38,    39,    40,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    12,
      13,    -1,    53,    54,    -1,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    40,    -1,     3,
       4,     5,     6,     7,     8,    86,    87,    11,    12,    -1,
      53,    54,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    -1,    -1,    -1,    -1,    31,    32,    -1,
      34,    35,    36,    37,    38,    39,    40,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,
      54,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    11,    12,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    87,    34,    35,    36,    37,    38,    39,
      40,    -1,    -1,    43,    34,    35,    36,    37,    38,    39,
      40,    -1,    -1,    -1,    54,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    54,    -1,    -1,    12,    58,     3,
       4,     5,     6,     7,     8,    65,    -1,    -1,    12,    -1,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    87,    -1,    34,
      35,    36,    37,    38,    39,    40,    -1,    87,    43,    -1,
      34,    35,    36,    37,    38,    39,    40,    -1,    -1,    54,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      54,    12,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    34,    35,    36,    37,    38,    39,    40,
      -1,    -1,    -1,    87,    -1,    34,    35,    36,    37,    38,
      39,    40,    -1,    54,    43,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    54,    12,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    83,    -1,    -1,    -1,    87,    -1,    34,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    87,    34,
      35,    36,    37,    38,    39,    40,    -1,    -1,    54,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    -1,    54,
      12,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    87,    34,    35,    36,    37,    38,    39,    40,    -1,
      -1,    -1,    87,    34,    35,    36,    37,    38,    39,    40,
      10,    -1,    54,    13,    14,    -1,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    24,    -1,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    87,    -1,    -1,    -1,    -1,
      50,    51,    -1,    -1,    -1,    -1,    87,    -1,    58,    -1,
      -1,    61,    62,    -1,    64,    65,    66,    -1,    -1,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    79,
      -1,    13,    14,    15,    16,    85,    86,    -1,    88,    89,
      -1,    91,    24,    -1,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    -1,    -1,    13,    14,    -1,    16,    -1,    50,    51,
      -1,    -1,    -1,    -1,    24,    -1,    58,    27,    28,    -1,
      62,    -1,    64,    65,    66,    -1,    -1,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    79,    -1,    -1,
      50,    51,    -1,    85,    86,    -1,    88,    89,    58,    91,
      -1,    -1,    62,    -1,    64,    65,    66,    -1,    -1,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    79,
      -1,    13,    14,    -1,    16,    85,    86,    -1,    88,    89,
      -1,    91,    24,    -1,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    -1,    -1,    13,    14,    -1,    -1,    -1,    50,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    27,    28,    -1,
      62,    -1,    64,    65,    66,    -1,    -1,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    85,    86,    -1,    88,    89,    58,    91,
      -1,    -1,    62,    -1,    64,    65,    66,    -1,    -1,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    88,    89,
      -1,    91
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    13,    14,    16,    24,    27,    28,    50,    51,
      58,    62,    64,    65,    66,    69,    79,    85,    86,    88,
      89,    91,   117,   118,   121,   127,   128,   131,   135,   148,
     155,   156,     7,    43,     7,    36,    54,    83,   120,   122,
     129,   132,   134,   118,   118,   118,   118,     0,   156,    43,
       7,   125,   126,   128,   129,   137,   132,    20,    83,   134,
      61,   117,   118,   136,   146,    11,    54,   126,    61,    20,
      31,   128,   129,    15,   120,   132,     3,     4,     5,     6,
       7,     8,    12,    34,    35,    36,    37,    38,    39,    40,
      43,    54,    87,    95,    96,    97,    98,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   112,   113,
     119,   140,    43,   145,   117,   136,    36,    53,    86,   113,
     137,     7,   136,   138,    20,    31,    96,   116,   119,    31,
     125,    54,    96,    96,    11,    32,   133,   140,   141,   142,
     143,   113,   114,   124,   128,   135,   139,    54,    96,     9,
      19,    21,    22,    41,    42,    47,    48,    59,    60,    61,
     123,    11,    12,    32,    33,    34,    54,    36,    55,    56,
      37,    38,   100,    70,    73,    74,    75,    76,    67,    71,
      44,    45,    77,   115,   115,    35,     7,    17,    18,    23,
      25,    26,    31,    49,    52,    63,    83,    84,    90,    92,
     114,   117,   144,   145,   147,   149,   152,   153,   154,   157,
     158,   145,    53,   113,   137,    53,    36,    53,   113,    15,
     118,   130,   150,   151,    15,    20,    31,   139,   116,     7,
      20,    31,   140,    61,   143,    15,    20,   124,   124,    15,
     139,   113,   114,     7,     7,    15,    99,   113,   100,   100,
     100,   101,   101,   107,   107,   107,   107,   112,   104,   104,
     102,   102,   105,    78,    80,    81,   106,    82,    83,    54,
      83,    83,   114,     7,    82,   111,    54,   116,   111,    54,
      83,    31,   111,    53,   113,    53,    53,   132,    20,    15,
       7,    15,    53,    31,   140,   141,   113,    43,   100,    15,
      53,    15,    20,   111,   111,   111,   153,   114,    83,    83,
     153,    54,   149,    82,   153,   114,   158,    53,    46,   151,
     140,   133,   113,   108,   109,   114,   115,   114,   111,   153,
     111,    15,    20,    31,   115,    15,    15,   149,    52,   153,
      31,    82,   111,   111,    15,   111,    54,   111,   153,   153,
     111,   114,   114,   119,   115,   153,   115,    15,    30,    15,
      83,   111,   111,   153,   153
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    94,    95,    95,    95,    95,    96,    96,    96,    96,
      96,    96,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    98,    98,    98,    98,    99,    99,   100,   100,
     101,   101,   101,   101,   102,   102,   102,   103,   103,   103,
     103,   103,   103,   104,   104,   104,   104,   104,   105,   105,
     106,   106,   106,   107,   107,   107,   108,   108,   109,   109,
     110,   110,   111,   112,   112,   113,   113,   114,   114,   115,
     116,   117,   117,   118,   118,   118,   118,   118,   118,   118,
     118,   119,   119,   120,   120,   121,   121,   121,   121,   122,
     122,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   124,   124,   124,   124,   125,   125,   126,   126,
     127,   128,   128,   128,   129,   129,   129,   129,   130,   130,
     131,   131,   131,   131,   131,   132,   132,   133,   133,   133,
     133,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   136,   137,   137,
     138,   138,   139,   140,   140,   140,   141,   142,   142,   143,
     143,   144,   144,   144,   145,   145,   146,   146,   147,   147,
     148,   148,   149,   149,   150,   150,   151,   151,   152,   152,
     152,   153,   153,   153,   153,   153,   153,   154,   154,   154,
     154,   154,   155,   155,   156,   156,   157,   157,   157,   157,
     158,   158
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     3,     1,     1,     4,     2,     2,
       2,     2,     4,     1,     4,     3,     7,     3,     2,     6,
       3,     2,     1,     1,     1,     1,     3,     1,     4,     1,
       3,     1,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     3,     1,     5,     1,
       5,     1,     0,     3,     1,     3,     1,     3,     1,     0,
       1,     2,     3,     1,     2,     2,     2,     1,     1,     1,
       2,     9,     1,     3,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     2,     3,     2,     1,     3,     1,
       2,     6,     4,     5,     5,     2,     1,     4,     2,     3,
       1,     4,     4,     5,     5,     3,     1,     5,     4,     3,
       6,     5,     4,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     2,     1,
       3,     1,     1,     4,     3,     1,     2,     2,     1,     2,
       3,     3,     4,     3,     3,     2,     2,     1,     3,     1,
       4,     5,     1,     2,     3,     1,     1,     2,    11,     5,
       8,     1,     1,     1,     1,     1,     1,     2,     2,     3,
       3,     2,     2,     1,     1,     1,     9,     7,    11,     8,
       1,     1
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
#line 201 "parser.y" /* yacc.c:1646  */
    {
	(yyval.E) = new expr();
  if (debug_flag == 1) {
    cout << "reached unary_operator" << endl;
  }
  (yyval.E)->loc = (yyvsp[0].symp);
	}
#line 1814 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 208 "parser.y" /* yacc.c:1646  */
    {
	(yyval.E) = new expr();
  if (debug_flag == 1) {
    cout << "reached unary_operator" << endl;
  }
	(yyval.E)->loc = (yyvsp[0].symp);
	(yyval.E)->type = "NONBOOL";
	}
#line 1827 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 216 "parser.y" /* yacc.c:1646  */
    {
	(yyval.E) = (yyvsp[-1].E);
  if (debug_flag == 1) {
    cout << "reached unary_operator" << endl;
  }
	}
#line 1838 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 222 "parser.y" /* yacc.c:1646  */
    {
	(yyval.E) = new expr();
  if (debug_flag == 1) {
    cout << "reached unary_operator" << endl;
  }
	symtype* tmp = new symtype("PTR");
	(yyval.E)->loc = gentemp(tmp, (yyvsp[0].character_val));
	(yyval.E)->loc->type->ptr = new symtype("CHAR");
	}
#line 1852 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 234 "parser.y" /* yacc.c:1646  */
    {
    (yyval.A) = (yyvsp[0].A);
    if (debug_flag == 1) {
      cout << "reached unary_operator" << endl;
    }
	}
#line 1863 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 240 "parser.y" /* yacc.c:1646  */
    {
    if (debug_flag == 1) {
      cout << "reached unary_operator" << endl;
    }
	}
#line 1873 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 245 "parser.y" /* yacc.c:1646  */
    {
		emit ("SUB", (yyvsp[0].A)->array->name, (yyvsp[0].A)->array->name, "1");

    if (debug_flag == 1) {
      cout << "reached unary_operator" << endl;
    }
		(yyval.A) = (yyvsp[0].A);
	}
#line 1886 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 253 "parser.y" /* yacc.c:1646  */
    {
		(yyval.A) = new array();
		switch ((yyvsp[-1].unOp)) {
			case '!':
				(yyval.A)->array = gentemp(new symtype((yyvsp[0].A)->array->type->type));
        if (debug_flag == 1) {
          cout << "reached unary_operator" << endl;
        }
        htop = 1;
				emit ("LNOT", (yyval.A)->array->name, (yyvsp[0].A)->array->name);
				break;
			case '+':
        if (debug_flag == 1) {
          cout << "reached unary_operator" << endl;
        }
				(yyval.A) = (yyvsp[0].A);
				break;
     case '*':
				(yyval.A)->loc = gentemp ((yyvsp[0].A)->array->type->ptr);
				(yyval.A)->cat = "PTR";
        if (debug_flag == 1) {
          cout << "reached unary_operator" << endl;
        }
				emit ("PTRR", (yyval.A)->loc->name, (yyvsp[0].A)->array->name);
				(yyval.A)->array = (yyvsp[0].A)->array;
				break;
			case '-':
				(yyval.A)->array = gentemp(new symtype((yyvsp[0].A)->array->type->type));
        if (debug_flag == 1) {
          cout << "reached unary_operator" << endl;
        }
				emit ("UMINUS", (yyval.A)->array->name, (yyvsp[0].A)->array->name);
				break;
			case '&':
				(yyval.A)->array = gentemp((new symtype("PTR")));
        if (debug_flag == 1) {
          cout << "reached unary_operator" << endl;
        }
				(yyval.A)->array->type->ptr = (yyvsp[0].A)->array->type; 
				emit ("ADDRESS", (yyval.A)->array->name, (yyvsp[0].A)->array->name);
				break;
			case '~':
				(yyval.A)->array = gentemp(new symtype((yyvsp[0].A)->array->type->type));
        if (debug_flag == 1) {
          cout << "reached unary_operator" << endl;
        }
				emit ("BNOT", (yyval.A)->array->name, (yyvsp[0].A)->array->name);
				break;	
 			default:
				break;
		}
	}
#line 1943 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 305 "parser.y" /* yacc.c:1646  */
    {
		emit ("ADD", (yyvsp[0].A)->array->name, (yyvsp[0].A)->array->name, "1");

		(yyval.A) = (yyvsp[0].A);
	}
#line 1953 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 310 "parser.y" /* yacc.c:1646  */
    {
	
	}
#line 1961 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 317 "parser.y" /* yacc.c:1646  */
    {
		(yyval.A) = new array();
		
		(yyval.A)->array = (yyvsp[-3].A)->loc;					
    if (debug_flag == 1) {
      cout << "reached postfix_expression" << endl;
    }
		(yyval.A)->type = (yyvsp[-3].A)->type->ptr;				
		(yyval.A)->loc = gentemp(new symtype("INTEGER"));		
		
		if ((yyvsp[-3].A)->cat=="ARR") {						
			sym* t = gentemp(new symtype("INTEGER"));
			stringstream strs;
        if (debug_flag == 1) {
          cout << "reached postfix_expression" << endl;
        }
		    strs <<size_type((yyval.A)->type);
		    string temp_str = strs.str();
        htop = 1;
		    char* intStr = (char*) temp_str.c_str();
			string str = string(intStr);				
 			emit ("MULT", t->name, (yyvsp[-1].E)->loc->name, str);
			emit ("ADD", (yyval.A)->loc->name, (yyvsp[-3].A)->loc->name, t->name);
		}
 		else {
 			stringstream strs;
		    strs <<size_type((yyval.A)->type);
		    string temp_str = strs.str();
        if (debug_flag == 1) {
          cout << "reached postfix_expression" << endl;
        }
		    char* intStr1 = (char*) temp_str.c_str();
        htop = 1;
			string str1 = string(intStr1);		
	 		emit("MULT", (yyval.A)->loc->name, (yyvsp[-1].E)->loc->name, str1);
 		}

		(yyval.A)->cat = "ARR";
	}
#line 2005 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 356 "parser.y" /* yacc.c:1646  */
    {
		(yyval.A) = new array ();
    htop = 1;
		(yyval.A)->array = (yyvsp[0].E)->loc;
    if (debug_flag == 1) {
      cout << "primary_expression" << endl;
    }
		(yyval.A)->loc = (yyval.A)->array;
    /*  setting type value here */
		(yyval.A)->type = (yyvsp[0].E)->loc->type;
	}
#line 2021 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 367 "parser.y" /* yacc.c:1646  */
    {
		(yyval.A) = new array();
		(yyval.A)->array = gentemp((yyvsp[-3].A)->type);
		stringstream strs;
	    strs <<(yyvsp[-1].integer_val);
	    string temp_str = strs.str();
	    char* intStr = (char*) temp_str.c_str();
		string str = string(intStr);		
		emit("CALL", (yyval.A)->array->name, (yyvsp[-3].A)->array->name, str);
	}
#line 2036 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 377 "parser.y" /* yacc.c:1646  */
    {
	
	}
#line 2044 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 380 "parser.y" /* yacc.c:1646  */
    {
		(yyval.A) = new array();
		(yyval.A)->array = gentemp(new symtype("INTEGER"));
		(yyval.A)->loc = gentemp(new symtype("INTEGER"));
	}
#line 2054 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 385 "parser.y" /* yacc.c:1646  */
    {
	}
#line 2061 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 387 "parser.y" /* yacc.c:1646  */
    {
		(yyval.A) = new array();

		(yyval.A)->array = gentemp((yyvsp[-1].A)->array->type);
		emit ("EQUAL", (yyval.A)->array->name, (yyvsp[-1].A)->array->name);

		emit ("ADD", (yyvsp[-1].A)->array->name, (yyvsp[-1].A)->array->name, "1");
	}
#line 2074 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 395 "parser.y" /* yacc.c:1646  */
    {
		(yyval.A) = new array();

    // debug_flag
		(yyval.A)->array = gentemp(new symtype("INTEGER"));
    if (debug_flag == 1) {
      cout << "reached postfix_expression" << endl;
    }
		(yyval.A)->loc = gentemp(new symtype("INTEGER"));
	}
#line 2089 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 405 "parser.y" /* yacc.c:1646  */
    {
	}
#line 2096 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 407 "parser.y" /* yacc.c:1646  */
    {
		(yyval.A) = new array();

		(yyval.A)->array = gentemp((yyvsp[-1].A)->array->type);
		emit ("EQUAL", (yyval.A)->array->name, (yyvsp[-1].A)->array->name);

		emit ("SUB", (yyvsp[-1].A)->array->name, (yyvsp[-1].A)->array->name, "1");
	}
#line 2109 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 418 "parser.y" /* yacc.c:1646  */
    {
	(yyval.symp) = gentemp(new symtype("CHAR"),(yyvsp[0].character_val));
	emit("EQUAL", (yyval.symp)->name, string((yyvsp[0].character_val)));
	}
#line 2118 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 422 "parser.y" /* yacc.c:1646  */
    {
	}
#line 2125 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 424 "parser.y" /* yacc.c:1646  */
    {
	stringstream strs;
    strs << (yyvsp[0].integer_val);
    string temp_str = strs.str();
    char* intStr = (char*) temp_str.c_str();
	string str = string(intStr);
	(yyval.symp) = gentemp(new symtype("INTEGER"), str);
	emit("EQUAL", (yyval.symp)->name, (yyvsp[0].integer_val));
	}
#line 2139 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 433 "parser.y" /* yacc.c:1646  */
    {
	(yyval.symp) = gentemp(new symtype("DOUBLE"), string((yyvsp[0].character_val)));
	emit("EQUAL", (yyval.symp)->name, string((yyvsp[0].character_val)));
	}
#line 2148 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 441 "parser.y" /* yacc.c:1646  */
    {
	emit ("PARAM", (yyvsp[0].E)->loc->name);
	(yyval.integer_val) = (yyvsp[-2].integer_val)+1;
	}
#line 2157 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 445 "parser.y" /* yacc.c:1646  */
    {
	emit ("PARAM", (yyvsp[0].E)->loc->name);
	(yyval.integer_val) = 1;
	}
#line 2166 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 451 "parser.y" /* yacc.c:1646  */
    {
		
		(yyval.A)=(yyvsp[0].A);
	}
#line 2175 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 455 "parser.y" /* yacc.c:1646  */
    {
		(yyval.A)=(yyvsp[0].A);
	}
#line 2183 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 461 "parser.y" /* yacc.c:1646  */
    {
		if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].A)->array) ) {
			(yyval.E) = new expr();
      if (debug_flag == 1) {
        cout << "multiplicative_expression" << endl;
      }
			(yyval.E)->loc = gentemp(new symtype((yyvsp[-2].E)->loc->type->type));
			emit ("MULT", (yyval.E)->loc->name, (yyvsp[-2].E)->loc->name, (yyvsp[0].A)->array->name);
		}
    else {
      if (debug_flag == 1) {
        cout << "multiplicative_expression" << endl;
      }
      cout << "Type Error"<< endl;
    } 
	}
#line 2204 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 477 "parser.y" /* yacc.c:1646  */
    {
		(yyval.E) = new expr();
		if ((yyvsp[0].A)->cat=="ARR") { 
			(yyval.E)->loc = gentemp((yyvsp[0].A)->loc->type);
      if (debug_flag == 1) {
        cout << "multiplicative_expression" << endl;
      }
			emit("ARRR", (yyval.E)->loc->name, (yyvsp[0].A)->array->name, (yyvsp[0].A)->loc->name);
		}
		else if ((yyvsp[0].A)->cat=="PTR") { 
      if (debug_flag == 1) {
        cout << "multiplicative_expression" << endl;
      }
			(yyval.E)->loc = (yyvsp[0].A)->loc;
		}
		else { 
			(yyval.E)->loc = (yyvsp[0].A)->array;
      if (debug_flag == 1) {
        cout << "multiplicative_expression" << endl;
      }
		}
	}
#line 2231 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 499 "parser.y" /* yacc.c:1646  */
    {
		if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].A)->array) ) {
			(yyval.E) = new expr();
      if (debug_flag == 1) {
        cout << "multiplicative_expression" << endl;
      }
			(yyval.E)->loc = gentemp(new symtype((yyvsp[-2].E)->loc->type->type));
			emit ("MODOP", (yyval.E)->loc->name, (yyvsp[-2].E)->loc->name, (yyvsp[0].A)->array->name);
		}
    else {
      if (debug_flag == 1) {
        cout << "multiplicative_expression" << endl;
      }
      cout << "Type Error"<< endl;
    } 
	}
#line 2252 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 515 "parser.y" /* yacc.c:1646  */
    {
		if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].A)->array) ) {
			(yyval.E) = new expr();
      if (debug_flag == 1) {
        cout << "multiplicative_expression" << endl;
      }
			(yyval.E)->loc = gentemp(new symtype((yyvsp[-2].E)->loc->type->type));
			emit ("DIVIDE", (yyval.E)->loc->name, (yyvsp[-2].E)->loc->name, (yyvsp[0].A)->array->name);
		}
    else {
      if (debug_flag == 1) {
        cout << "multiplicative_expression" << endl;
      }
      cout << "Type Error"<< endl;
    } 
	}
#line 2273 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 534 "parser.y" /* yacc.c:1646  */
    {
			if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc) ) {
			(yyval.E) = new expr();
			(yyval.E)->loc = gentemp(new symtype((yyvsp[-2].E)->loc->type->type));
			emit ("SUB", (yyval.E)->loc->name, (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
		}
		else cout << "Type Error"<< endl;

	}
#line 2287 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 543 "parser.y" /* yacc.c:1646  */
    {
		if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc) ) {
			(yyval.E) = new expr();
			(yyval.E)->loc = gentemp(new symtype((yyvsp[-2].E)->loc->type->type));
			emit ("ADD", (yyval.E)->loc->name, (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
		}
		else cout << "Type Error"<< endl;
	}
#line 2300 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 551 "parser.y" /* yacc.c:1646  */
    {
		(yyval.E)=(yyvsp[0].E);
	}
#line 2308 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 556 "parser.y" /* yacc.c:1646  */
    {
		(yyval.unOp) = '!';
    htop = 1;
    if (debug_flag == 1) {
      cout << "reached unary_operator" << endl;
    }
	}
#line 2320 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 563 "parser.y" /* yacc.c:1646  */
    {
    htop = 1;
		(yyval.unOp) = '&';
    if (debug_flag == 1) {
      cout << "reached unary_operator" << endl;
    }
	}
#line 2332 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 570 "parser.y" /* yacc.c:1646  */
    {
    htop = 1;
		(yyval.unOp) = '-';

    if (debug_flag == 1) {
      cout << "reached unary_operator" << endl;
    }
	}
#line 2345 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 578 "parser.y" /* yacc.c:1646  */
    {
    htop = 1;
		(yyval.unOp) = '+';
    if (debug_flag == 1) {
      cout << "reached unary_operator" << endl;
    }
	}
#line 2357 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 585 "parser.y" /* yacc.c:1646  */
    {
    htop = 1;
		(yyval.unOp) = '~';
    if (debug_flag == 1) {
      cout << "reached unary_operator" << endl;
    }
	}
#line 2369 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 592 "parser.y" /* yacc.c:1646  */
    {
    htop = 1;
		(yyval.unOp) = '*';
    if (debug_flag == 1) {
      cout << "reached unary_operator" << endl;
    }
	}
#line 2381 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 603 "parser.y" /* yacc.c:1646  */
    {
		if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc) ) {
			(yyval.E) = new expr();
			(yyval.E)->type = "BOOL";

      if (debug_flag == 1) {
        cout << "reached relational_expression" << endl;
      }
			(yyval.E)->falselist = makelist (nextinstr()+1);
			(yyval.E)->truelist = makelist (nextinstr());
			emit("LT", "", (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
			emit ("GOTOOP", "");
		}
		else cout << "Type Error"<< endl;
	}
#line 2401 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 618 "parser.y" /* yacc.c:1646  */
    {(yyval.E)=(yyvsp[0].E);}
#line 2407 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 619 "parser.y" /* yacc.c:1646  */
    {
		if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc) ) {
			(yyval.E) = new expr();
			(yyval.E)->type = "BOOL";

      if (debug_flag == 1) {
        cout << "reached relational_expression" << endl;
      }
			(yyval.E)->falselist = makelist (nextinstr()+1);
			(yyval.E)->truelist = makelist (nextinstr());
			emit("LE", "", (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
			emit ("GOTOOP", "");
		}
		else cout << "Type Error"<< endl;
	}
#line 2427 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 634 "parser.y" /* yacc.c:1646  */
    {
		if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc) ) {
			(yyval.E) = new expr();
			(yyval.E)->type = "BOOL";

      if (debug_flag == 1) {
        cout << "reached relational_expression" << endl;
      }
			(yyval.E)->falselist = makelist (nextinstr()+1);
			(yyval.E)->truelist = makelist (nextinstr());
			emit("GE", "", (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
      htop = 1;
			emit ("GOTOOP", "");
		}
		else cout << "Type Error"<< endl;
	}
#line 2448 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 650 "parser.y" /* yacc.c:1646  */
    {
		if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc) ) {
			(yyval.E) = new expr();
			(yyval.E)->type = "BOOL";

			(yyval.E)->falselist = makelist (nextinstr()+1);
      if (debug_flag == 1) {
        cout << "reached relational_expression" << endl;
      }
			(yyval.E)->truelist = makelist (nextinstr());
			emit ("GOTOOP", "");
			emit("GT", "", (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
		}
		else {
        cout << "Type Error"<< endl;
        if (debug_flag == 1) {
            cout << "reached here" << endl;
        }
    }
	}
#line 2473 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 674 "parser.y" /* yacc.c:1646  */
    {
		if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc) ) {
			
			convertBool2Int ((yyvsp[0].E));
			convertBool2Int ((yyvsp[-2].E));
			
      if (debug_flag == 1) {
        cout << "reached exclusive_OR_expression" << endl;
      }
			(yyval.E) = new expr();
			(yyval.E)->type = "NONBOOL";

			(yyval.E)->loc = gentemp (new symtype("INTEGER"));
			emit ("XOR", (yyval.E)->loc->name, (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
		}
    else {
      if (debug_flag == 1) {
        cout << "reached exclusive_OR_expression" << endl;
      }
      cout << "Type Error"<< endl;
    } 
	}
#line 2500 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 696 "parser.y" /* yacc.c:1646  */
    {(yyval.E)=(yyvsp[0].E);}
#line 2506 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 700 "parser.y" /* yacc.c:1646  */
    {
		if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc)) {
			convertBool2Int ((yyvsp[0].E));
			convertBool2Int ((yyvsp[-2].E));

      if (debug_flag == 1) {
        cout << "equality_expression" << endl;
      }
			(yyval.E) = new expr();
			(yyval.E)->type = "BOOL";

      htop = 1;

			(yyval.E)->falselist = makelist (nextinstr()+1);
			(yyval.E)->truelist = makelist (nextinstr());
			emit("EQOP", "", (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
			emit ("GOTOOP", "");
		}
    else {
      if (debug_flag == 1) {
        cout << "equality_expression" << endl;
      }
      cout << "Type Error"<< endl;
    } 
	}
#line 2536 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 725 "parser.y" /* yacc.c:1646  */
    {
		if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc) ) {
			
			convertBool2Int ((yyvsp[0].E));
			convertBool2Int ((yyvsp[-2].E));

			(yyval.E) = new expr();
			(yyval.E)->type = "BOOL";

      if (debug_flag == 1) {
        cout << "reached equality_expression" << endl;
      }
			(yyval.E)->falselist = makelist (nextinstr()+1);
			(yyval.E)->truelist = makelist (nextinstr());
			emit("NEOP", "", (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
			emit ("GOTOOP", "");
		}
		else cout << "Type Error"<< endl;
	}
#line 2560 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 744 "parser.y" /* yacc.c:1646  */
    {(yyval.E)=(yyvsp[0].E);}
#line 2566 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 748 "parser.y" /* yacc.c:1646  */
    {
		if ((yyvsp[0].E)->loc->type->type == "INTEGER") {
			(yyval.E) = new expr();

      if (debug_flag == 1) {
        cout << "reached shift_expression" << endl;
      }
			(yyval.E)->loc = gentemp (new symtype("INTEGER"));
			emit ("RIGHTOP", (yyval.E)->loc->name, (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
		}
		else cout << "Type Error"<< endl;
	}
#line 2583 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 760 "parser.y" /* yacc.c:1646  */
    {
		(yyval.E)=(yyvsp[0].E);
	}
#line 2591 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 763 "parser.y" /* yacc.c:1646  */
    {
		if ((yyvsp[0].E)->loc->type->type == "INTEGER") {
			(yyval.E) = new expr();

      if (debug_flag == 1) {
        cout << "reached shift_expression" << endl;
      }
			(yyval.E)->loc = gentemp (new symtype("INTEGER"));
			emit ("LEFTOP", (yyval.E)->loc->name, (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
		}
		else cout << "Type Error"<< endl;
	}
#line 2608 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 779 "parser.y" /* yacc.c:1646  */
    {
		if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc) ) {
			
			convertBool2Int ((yyvsp[0].E));
			convertBool2Int ((yyvsp[-2].E));
			
			(yyval.E) = new expr();
			(yyval.E)->type = "NONBOOL";

			(yyval.E)->loc = gentemp (new symtype("INTEGER"));
			emit ("INOR", (yyval.E)->loc->name, (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
		}
		else cout << "Type Error"<< endl;
	}
#line 2627 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 793 "parser.y" /* yacc.c:1646  */
    {(yyval.E)=(yyvsp[0].E);}
#line 2633 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 797 "parser.y" /* yacc.c:1646  */
    {
		convertInt2Bool((yyvsp[0].E));

    if (debug_flag == 1) {
      cout << "logical_and_expression" << endl;
    }
		
		backpatch((yyvsp[-3].S)->nextlist, nextinstr());
		convertInt2Bool((yyvsp[-4].E));

    // giving an implicit type of BOOL
		(yyval.E) = new expr();
		(yyval.E)->type = "BOOL";

    // backpatching the required statements
		backpatch((yyvsp[-4].E)->truelist, (yyvsp[-1].instr));
		(yyval.E)->falselist = merge ((yyvsp[-4].E)->falselist, (yyvsp[0].E)->falselist);
		(yyval.E)->truelist = (yyvsp[0].E)->truelist;
	}
#line 2657 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 816 "parser.y" /* yacc.c:1646  */
    {(yyval.E)=(yyvsp[0].E);}
#line 2663 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 820 "parser.y" /* yacc.c:1646  */
    {
		convertInt2Bool((yyvsp[0].E));

    htop = 1;
		
		convertInt2Bool((yyvsp[-4].E));
		backpatch((yyvsp[-3].S)->nextlist, nextinstr());

		(yyval.E) = new expr();
		(yyval.E)->type = "BOOL";
    if (debug_flag == 1) {
      cout << "logical_and_expression" << endl;
    }
	
		backpatch ((yyval.E)->falselist, (yyvsp[-1].instr));
		(yyval.E)->falselist = (yyvsp[0].E)->falselist;
		(yyval.E)->truelist = merge ((yyvsp[-4].E)->truelist, (yyvsp[0].E)->truelist);
	}
#line 2686 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 838 "parser.y" /* yacc.c:1646  */
    {(yyval.E)=(yyvsp[0].E);}
#line 2692 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 841 "parser.y" /* yacc.c:1646  */
    {	(yyval.instr) = nextinstr(); }
#line 2698 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 845 "parser.y" /* yacc.c:1646  */
    {
		if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc) ) {
			
			convertBool2Int ((yyvsp[0].E));
			convertBool2Int ((yyvsp[-2].E));
			
			(yyval.E) = new expr();
			(yyval.E)->type = "NONBOOL";

			(yyval.E)->loc = gentemp (new symtype("INTEGER"));
			emit ("BAND", (yyval.E)->loc->name, (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
		}
		else cout << "Type Error"<< endl;
	}
#line 2717 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 859 "parser.y" /* yacc.c:1646  */
    {(yyval.E)=(yyvsp[0].E);}
#line 2723 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 864 "parser.y" /* yacc.c:1646  */
    {
		if((yyvsp[-2].A)->cat=="ARR") {
			(yyvsp[0].E)->loc = conv((yyvsp[0].E)->loc, (yyvsp[-2].A)->type->type);
			emit("ARRL", (yyvsp[-2].A)->array->name, (yyvsp[-2].A)->array->name, (yyvsp[0].E)->loc->name);	
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
#line 2742 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 878 "parser.y" /* yacc.c:1646  */
    {(yyval.E)=(yyvsp[0].E);}
#line 2748 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 882 "parser.y" /* yacc.c:1646  */
    {
	
	}
#line 2756 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 885 "parser.y" /* yacc.c:1646  */
    {(yyval.E)=(yyvsp[0].E);}
#line 2762 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 888 "parser.y" /* yacc.c:1646  */
    { 	
		(yyval.S)  = new statement();
    if (debug_flag == 1) {
      cout << "reached N" << endl;
    }
		(yyval.S)->nextlist = makelist(nextinstr());
    htop = 1;
		emit ("GOTOOP","");
	}
#line 2776 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 900 "parser.y" /* yacc.c:1646  */
    {
	
	}
#line 2784 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 906 "parser.y" /* yacc.c:1646  */
    {
	}
#line 2791 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 908 "parser.y" /* yacc.c:1646  */
    {
	}
#line 2798 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 914 "parser.y" /* yacc.c:1646  */
    {
	}
#line 2805 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 916 "parser.y" /* yacc.c:1646  */
    {
	}
#line 2812 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 918 "parser.y" /* yacc.c:1646  */
    {
	}
#line 2819 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 920 "parser.y" /* yacc.c:1646  */
    {
	}
#line 2826 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 922 "parser.y" /* yacc.c:1646  */
    {
	}
#line 2833 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 924 "parser.y" /* yacc.c:1646  */
    {
	}
#line 2840 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 926 "parser.y" /* yacc.c:1646  */
    {
	}
#line 2847 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 928 "parser.y" /* yacc.c:1646  */
    {
	}
#line 2854 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 932 "parser.y" /* yacc.c:1646  */
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
		convertInt2Bool((yyvsp[-8].E));
		backpatch ((yyvsp[-8].E)->falselist, (yyvsp[-1].instr));
		backpatch (l, nextinstr());
		backpatch ((yyvsp[-8].E)->truelist, (yyvsp[-5].instr));
	}
#line 2878 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 951 "parser.y" /* yacc.c:1646  */
    {(yyval.E)=(yyvsp[0].E);}
#line 2884 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 956 "parser.y" /* yacc.c:1646  */
    {
		if ((yyvsp[0].symp)->initial_value!="") {
      htop = 1;
      (yyvsp[-2].symp)->initial_value=(yyvsp[0].symp)->initial_value;
    }
		emit ("EQUAL", (yyvsp[-2].symp)->name, (yyvsp[0].symp)->name);
	}
#line 2896 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 963 "parser.y" /* yacc.c:1646  */
    {(yyval.symp)=(yyvsp[0].symp);}
#line 2902 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 967 "parser.y" /* yacc.c:1646  */
    {
	}
#line 2909 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 969 "parser.y" /* yacc.c:1646  */
    {
	}
#line 2916 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 971 "parser.y" /* yacc.c:1646  */
    {
	}
#line 2923 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 973 "parser.y" /* yacc.c:1646  */
    {
	}
#line 2930 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 977 "parser.y" /* yacc.c:1646  */
    {
	}
#line 2937 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 979 "parser.y" /* yacc.c:1646  */
    {
	}
#line 2944 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 984 "parser.y" /* yacc.c:1646  */
    {
    if (debug_flag == 1) {
      cout << "reached assignment_operator" << endl;
    }
	}
#line 2954 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 989 "parser.y" /* yacc.c:1646  */
    {
    if (debug_flag == 1) {
      cout << "reached assignment_operator" << endl;
    }
	}
#line 2964 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 994 "parser.y" /* yacc.c:1646  */
    {
    if (debug_flag == 1) {
      cout << "reached assignment_operator" << endl;
    }
	}
#line 2974 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 999 "parser.y" /* yacc.c:1646  */
    {
    if (debug_flag == 1) {
      cout << "reached assignment_operator" << endl;
    }
	}
#line 2984 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1004 "parser.y" /* yacc.c:1646  */
    {
    if (debug_flag == 1) {
      cout << "reached assignment_operator" << endl;
    }
	}
#line 2994 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1009 "parser.y" /* yacc.c:1646  */
    {
    if (debug_flag == 1) {
      cout << "reached assignment_operator" << endl;
    }
	}
#line 3004 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1014 "parser.y" /* yacc.c:1646  */
    {
    if (debug_flag == 1) {
      cout << "reached assignment_operator" << endl;
    }
	}
#line 3014 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1019 "parser.y" /* yacc.c:1646  */
    {
    if (debug_flag == 1) {
      cout << "reached assignment_operator" << endl;
    }
	}
#line 3024 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1024 "parser.y" /* yacc.c:1646  */
    {
    if (debug_flag == 1) {
      cout << "reached assignment_operator" << endl;
    }
	}
#line 3034 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1029 "parser.y" /* yacc.c:1646  */
    {
    if (debug_flag == 1) {
      cout << "reached assignment_operator" << endl;
    }
	}
#line 3044 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1034 "parser.y" /* yacc.c:1646  */
    {
    if (debug_flag == 1) {
      cout << "reached assignment_operator" << endl;
    }

	}
#line 3055 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1044 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3062 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1046 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3069 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1048 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3076 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1050 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3083 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1055 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3090 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1057 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3097 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1061 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3104 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1063 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3111 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1067 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3118 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1073 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3125 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1075 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3132 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1077 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3139 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1082 "parser.y" /* yacc.c:1646  */
    {
		(yyval.symtp) = new symtype("PTR", (yyvsp[0].symtp));
	}
#line 3147 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1085 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3154 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1087 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3161 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1089 "parser.y" /* yacc.c:1646  */
    {
		(yyval.symtp) = new symtype("PTR");
	}
#line 3169 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1094 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3176 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1096 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3183 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1103 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3190 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1105 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3197 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1107 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3204 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1109 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3211 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1111 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3218 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1117 "parser.y" /* yacc.c:1646  */
    {
		symtype * t = (yyvsp[-1].symtp);
    if (debug_flag == 1) {
      cout << "declarator" << endl;
    }
		while (t->ptr !=NULL) t = t->ptr;
		t->ptr = (yyvsp[0].symp)->type;
    htop = 1;
		(yyval.symp) = (yyvsp[0].symp)->update((yyvsp[-1].symtp));
	}
#line 3233 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1127 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3240 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1134 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3247 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1136 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3254 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1138 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3261 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1140 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3268 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1146 "parser.y" /* yacc.c:1646  */
    {
  /*
    rules for arrays
  */
		symtype * t = (yyvsp[-3].symp) -> type;
		symtype * prev = NULL;
  // setting type of array
		while (htop && (t->type == "ARR")) {
			prev = t;
			t = t->ptr;
		}
  /* setting type of array */
		if (prev==NULL) {
			int temp = atoi((yyvsp[-1].E)->loc->initial_value.c_str());
			symtype* s = new symtype("ARR", (yyvsp[-3].symp)->type, temp);
			(yyval.symp) = (yyvsp[-3].symp)->update(s);
		}
  /* setting type of array*/
		else {
			prev->ptr =  new symtype("ARR", t, atoi((yyvsp[-1].E)->loc->initial_value.c_str()));
			(yyval.symp) = (yyvsp[-3].symp)->update ((yyvsp[-3].symp)->type);
		}
	}
#line 3296 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1169 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3303 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1171 "parser.y" /* yacc.c:1646  */
    {
		table->name = (yyvsp[-4].symp)->name;

		if ((yyvsp[-4].symp)->type->type !="VOID") {
			sym *s = table->lookup("return");
			s->update((yyvsp[-4].symp)->type);		
		}
		(yyvsp[-4].symp)->nested=table;

		table->parent = globalTable;
		changeTable (globalTable);				
		currentSymbol = (yyval.symp);
	}
#line 3321 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1184 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3328 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1186 "parser.y" /* yacc.c:1646  */
    {(yyval.symp)=(yyvsp[-1].symp);}
#line 3334 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1187 "parser.y" /* yacc.c:1646  */
    {
		(yyval.symp) = (yyvsp[0].symp)->update(new symtype(Type));
		currentSymbol = (yyval.symp);
	}
#line 3343 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1191 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3350 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1193 "parser.y" /* yacc.c:1646  */
    {
  }
#line 3357 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1195 "parser.y" /* yacc.c:1646  */
    {
		symtype * t = (yyvsp[-2].symp) -> type;
		symtype * prev = NULL;
		while (t->type == "ARR") {
			prev = t;
			t = t->ptr;
		}
		if (prev==NULL) {
			symtype* s = new symtype("ARR", (yyvsp[-2].symp)->type, 0);
			(yyval.symp) = (yyvsp[-2].symp)->update(s);
		}
		else {
			prev->ptr =  new symtype("ARR", t, 0);
			(yyval.symp) = (yyvsp[-2].symp)->update ((yyvsp[-2].symp)->type);
		}
	}
#line 3378 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1211 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3385 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1213 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3392 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1215 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3399 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1217 "parser.y" /* yacc.c:1646  */
    {
		table->name = (yyvsp[-3].symp)->name;

		if ((yyvsp[-3].symp)->type->type !="VOID") {
			sym *s = table->lookup("return");
			s->update((yyvsp[-3].symp)->type);		
		}
		(yyvsp[-3].symp)->nested=table;

		table->parent = globalTable;
		changeTable (globalTable);				
		currentSymbol = (yyval.symp);
	}
#line 3417 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1234 "parser.y" /* yacc.c:1646  */
    {Type="VOID";}
#line 3423 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1238 "parser.y" /* yacc.c:1646  */
    {Type="CHAR";}
#line 3429 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1239 "parser.y" /* yacc.c:1646  */
    {Type="INTEGER";}
#line 3435 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1242 "parser.y" /* yacc.c:1646  */
    {Type="DOUBLE";}
#line 3441 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1250 "parser.y" /* yacc.c:1646  */
    { 															
		if (currentSymbol->nested==NULL) changeTable(new symboltable(""));	
		else {
			changeTable (currentSymbol ->nested);						
			emit ("LABEL", table->name);
		}
	}
#line 3453 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1260 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3460 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1262 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3467 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1266 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3474 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1268 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3481 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1273 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3488 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1278 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3495 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1280 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3502 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1282 "parser.y" /* yacc.c:1646  */
    {
		(yyval.symp) = (yyvsp[0].E)->loc;
	}
#line 3510 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1287 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3517 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1292 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3524 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1294 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3531 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1300 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3538 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1302 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3545 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1306 "parser.y" /* yacc.c:1646  */
    {(yyval.S) = new statement();}
#line 3551 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1307 "parser.y" /* yacc.c:1646  */
    {(yyval.S) = new statement();}
#line 3557 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1308 "parser.y" /* yacc.c:1646  */
    {(yyval.S) = new statement();}
#line 3563 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1312 "parser.y" /* yacc.c:1646  */
    {(yyval.S)=(yyvsp[-1].S);}
#line 3569 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1313 "parser.y" /* yacc.c:1646  */
    {(yyval.S) = new statement();}
#line 3575 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1318 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3582 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1320 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3589 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1326 "parser.y" /* yacc.c:1646  */
    {
		(yyval.S)=(yyvsp[0].S);
		backpatch ((yyvsp[-2].S)->nextlist, (yyvsp[-1].instr));
	}
#line 3598 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1330 "parser.y" /* yacc.c:1646  */
    {(yyval.S)=(yyvsp[0].S);}
#line 3604 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1334 "parser.y" /* yacc.c:1646  */
    {
		table->parent = globalTable;
		changeTable (globalTable);
	}
#line 3613 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1338 "parser.y" /* yacc.c:1646  */
    {}
#line 3619 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1341 "parser.y" /* yacc.c:1646  */
    {(yyval.E) = new expr();}
#line 3625 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1342 "parser.y" /* yacc.c:1646  */
    {(yyval.E)=(yyvsp[-1].E);}
#line 3631 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1346 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3638 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1348 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3645 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1353 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3652 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1355 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3659 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1361 "parser.y" /* yacc.c:1646  */
    {
		backpatch ((yyvsp[-7].S)->nextlist, nextinstr());
		convertInt2Bool((yyvsp[-8].E));
		(yyval.S) = new statement();
		backpatch ((yyvsp[-8].E)->truelist, (yyvsp[-5].instr));
		backpatch ((yyvsp[-8].E)->falselist, (yyvsp[-1].instr));
		list<int> temp = merge ((yyvsp[-4].S)->nextlist, (yyvsp[-3].S)->nextlist);
		(yyval.S)->nextlist = merge ((yyvsp[0].S)->nextlist,temp);
	}
#line 3673 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1370 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3680 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1372 "parser.y" /* yacc.c:1646  */
    {
		backpatch ((yyvsp[-4].S)->nextlist, nextinstr());
		convertInt2Bool((yyvsp[-5].E));
		(yyval.S) = new statement();
		backpatch ((yyvsp[-5].E)->truelist, (yyvsp[-2].instr));
		list<int> temp = merge ((yyvsp[-5].E)->falselist, (yyvsp[-1].S)->nextlist);
		(yyval.S)->nextlist = merge ((yyvsp[0].S)->nextlist, temp);
	}
#line 3693 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1383 "parser.y" /* yacc.c:1646  */
    {(yyval.S)=(yyvsp[0].S);}
#line 3699 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1384 "parser.y" /* yacc.c:1646  */
    {(yyval.S)=(yyvsp[0].S);}
#line 3705 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1385 "parser.y" /* yacc.c:1646  */
    {(yyval.S)=(yyvsp[0].S);}
#line 3711 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1386 "parser.y" /* yacc.c:1646  */
    {
		(yyval.S) = new statement();
		(yyval.S)->nextlist = (yyvsp[0].E)->nextlist;
	}
#line 3720 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1390 "parser.y" /* yacc.c:1646  */
    {(yyval.S)=(yyvsp[0].S);}
#line 3726 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1391 "parser.y" /* yacc.c:1646  */
    {
	}
#line 3733 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1395 "parser.y" /* yacc.c:1646  */
    {
    (yyval.S) = new statement();     
    if (debug_flag == 1) {
      cout << "jump_statement" << endl;
    }
  }
#line 3744 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1401 "parser.y" /* yacc.c:1646  */
    {
    if (debug_flag == 1) {
      cout << "jump_statement" << endl;
    }
		(yyval.S) = new statement();
    htop = 1;
		emit("RETURN","");
	}
#line 3757 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1409 "parser.y" /* yacc.c:1646  */
    {(yyval.S) = new statement();}
#line 3763 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1410 "parser.y" /* yacc.c:1646  */
    {
		(yyval.S) = new statement();
    if (debug_flag == 1) {
      cout << "jump_statement" << endl;
    }
		emit("RETURN",(yyvsp[-1].E)->loc->name);
	}
#line 3775 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1417 "parser.y" /* yacc.c:1646  */
    {
    if (debug_flag == 1) {
      cout << "jump_statement" << endl;
    }
    (yyval.S) = new statement();
  }
#line 3786 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1426 "parser.y" /* yacc.c:1646  */
    {}
#line 3792 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1427 "parser.y" /* yacc.c:1646  */
    {}
#line 3798 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1431 "parser.y" /* yacc.c:1646  */
    {}
#line 3804 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1432 "parser.y" /* yacc.c:1646  */
    {}
#line 3810 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1436 "parser.y" /* yacc.c:1646  */
    {
		convertInt2Bool((yyvsp[-2].E));
		(yyval.S) = new statement();
		
		backpatch ((yyvsp[-6].S)->nextlist, (yyvsp[-5].instr));
		backpatch ((yyvsp[-2].E)->truelist, (yyvsp[-7].instr));

		
		(yyval.S)->nextlist = (yyvsp[-2].E)->falselist;
	}
#line 3825 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1446 "parser.y" /* yacc.c:1646  */
    {
		convertInt2Bool((yyvsp[-3].E));
		(yyval.S) = new statement();
		
		
		backpatch((yyvsp[-3].E)->truelist, (yyvsp[-1].instr));
		backpatch((yyvsp[0].S)->nextlist, (yyvsp[-5].instr));
		(yyval.S)->nextlist = (yyvsp[-3].E)->falselist;
		
		stringstream strs;
	    strs << (yyvsp[-5].instr);
	    string temp_str = strs.str();
	    char* intStr = (char*) temp_str.c_str();
		string str = string(intStr);

		emit ("GOTOOP", str);
	}
#line 3847 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1463 "parser.y" /* yacc.c:1646  */
    {
		(yyval.S) = new statement();
		convertInt2Bool((yyvsp[-6].E));
		backpatch ((yyvsp[0].S)->nextlist, (yyvsp[-5].instr));
		backpatch ((yyvsp[-6].E)->truelist, (yyvsp[-1].instr));
		backpatch ((yyvsp[-3].S)->nextlist, (yyvsp[-7].instr));
		stringstream strs;
	    strs << (yyvsp[-5].instr);
	    string temp_str = strs.str();
	    char* intStr = (char*) temp_str.c_str();
		string str = string(intStr);
		emit ("GOTOOP", str);
		(yyval.S)->nextlist = (yyvsp[-6].E)->falselist;
	}
#line 3866 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1477 "parser.y" /* yacc.c:1646  */
    {
		(yyval.S) = new statement();
		convertInt2Bool((yyvsp[-3].E));
		backpatch ((yyvsp[0].S)->nextlist, (yyvsp[-4].instr));
		backpatch ((yyvsp[-3].E)->truelist, (yyvsp[-1].instr));
		stringstream strs;
	    strs << (yyvsp[-4].instr);
	    string temp_str = strs.str();
	    char* intStr = (char*) temp_str.c_str();
		string str = string(intStr);

		emit ("GOTOOP", str);
		(yyval.S)->nextlist = (yyvsp[-3].E)->falselist;
	}
#line 3885 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1496 "parser.y" /* yacc.c:1646  */
    {(yyval.S) = (yyvsp[0].S);}
#line 3891 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1497 "parser.y" /* yacc.c:1646  */
    {
		(yyval.S) = new statement();
	}
#line 3899 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 3903 "parser.tab.c" /* yacc.c:1646  */
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
#line 1503 "parser.y" /* yacc.c:1906  */


void yyerror(string s) {
    cout<<s<<endl;
}
