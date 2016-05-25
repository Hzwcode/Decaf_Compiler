/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

#ifndef YY_YY_DECAF_TAB_H_INCLUDED
# define YY_YY_DECAF_TAB_H_INCLUDED
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
    T_BOOL = 258,
    T_INT = 259,
    T_DOUBLE = 260,
    T_STRING = 261,
    T_CLASS = 262,
    T_EXTENDS = 263,
    T_THIS = 264,
    T_NEW = 265,
    T_STATIC = 266,
    T_IDENTIFIER = 267,
    T_WHILE = 268,
    T_FOR = 269,
    T_IF = 270,
    T_ELSE = 271,
    T_RETURN = 272,
    T_BREAK = 273,
    T_VOID = 274,
    T_PRINT = 275,
    T_READINTEGER = 276,
    T_READLINE = 277,
    T_INSTANCEOF = 278,
    T_FALSE = 279,
    T_TRUE = 280,
    T_STRINGCONSTANT = 281,
    T_DOUBLECONSTANT = 282,
    T_INTCONSTANT = 283,
    T_NULL = 284,
    T_HET = 285,
    T_LET = 286,
    T_EQU = 287,
    T_UEQU = 288,
    T_AND = 289,
    T_OR = 290,
    T_IFX = 291
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 11 "decaf.y" /* yacc.c:1909  */

	double dval;
	char *sval;

#line 96 "decaf.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_DECAF_TAB_H_INCLUDED  */