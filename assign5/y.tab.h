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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 34 "asgn4_17CS10030.y" /* yacc.c:1909  */

	expression E;
	boolean_expression BE;
	statement S;
	int intval;
	float floatval;
	char charval;
	string stringval;
	symboltable *symp;
  identifier ID;

#line 246 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
