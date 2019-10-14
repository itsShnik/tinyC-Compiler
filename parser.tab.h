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
#line 30 "parser.y" /* yacc.c:1909  */

  symtype* symtp;
  expr* E;
  int integer_val;
  char* character_val;
  char unOp;
  int instr;
  sym* symp;
  statement* S;
  array* A;

#line 160 "parser.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
