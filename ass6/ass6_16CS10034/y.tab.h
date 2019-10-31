/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 15 "ass6_16CS10034.y" /* yacc.c:1909  */

  int intval;
  char* charval;
  int instr;
  sym* symp;
  sym_type* symtp;
  expr* E;
  statement* S;
  array* A;
  char unaryOperator;

#line 252 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
