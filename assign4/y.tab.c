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
#line 1 "asgn4_17CS30007.y" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>
extern int yylex();
void yyerror(char *s);

#line 73 "y.tab.c" /* yacc.c:339  */

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
    END = 0,
    CONSTANT = 258,
    STRING_LITERAL = 259,
    IDENTIFIER = 260,
    ARROW_ACCESS = 261,
    INCREMENT = 262,
    DECREMENT = 263,
    SIZEOF = 264,
    LEFT_SHIFT = 265,
    RIGHT_SHIFT = 266,
    LESSER_EQUAL = 267,
    GREATER_EQUAL = 268,
    IS_EQUAL = 269,
    NOT_EQUAL = 270,
    LOGICAL_AND = 271,
    LOGICAL_OR = 272,
    MULT_ASSIGN = 273,
    DIV_ASSIGN = 274,
    ADD_ASSIGN = 275,
    SUB_ASSIGN = 276,
    REM_ASSIGN = 277,
    LEFT_SHIFT_ASSIGN = 278,
    RIGHT_SHIFT_ASSIGN = 279,
    BITWISE_AND_ASSIGN = 280,
    BITWISE_XOR_ASSIGN = 281,
    BITWISE_OR_ASSIGN = 282,
    EXTERN = 283,
    STATIC = 284,
    AUTO = 285,
    REGISTER = 286,
    VOID = 287,
    CHAR = 288,
    SHORT = 289,
    INT = 290,
    LONG = 291,
    FLOAT = 292,
    DOUBLE = 293,
    SIGNED = 294,
    UNSIGNED = 295,
    BOOL = 296,
    COMPLEX = 297,
    IMAGINARY = 298,
    ENUM = 299,
    CONST = 300,
    RESTRICT = 301,
    VOLATILE = 302,
    INLINE = 303,
    THREE_DOTS = 304,
    CASE = 305,
    DEFAULT = 306,
    IF = 307,
    ELSE = 308,
    SWITCH = 309,
    WHILE = 310,
    DO = 311,
    FOR = 312,
    GOTO = 313,
    CONTINUE = 314,
    BREAK = 315,
    RETURN = 316,
    STRUCT = 317,
    TYPEDEF = 318,
    UNION = 319
  };
