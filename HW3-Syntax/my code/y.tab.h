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
#line 48 "1505035.y" /* yacc.c:1909  */

	SymbolInfo* SymVal; 

#line 144 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
