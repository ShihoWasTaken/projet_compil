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

#ifndef YY_YY_PARSER_TAB_HPP_INCLUDED
# define YY_YY_PARSER_TAB_HPP_INCLUDED
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
    ENTIER = 258,
    CERCLE = 259,
    RECTANGLE = 260,
    LIGNE = 261,
    COLOR = 262,
    FILLING = 263,
    EPAISSEUR = 264,
    COULEUR = 265,
    OPACITE = 266,
    ROTATION = 267,
    REMPLISSAGE = 268,
    IDENTIFICATEUR = 269,
    VIRGULE = 270,
    DEGRE = 271,
    POURCENT = 272,
    PARENTHESE_OUVRANTE = 273,
    PARENTHESE_FERMANTE = 274,
    ACCOLADE_OUVRANTE = 275,
    ACCOLADE_FERMANTE = 276,
    CROCHET_OUVRANT = 277,
    CROCHET_FERMANT = 278,
    EGAL = 279,
    FENETRE = 280,
    LONGUEUR = 281,
    HAUTEUR = 282,
    FIN_LIGNE = 283,
    HASHTAG = 284,
    COMMENTAIRE_MONO = 285,
    COMMENTAIRE_MULTI = 286,
    IMAGE = 287,
    PATH = 288,
    DOT = 289,
    EXT_IMG = 290
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 28 "parser.ypp" /* yacc.c:1909  */

    char * texte;
    int valeur_entiere;

#line 95 "parser.tab.hpp" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_HPP_INCLUDED  */
