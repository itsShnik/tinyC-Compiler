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