#endif
/* Tokens.  */
#define END 0
#define CONSTANT 258
#define STRING_LITERAL 259
#define IDENTIFIER 260
#define ARROW_ACCESS 261
#define INCREMENT 262
#define DECREMENT 263
#define SIZEOF 264
#define LEFT_SHIFT 265
#define RIGHT_SHIFT 266
#define LESSER_EQUAL 267
#define GREATER_EQUAL 268
#define IS_EQUAL 269
#define NOT_EQUAL 270
#define LOGICAL_AND 271
#define LOGICAL_OR 272
#define MULT_ASSIGN 273
#define DIV_ASSIGN 274
#define ADD_ASSIGN 275
#define SUB_ASSIGN 276
#define REM_ASSIGN 277
#define LEFT_SHIFT_ASSIGN 278
#define RIGHT_SHIFT_ASSIGN 279
#define BITWISE_AND_ASSIGN 280
#define BITWISE_XOR_ASSIGN 281
#define BITWISE_OR_ASSIGN 282
#define EXTERN 283
#define STATIC 284
#define AUTO 285
#define REGISTER 286
#define VOID 287
#define CHAR 288
#define SHORT 289
#define INT 290
#define LONG 291
#define FLOAT 292
#define DOUBLE 293
#define SIGNED 294
#define UNSIGNED 295
#define BOOL 296
#define COMPLEX 297
#define IMAGINARY 298
#define ENUM 299
#define CONST 300
#define RESTRICT 301
#define VOLATILE 302
#define INLINE 303
#define THREE_DOTS 304
#define CASE 305
#define DEFAULT 306
#define IF 307
#define ELSE 308
#define SWITCH 309
#define WHILE 310
#define DO 311
#define FOR 312
#define GOTO 313
#define CONTINUE 314
#define BREAK 315
#define RETURN 316
#define STRUCT 317
#define TYPEDEF 318
#define UNION 319

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 254 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  46
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   664

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  206
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  334

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   319

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    78,     2,     2,     2,    80,    73,     2,
      65,    66,    74,    75,    72,    76,    69,    79,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    86,    88,
      81,    87,    82,    85,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    67,     2,    68,    83,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    70,    84,    71,    77,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    80,    80,    81,    82,    83,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    97,    98,   101,   102,   105,
     106,   107,   108,   109,   110,   113,   113,   113,   113,   113,
     113,   116,   117,   120,   121,   122,   123,   126,   127,   128,
     131,   132,   133,   136,   137,   138,   139,   140,   143,   144,
     145,   148,   149,   152,   153,   156,   157,   160,   161,   164,
     165,   168,   169,   172,   173,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   179,   180,   183,   186,
     190,   191,   194,   195,   196,   197,   200,   201,   204,   205,
     208,   209,   213,   214,   215,   216,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   234,
     235,   238,   239,   242,   243,   244,   247,   248,   251,   252,
     255,   256,   259,   260,   261,   264,   267,   271,   272,   275,
     276,   277,   278,   279,   280,   281,   282,   285,   286,   289,
     290,   293,   294,   297,   298,   301,   302,   305,   306,   309,
     310,   313,   314,   317,   318,   321,   324,   325,   326,   329,
     330,   333,   334,   337,   340,   341,   344,   345,   348,   349,
     350,   351,   352,   353,   356,   357,   358,   361,   364,   365,
     368,   369,   372,   373,   376,   379,   380,   383,   384,   385,
     388,   389,   390,   391,   394,   395,   396,   397,   400,   401,
     404,   405,   409,   412,   413,   416,   417
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "END", "error", "$undefined", "CONSTANT", "STRING_LITERAL",
  "IDENTIFIER", "ARROW_ACCESS", "INCREMENT", "DECREMENT", "SIZEOF",
  "LEFT_SHIFT", "RIGHT_SHIFT", "LESSER_EQUAL", "GREATER_EQUAL", "IS_EQUAL",
  "NOT_EQUAL", "LOGICAL_AND", "LOGICAL_OR", "MULT_ASSIGN", "DIV_ASSIGN",
  "ADD_ASSIGN", "SUB_ASSIGN", "REM_ASSIGN", "LEFT_SHIFT_ASSIGN",
  "RIGHT_SHIFT_ASSIGN", "BITWISE_AND_ASSIGN", "BITWISE_XOR_ASSIGN",
  "BITWISE_OR_ASSIGN", "EXTERN", "STATIC", "AUTO", "REGISTER", "VOID",
  "CHAR", "SHORT", "INT", "LONG", "FLOAT", "DOUBLE", "SIGNED", "UNSIGNED",
  "BOOL", "COMPLEX", "IMAGINARY", "ENUM", "CONST", "RESTRICT", "VOLATILE",
  "INLINE", "THREE_DOTS", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH",
  "WHILE", "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "STRUCT",
  "TYPEDEF", "UNION", "'('", "')'", "'['", "']'", "'.'", "'{'", "'}'",
  "','", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'",
  "'>'", "'^'", "'|'", "'?'", "':'", "'='", "';'", "$accept",
  "primary_expression", "postfix_expression",
  "argument_expression_list_opt", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "init_declarator_list_opt", "declaration_specifiers",
  "declaration_specifiers_opt", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_opt", "enum_specifier", "identifier_opt",
  "enumerator_list", "enumerator", "type_qualifier", "function_specifier",
  "declarator", "pointer_opt", "direct_declarator",
  "type_qualifier_list_opt", "assignment_expression_opt",
  "identifier_list_opt", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "initializer", "initializer_list",
  "designation_opt", "designation", "designator_list", "designator",
  "statement", "labeled_statement", "compound_statement",
  "block_item_list_opt", "block_item_list", "block_item",
  "expression_statement", "expression_opt", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list_opt",
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
     315,   316,   317,   318,   319,    40,    41,    91,    93,    46,
     123,   125,    44,    38,    42,    43,    45,   126,    33,    47,
      37,    60,    62,    94,   124,    63,    58,    61,    59
};
# endif

#define YYPACT_NINF -215

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-215)))

#define YYTABLE_NINF -205

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     616,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,    10,  -215,  -215,
    -215,  -215,  -215,     6,   616,   616,  -215,   616,   616,   552,
    -215,  -215,  -215,   -10,   126,  -215,   -20,  -215,   486,     9,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,    65,  -215,
      29,   126,    29,   376,  -215,    29,     8,   616,  -215,    29,
     -27,    76,    16,  -215,  -215,  -215,  -215,    89,  -215,  -215,
    -215,   397,   397,   418,   313,    85,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,   137,   173,   435,  -215,    15,    23,   122,
       4,   171,    73,    97,   119,   185,    -8,  -215,  -215,  -215,
     237,  -215,  -215,   139,   573,    -3,   435,  -215,     5,   313,
    -215,  -215,   313,  -215,  -215,     3,   525,  -215,   525,   145,
     435,   209,   117,   376,  -215,   -32,  -215,   213,  -215,  -215,
     435,   435,   217,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,   435,  -215,  -215,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   138,   435,   140,   160,
     163,   165,   359,   166,   227,   146,   147,   435,   161,  -215,
    -215,  -215,  -215,   167,   237,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,   -21,   181,   182,   177,  -215,   178,   126,
     473,     2,  -215,  -215,  -215,  -215,   186,   187,  -215,   435,
    -215,  -215,  -215,   390,   169,  -215,  -215,    70,  -215,  -215,
    -215,  -215,   188,   179,  -215,   -50,  -215,  -215,  -215,  -215,
    -215,    15,    15,    23,    23,   122,   122,   122,   122,     4,
       4,   171,    73,    97,   222,   185,   -22,   359,   170,   359,
     435,   435,   435,   200,   296,   174,  -215,  -215,   175,  -215,
    -215,  -215,  -215,  -215,   594,   252,   435,   190,  -215,   191,
     435,   216,   216,  -215,    85,  -215,  -215,  -215,   376,  -215,
     435,  -215,   435,  -215,   359,  -215,    25,    34,    63,   196,
     435,   202,  -215,  -215,  -215,  -215,  -215,   238,  -215,  -215,
     240,   136,  -215,  -215,  -215,  -215,   359,   359,   359,   435,
     221,   435,  -215,  -215,  -215,    84,   266,  -215,  -215,    64,
     435,   235,  -215,   359,   277,   309,   435,  -215,  -215,   359,
     310,  -215,   359,  -215
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   117,   122,   123,
     124,   125,   201,    81,    87,    87,   108,    87,    87,     0,
     198,   200,   115,     0,   138,    79,    80,    88,    90,     0,
     127,    86,    82,    83,    84,    85,     1,   199,     0,   145,
     143,   137,   128,     0,   205,    81,     0,   203,   129,   128,
     126,   120,     0,   118,   144,   146,    89,    90,     3,     4,
       2,     0,     0,     0,     0,   162,    25,    26,    27,    28,
      29,    30,     6,    19,    31,     0,    33,    37,    40,    43,
      48,    51,    53,    55,    57,    59,    61,    63,   156,    91,
     179,   202,   206,     0,   142,   138,     0,   113,     0,     0,
      20,    21,     0,    23,    76,     0,   112,   155,   112,     0,
       0,     0,     0,     0,   161,     0,   164,     0,    11,    12,
      16,     0,     0,    66,    67,    69,    70,    68,    71,    72,
      73,    74,    75,    65,     0,    31,    22,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   186,   185,   182,
     183,   168,   169,     0,   178,   180,   170,   184,   171,   172,
     173,   130,   153,   128,     0,     0,   147,   149,   141,   138,
     140,   137,    78,   121,   114,   119,     0,     0,     5,     0,
     111,   109,   110,     0,     0,   167,   157,   162,   159,   163,
     165,    10,     0,    15,    17,     0,     9,    64,    34,    35,
      36,    38,    39,    41,    42,    46,    47,    44,    45,    49,
      50,    52,    54,    56,    58,    60,     0,   186,     0,   186,
       0,     0,     0,     0,   186,     0,   195,   196,     0,   177,
     181,   151,   136,   135,     0,     0,     0,    26,   139,     0,
       0,     0,    24,    77,   162,    32,   166,   158,     0,     8,
       0,     7,     0,   174,   186,   176,     0,     0,     0,     0,
     186,     0,   194,   197,   148,   150,   154,     0,   134,   131,
       0,     0,   160,    18,    62,   175,   186,   186,   186,     0,
       0,   186,   132,   133,    13,   162,   187,   189,   190,     0,
     186,     0,    14,   186,     0,     0,   186,   188,   191,   186,
       0,   193,   186,   192
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -215,  -215,  -215,  -215,  -215,   -39,  -215,   -65,    59,    60,
      13,    58,   232,   242,   215,  -215,   218,   233,   -99,   -51,
    -215,   -73,  -108,   -34,  -215,     0,   132,  -215,   355,  -215,
     -55,    66,   290,  -215,  -215,  -215,   304,    22,  -215,   -18,
    -215,  -215,   -97,  -215,  -215,   378,   325,  -215,  -215,   183,
    -215,   -47,  -117,   157,  -214,  -215,  -215,   320,  -142,  -215,
     392,  -215,  -215,   272,  -215,  -164,  -215,  -215,  -215,  -215,
     428,  -215,  -215,  -215
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    82,    83,   222,   223,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,   114,
     144,   178,   203,    22,    35,    55,    42,    36,    37,    24,
      25,   117,   211,    26,    33,    62,    63,    27,    28,    67,
      39,    60,    50,   269,   194,    40,    51,   195,   196,   197,
     198,   119,    99,   122,   123,   124,   125,   126,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,    29,
      30,    31,    56,    57
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,   115,    98,   278,    54,    38,   218,   202,   200,   164,
      61,  -128,   214,   258,    58,    32,   154,   155,   281,   116,
     146,   202,   209,   102,    41,    41,   199,    41,    41,    23,
     253,   270,   110,   111,   113,   120,   115,   121,   104,   115,
     105,   103,    18,    19,    20,  -152,   145,    18,    19,    20,
     209,  -152,    52,    34,   116,   219,    49,   116,   225,   248,
      48,   116,   206,   116,   282,   207,   179,   145,   202,   208,
      61,  -128,    98,    65,    59,   209,   204,   165,   100,   224,
      34,   145,   228,   229,   230,   156,   157,   107,   108,   147,
     291,   306,   246,   227,   148,   149,   118,   209,   150,   151,
     307,   278,   266,    34,   193,   283,   209,   285,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   310,    49,   145,   308,
     324,   118,   152,   153,   118,   209,   209,   120,   118,   121,
     118,   277,   305,   127,   128,   129,   160,   321,   275,   268,
     179,   120,   120,   121,   121,   322,   325,    43,   273,    44,
      45,   302,   330,   106,   316,   317,   318,   235,   236,   237,
     238,    18,    19,    20,   145,   261,    53,   286,   287,   288,
     161,   327,   210,   304,   210,   158,   159,   331,   216,   217,
     333,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   163,   130,   162,   131,   191,   132,   314,   315,   231,
     232,   213,   233,   234,   215,   297,   239,   240,   221,   300,
     290,    49,   226,    65,   247,   250,   249,    98,   251,   303,
     252,   254,   255,   209,   256,   257,   319,   276,   259,   164,
      68,    69,   166,   145,    71,    72,    73,   262,   263,   264,
     265,   280,   271,   272,   279,   289,   284,   296,   298,   299,
     143,   309,   292,   293,   193,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,   274,   167,   168,   169,
     311,   170,   171,   172,   173,   174,   175,   176,   177,    68,
      69,    70,    74,    71,    72,    73,   312,   100,   313,   320,
      76,    77,    78,    79,    80,    81,    68,    69,    70,   323,
      71,    72,    73,   326,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    74,    68,    69,   166,   328,    71,    72,    73,    76,
      77,    78,    79,    80,    81,   329,   332,   243,    74,    68,
      69,    70,   245,    71,    72,    73,    76,    77,    78,    79,
      80,    81,   241,    68,    69,    70,   244,    71,    72,    73,
      68,    69,    70,   242,    71,    72,    73,    66,   212,   167,
     168,   169,   205,   170,   171,   172,   173,   174,   175,   176,
     177,    68,    69,    70,    74,    71,    72,    73,    64,   100,
     201,   301,    76,    77,    78,    79,    80,    81,    68,    69,
      70,    74,    71,    72,    73,   220,    75,   295,   101,    76,
      77,    78,    79,    80,    81,    74,   260,    47,     0,     0,
     274,     0,   109,    76,    77,    78,    79,    80,    81,     0,
      76,    77,    78,    79,    80,    81,    68,    69,    70,     0,
      71,    72,    73,   112,     0,     0,     0,     0,     0,     0,
       0,    76,    77,    78,    79,    80,    81,     0,     0,     0,
      74,     0,     0,     0,     0,     0,     0,     0,    76,    77,
      78,    79,    80,    81,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,    74,     0,
       0,     0,     0,     0,     0,     0,    76,   267,    78,    79,
      80,    81,    46,     0,     0,     0,  -204,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    53,     0,     0,     0,     0,   192,     0,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,   294,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    74,    53,   217,    38,    23,   123,   106,   105,    17,
       5,     5,   120,   177,     5,     5,    12,    13,    68,    74,
      85,   120,    72,    57,    24,    25,    29,    27,    28,    29,
     172,    29,    71,    72,    73,    67,   109,    69,    65,   112,
      67,    59,    45,    46,    47,    66,    85,    45,    46,    47,
      72,    72,    72,    74,   109,    87,    34,   112,   131,   167,
      70,   116,   109,   118,    86,   112,   100,   106,   167,    66,
       5,    65,   123,    51,    65,    72,    71,    85,    70,   130,
      74,   120,   147,   148,   149,    81,    82,    71,    72,    74,
     254,    66,   165,   144,    79,    80,    74,    72,    75,    76,
      66,   315,   199,    74,   104,   247,    72,   249,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   290,   105,   167,    66,
      66,   109,    10,    11,   112,    72,    72,    67,   116,    69,
     118,    71,   284,     6,     7,     8,    73,   311,   213,   200,
     184,    67,    67,    69,    69,    71,   320,    25,   209,    27,
      28,   278,   326,    87,   306,   307,   308,   154,   155,   156,
     157,    45,    46,    47,   213,   193,    87,   250,   251,   252,
      83,   323,   116,   282,   118,    14,    15,   329,    71,    72,
     332,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    16,    65,    84,    67,    66,    69,    71,    72,   150,
     151,    66,   152,   153,     5,   266,   158,   159,     5,   270,
     254,   199,     5,   201,    86,    65,    86,   278,    65,   280,
      65,    65,     5,    72,    88,    88,   309,    68,    71,    17,
       3,     4,     5,   282,     7,     8,     9,    66,    66,    72,
      72,    72,    66,    66,    66,    55,    86,     5,    68,    68,
      87,    65,    88,    88,   264,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    70,    50,    51,    52,
      88,    54,    55,    56,    57,    58,    59,    60,    61,     3,
       4,     5,    65,     7,     8,     9,    68,    70,    68,    88,
      73,    74,    75,    76,    77,    78,     3,     4,     5,    53,
       7,     8,     9,    88,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    65,     3,     4,     5,    88,     7,     8,     9,    73,
      74,    75,    76,    77,    78,    66,    66,   162,    65,     3,
       4,     5,   164,     7,     8,     9,    73,    74,    75,    76,
      77,    78,   160,     3,     4,     5,   163,     7,     8,     9,
       3,     4,     5,   161,     7,     8,     9,    52,   118,    50,
      51,    52,   108,    54,    55,    56,    57,    58,    59,    60,
      61,     3,     4,     5,    65,     7,     8,     9,    50,    70,
     105,   274,    73,    74,    75,    76,    77,    78,     3,     4,
       5,    65,     7,     8,     9,   125,    70,   264,    56,    73,
      74,    75,    76,    77,    78,    65,   184,    29,    -1,    -1,
      70,    -1,    65,    73,    74,    75,    76,    77,    78,    -1,
      73,    74,    75,    76,    77,    78,     3,     4,     5,    -1,
       7,     8,     9,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    77,    78,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,
      77,    78,     0,    -1,    -1,    -1,    70,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    87,    -1,    -1,    -1,    -1,     5,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,   112,   114,   118,   119,   122,   126,   127,   158,
     159,   160,     5,   123,    74,   113,   116,   117,   128,   129,
     134,   114,   115,   115,   115,   115,     0,   159,    70,   126,
     131,   135,    72,    87,   112,   114,   161,   162,     5,    65,
     130,     5,   124,   125,   134,   126,   117,   128,     3,     4,
       5,     7,     8,     9,    65,    70,    73,    74,    75,    76,
      77,    78,    90,    91,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   141,
      70,   149,   112,   128,    65,    67,    87,    71,    72,    65,
      94,    94,    65,    94,   108,   110,   119,   120,   126,   140,
      67,    69,   142,   143,   144,   145,   146,     6,     7,     8,
      65,    67,    69,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    87,   109,    94,    96,    74,    79,    80,
      75,    76,    10,    11,    12,    13,    81,    82,    14,    15,
      73,    83,    84,    16,    17,    85,     5,    50,    51,    52,
      54,    55,    56,    57,    58,    59,    60,    61,   110,   112,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,    66,     5,   114,   133,   136,   137,   138,   139,    29,
     131,   135,   107,   111,    71,   125,   140,   140,    66,    72,
     120,   121,   121,    66,   111,     5,    71,    72,   141,    87,
     146,     5,    92,    93,   108,   110,     5,   108,    96,    96,
      96,    97,    97,    98,    98,    99,    99,    99,    99,   100,
     100,   101,   102,   103,   106,   105,   110,    86,   111,    86,
      65,    65,    65,   147,    65,     5,    88,    88,   154,    71,
     152,   128,    66,    66,    72,    72,   131,    74,   108,   132,
      29,    66,    66,   108,    70,    96,    68,    71,   143,    66,
      72,    68,    86,   147,    86,   147,   110,   110,   110,    55,
     112,   154,    88,    88,    49,   138,     5,   108,    68,    68,
     108,   142,   141,   108,   107,   147,    66,    66,    66,    65,
     154,    88,    68,    68,    71,    72,   147,   147,   147,   110,
      88,   154,    71,    53,    66,   154,    88,   147,    88,    66,
     154,   147,    66,   147
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    89,    90,    90,    90,    90,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    92,    92,    93,    93,    94,
      94,    94,    94,    94,    94,    95,    95,    95,    95,    95,
      95,    96,    96,    97,    97,    97,    97,    98,    98,    98,
      99,    99,    99,   100,   100,   100,   100,   100,   101,   101,
     101,   102,   102,   103,   103,   104,   104,   105,   105,   106,
     106,   107,   107,   108,   108,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   110,   110,   111,   112,
     113,   113,   114,   114,   114,   114,   115,   115,   116,   116,
     117,   117,   118,   118,   118,   118,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   120,
     120,   121,   121,   122,   122,   122,   123,   123,   124,   124,
     125,   125,   126,   126,   126,   127,   128,   129,   129,   130,
     130,   130,   130,   130,   130,   130,   130,   131,   131,   132,
     132,   133,   133,   134,   134,   135,   135,   136,   136,   137,
     137,   138,   138,   139,   139,   140,   141,   141,   141,   142,
     142,   143,   143,   144,   145,   145,   146,   146,   147,   147,
     147,   147,   147,   147,   148,   148,   148,   149,   150,   150,
     151,   151,   152,   152,   153,   154,   154,   155,   155,   155,
     156,   156,   156,   156,   157,   157,   157,   157,   158,   158,
     159,   159,   160,   161,   161,   162,   162
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     4,     3,
       3,     2,     2,     6,     7,     1,     0,     1,     3,     1,
       2,     2,     2,     2,     4,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     5,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     2,
       1,     0,     2,     2,     2,     2,     1,     0,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     1,     0,     5,     6,     2,     1,     0,     1,     3,
       1,     3,     1,     1,     1,     1,     2,     1,     0,     1,
       3,     5,     6,     6,     5,     4,     4,     1,     0,     1,
       0,     1,     0,     2,     3,     1,     2,     1,     3,     1,
       3,     2,     1,     1,     3,     1,     1,     3,     4,     2,
       4,     1,     0,     2,     1,     2,     3,     2,     1,     1,
       1,     1,     1,     1,     3,     4,     3,     3,     1,     0,
       1,     2,     1,     1,     1,     1,     0,     5,     7,     5,
       5,     7,     9,     8,     3,     2,     2,     3,     1,     2,
       1,     1,     4,     1,     0,     1,     2
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
        case 79:
#line 187 "asgn4_17CS30007.y" /* yacc.c:1646  */
    {printf("DECLARATION\n");}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 210 "asgn4_17CS30007.y" /* yacc.c:1646  */
    {printf("INIT DECLARATOR\n");}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 268 "asgn4_17CS30007.y" /* yacc.c:1646  */
    {printf("DECLARATOR\n");}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 406 "asgn4_17CS30007.y" /* yacc.c:1646  */
    {printf("EXTERNAL DECLARATION\n");}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1698 "y.tab.c" /* yacc.c:1646  */
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
#line 420 "asgn4_17CS30007.y" /* yacc.c:1906  */


void yyerror(char *err) {
  printf("The following error has been detected: %s\n", err);
}
