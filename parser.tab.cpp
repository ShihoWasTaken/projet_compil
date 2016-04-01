/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.ypp" /* yacc.c:339  */


#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "monDessin.h"
#include <QtGui>
#include <QApplication>
#include <algorithm>

#include "rectangle.h"
#include "cercle.h"
#include "ligne.h"


#define YYERROR_VERBOSE
#define USE(VALUE) /*empty*/


extern "C" int yyparse (void);
extern "C" int yylex(void);
extern "C" void yyerror(const std::string&);
extern FILE* yyin;

QPointer<monDessin> D;

#line 93 "parser.tab.cpp" /* yacc.c:339  */

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
   by #include "parser.tab.hpp".  */
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
    VIRGULE = 258,
    DEGRE = 259,
    POURCENT = 260,
    PARENTHESE_OUVRANTE = 261,
    PARENTHESE_FERMANTE = 262,
    ACCOLADE_OUVRANTE = 263,
    ACCOLADE_FERMANTE = 264,
    CROCHET_OUVRANT = 265,
    CROCHET_FERMANT = 266,
    EGAL = 267,
    FENETRE = 268,
    FIN_LIGNE = 269,
    HASHTAG = 270,
    COMMENTAIRE_MONO = 271,
    COMMENTAIRE_MULTI = 272,
    IMAGE = 273,
    PATH = 274,
    DOT = 275,
    EXT_IMG = 276,
    BOUCLER = 277,
    CERCLE = 278,
    RECTANGLE = 279,
    LIGNE = 280,
    COULEUR = 281,
    COLORNAME = 282,
    RGBCOLOR = 283,
    FILLING = 284,
    NOM_COULEUR = 285,
    REMPLISSAGE = 286,
    IDENTIFICATEUR = 287,
    EPAISSEUR = 288,
    ENTIER = 289,
    OPACITE = 290,
    ROTATION = 291,
    LONGUEUR = 292,
    HAUTEUR = 293
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 28 "parser.ypp" /* yacc.c:355  */

    char * texte;
    int valeur_entiere;

#line 177 "parser.tab.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 192 "parser.tab.cpp" /* yacc.c:358  */

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
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   227

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  48
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  233

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   293

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
      35,    36,    37,    38
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    78,    78,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    93,   108,   117,   123,   129,   138,   144,
     152,   155,   176,   197,   218,   242,   263,   301,   339,   377,
     415,   456,   460,   464,   470,   477,   482,   483,   486,   487,
     507,   512,   530,   536,   555,   565,   587,   590,   589
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VIRGULE", "DEGRE", "POURCENT",
  "PARENTHESE_OUVRANTE", "PARENTHESE_FERMANTE", "ACCOLADE_OUVRANTE",
  "ACCOLADE_FERMANTE", "CROCHET_OUVRANT", "CROCHET_FERMANT", "EGAL",
  "FENETRE", "FIN_LIGNE", "HASHTAG", "COMMENTAIRE_MONO",
  "COMMENTAIRE_MULTI", "IMAGE", "PATH", "DOT", "EXT_IMG", "BOUCLER",
  "CERCLE", "RECTANGLE", "LIGNE", "COULEUR", "COLORNAME", "RGBCOLOR",
  "FILLING", "NOM_COULEUR", "REMPLISSAGE", "IDENTIFICATEUR", "EPAISSEUR",
  "ENTIER", "OPACITE", "ROTATION", "LONGUEUR", "HAUTEUR", "$accept",
  "Input", "syntaxe_monoligne", "syntaxe_multiligne", "Option_multiligne",
  "syntaxe_identifiant", "option_identifiant", "syntaxe_fenetre",
  "syntaxe_image", "syntaxe_boucle", "Forme", "Color", "Instanciation",
  "Instanciation_identifiant", "Instanciation_boucle", "ligne_boucle",
  "$@1", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293
};
# endif

#define YYPACT_NINF -127

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-127)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -9,     1,    -9,    -9,    -9,     0,     4,    -4,  -127,  -127,
       9,    36,    -9,    -9,    -9,    -9,    -9,    -9,    -9,    -3,
      32,    27,    13,  -127,  -127,  -127,    18,    46,    19,    59,
      23,  -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,    41,
      70,    10,  -127,    66,    68,    69,    78,    45,    79,    49,
      73,    74,    75,    76,    77,    86,    56,    31,    57,  -127,
      89,    81,    82,    83,    62,    91,    92,    93,    90,    71,
      97,    94,    95,    96,    98,    99,    80,   100,   101,   103,
     104,   105,   106,    31,   109,    85,    -5,    87,    88,   117,
     102,   107,    -5,  -127,   120,   108,     3,   -12,    29,    39,
      40,   121,   110,    -5,   111,   112,   113,   114,    31,   115,
     122,  -127,  -127,  -127,   116,   123,   124,   125,   118,   126,
     127,  -127,  -127,   128,   129,  -127,   133,   140,   141,   130,
     119,   147,   142,   143,   144,   149,   151,    31,   156,   131,
     154,   132,   134,   135,   155,   136,   137,   145,   138,    67,
    -127,   139,  -127,   161,   146,  -127,  -127,  -127,   153,   158,
      31,   148,   162,  -127,   170,   171,   174,  -127,   172,   167,
     173,   175,   176,   177,   157,   178,  -127,  -127,   180,  -127,
     159,   160,   163,   166,  -127,  -127,  -127,  -127,  -127,  -127,
     183,   164,  -127,   181,   185,   193,   196,  -127,   194,   197,
     198,   168,   169,  -127,   179,   182,   199,   201,   202,   205,
     203,   207,   206,   184,   186,   187,  -127,   208,   209,   212,
     188,   189,   210,   217,   211,   213,  -127,   191,  -127,   219,
      45,  -127,  -127
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     2,     2,     2,     0,     0,     0,    36,    37,
       0,     0,     2,     2,     2,     2,     2,     2,     2,     0,
       0,     0,     0,     3,     4,     5,     0,     0,     0,     0,
       0,     1,     6,     7,     8,     9,    10,    11,    12,     0,
       0,     0,    20,     0,     0,     0,     0,    46,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    33,    31,    32,     0,     0,     0,     0,     0,     0,
       0,    22,    24,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,     0,    23,     0,     0,    15,    17,    18,     0,     0,
       0,     0,     0,    34,     0,     0,     0,    40,     0,     0,
       0,     0,     0,     0,     0,     0,    19,    16,     0,    39,
       0,     0,     0,     0,    42,    27,    29,    26,    30,    28,
       0,     0,    14,     0,     0,     0,     0,    41,     0,     0,
       0,     0,     0,    43,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    13,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    44,     0,    47,     0,
      46,    45,    48
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -127,    30,  -127,  -127,   -82,  -127,  -127,  -127,  -127,  -127,
     -47,   -65,  -127,  -127,  -127,  -126,  -127
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    83,    14,    15,    16,    17,    18,
      19,    60,    20,    21,    67,    68,   230
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      66,   108,    28,    39,     1,     2,    26,     3,     4,     5,
      58,    22,    27,     6,     7,     8,     9,   122,    58,    30,
     123,   111,    59,    10,    57,    58,   137,   117,    29,    40,
      59,   121,    23,    24,    25,   120,    31,    59,   132,    43,
      41,    42,    32,    33,    34,    35,    36,    37,    38,    50,
      44,    45,    46,    48,    51,   160,    52,    78,    53,    54,
      47,   124,    79,   125,    80,    49,    81,    82,    65,     8,
       9,   126,   128,   127,   129,    55,    56,    61,   178,    62,
      63,    64,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    84,    85,    86,    87,    88,    89,    90,    91,    93,
      95,    92,   172,   102,   232,    94,    96,    97,    98,     0,
      99,   100,   109,   103,   101,   104,   105,   106,   107,   110,
     114,   112,   113,   118,   130,   139,   141,   142,   143,   145,
       0,     0,     0,     0,   152,   140,   115,   146,   147,   148,
     133,   116,   119,   149,   131,   150,   134,   135,   136,   138,
     154,   151,   144,   153,   158,   159,   155,   156,   157,   161,
     162,   163,   167,   169,   174,   180,   164,   176,   165,   166,
     168,   171,   177,   181,   182,   173,   170,   183,   185,   184,
     175,   191,   179,    66,   186,   199,   187,   188,   189,   192,
     197,   190,   200,   193,   194,   196,   201,   195,   198,   202,
     204,   203,   206,   207,   205,   211,   210,   212,   213,   214,
     215,   220,   221,   208,   227,   216,   209,   222,   217,   225,
     218,   219,   223,   224,   226,   229,   231,   228
};

static const yytype_int16 yycheck[] =
{
      47,    83,     6,     6,    13,    14,     6,    16,    17,    18,
      15,    10,     8,    22,    23,    24,    25,    29,    15,    10,
      32,    86,    27,    32,    14,    15,   108,    92,    32,    32,
      27,    96,     2,     3,     4,    32,     0,    27,   103,    26,
       8,    14,    12,    13,    14,    15,    16,    17,    18,    26,
      37,    38,    34,    34,    31,   137,    33,    26,    35,    36,
      14,    32,    31,    34,    33,     6,    35,    36,    23,    24,
      25,    32,    32,    34,    34,    34,     6,    11,   160,    11,
      11,     3,     3,    34,    11,    11,    11,    11,    11,     3,
      34,    34,     3,    12,    12,    12,    34,     6,     6,     9,
       3,     8,    35,     3,   230,    34,    12,    12,    12,    -1,
      12,    12,     3,    12,    34,    12,    12,    12,    12,    34,
       3,    34,    34,     3,     3,     3,     3,     3,     3,     3,
      -1,    -1,    -1,    -1,     4,    19,    34,    10,    10,    10,
      29,    34,    34,    10,    34,     5,    34,    34,    34,    34,
       3,    10,    34,    34,     5,     4,    14,    14,    14,     3,
      29,     7,     7,    26,     3,     3,    34,    14,    34,    34,
      34,    33,    14,     3,     3,    36,    31,     3,    11,     7,
      34,     3,    34,   230,    11,     4,    11,    11,    11,     9,
       7,    34,     7,    34,    34,    29,     3,    34,    34,     3,
       3,     7,    34,    34,     6,     4,     7,     5,     3,     6,
       3,     3,     3,    34,     3,     9,    34,     5,    34,     9,
      34,    34,    34,    34,     7,    34,     7,    14
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    13,    14,    16,    17,    18,    22,    23,    24,    25,
      32,    40,    41,    42,    44,    45,    46,    47,    48,    49,
      51,    52,    10,    40,    40,    40,     6,     8,     6,    32,
      10,     0,    40,    40,    40,    40,    40,    40,    40,     6,
      32,     8,    14,    26,    37,    38,    34,    14,    34,     6,
      26,    31,    33,    35,    36,    34,     6,    14,    15,    27,
      50,    11,    11,    11,     3,    23,    49,    53,    54,     3,
      34,    11,    11,    11,    11,    11,     3,    34,    26,    31,
      33,    35,    36,    43,    34,     3,    12,    12,    12,    34,
       6,     6,     8,     9,    34,     3,    12,    12,    12,    12,
      12,    34,     3,    12,    12,    12,    12,    12,    43,     3,
      34,    50,    34,    34,     3,    34,    34,    50,     3,    34,
      32,    50,    29,    32,    32,    34,    32,    34,    32,    34,
       3,    34,    50,    29,    34,    34,    34,    43,    34,     3,
      19,     3,     3,     3,    34,     3,    10,    10,    10,    10,
       5,    10,     4,    34,     3,    14,    14,    14,     5,     4,
      43,     3,    29,     7,    34,    34,    34,     7,    34,    26,
      31,    33,    35,    36,     3,    34,    14,    14,    43,    34,
       3,     3,     3,     3,     7,    11,    11,    11,    11,    11,
      34,     3,     9,    34,    34,    34,    29,     7,    34,     4,
       7,     3,     3,     7,     3,     6,    34,    34,    34,    34,
       7,     4,     5,     3,     6,     3,     9,    34,    34,    34,
       3,     3,     5,    34,    34,     9,     7,     3,    14,    34,
      55,     7,    54
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    39,    40,    40,    40,    40,    40,    40,    40,    40,
      40,    40,    40,    41,    42,    43,    43,    43,    43,    43,
      44,    45,    45,    45,    45,    45,    45,    45,    45,    45,
      45,    46,    46,    46,    47,    48,    49,    49,    50,    50,
      51,    51,    52,    52,    53,    53,    54,    55,    54
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    14,     9,     4,     5,     4,     4,     5,
       2,     6,     6,     7,     6,     7,     9,     9,     9,     9,
       9,     6,     6,     6,     8,     5,     1,     1,     1,     6,
       8,    10,     9,    11,    15,    17,     0,     0,    17
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
#line 78 "parser.ypp" /* yacc.c:1646  */
    {
		std::cout << "Fin du fichier atteinte - Arrêt du parsing" << std::endl;
	}
#line 1404 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 94 "parser.ypp" /* yacc.c:1646  */
    {
		// On récupère la forme courante pour appliquer les options
		Forme *f = D->currentShape();
		f->set_color((yyvsp[-11].texte));
		f->set_thickness((yyvsp[-9].valeur_entiere));
		if (strcmp((yyvsp[-7].texte),"plein") == 0)
		{
			f->set_filling(PLEIN);
		}
		f->set_rotation((yyvsp[-5].valeur_entiere));
		f->set_opacity((yyvsp[-2].valeur_entiere));
	}
#line 1421 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 118 "parser.ypp" /* yacc.c:1646  */
    {
		// On récupère la forme courante pour appliquer les options
		Forme *f = D->currentShape();
		f->set_color((yyvsp[-1].texte));
	}
#line 1431 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 124 "parser.ypp" /* yacc.c:1646  */
    {
		// On récupère la forme courante pour appliquer les options
		Forme *f = D->currentShape();
		f->set_rotation((yyvsp[-2].valeur_entiere));
	}
#line 1441 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 130 "parser.ypp" /* yacc.c:1646  */
    {	
		// On récupère la forme courante pour appliquer les options
		Forme *f = D->currentShape();
		if (strcmp((yyvsp[-1].texte),"plein") == 0)
		{
			f->set_filling(PLEIN);
		}
	}
#line 1454 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 139 "parser.ypp" /* yacc.c:1646  */
    {
		// On récupère la forme courante pour appliquer les options
		Forme *f = D->currentShape();
		f->set_thickness((yyvsp[-1].valeur_entiere));
	}
#line 1464 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 145 "parser.ypp" /* yacc.c:1646  */
    {
		// On récupère la forme courante pour appliquer les options
		Forme *f = D->currentShape();
		f->set_opacity((yyvsp[-2].valeur_entiere));
	}
#line 1474 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 156 "parser.ypp" /* yacc.c:1646  */
    {
		// On récupère le nom de la variable dans une string
		std::string nom_variable = (yyvsp[-5].texte);

		// On cherche si la variable est associée à une forme et on retourne son index
  		D->map_iterator = D->variables.find(nom_variable);

  		// Si l'index existe alors on applique les changements
  		if (D->map_iterator != D->variables.end())
  		{
			// On récupère la forme courante pour appliquer les options
			Forme *f = D->shapeAt(D->map_iterator->second);
			f->set_thickness((yyvsp[0].valeur_entiere));
  		}
  		// Sinon on affiche une erreur
    	else
    	{
    		std::cout << "Erreur: la variable " << nom_variable << " n'a pas été définie" << std::endl;
    	}	
	}
#line 1499 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 177 "parser.ypp" /* yacc.c:1646  */
    {
		// On récupère le nom de la variable dans une string
		std::string nom_variable = (yyvsp[-5].texte);

		// On cherche si la variable est associée à une forme et on retourne son index
  		D->map_iterator = D->variables.find(nom_variable);

  		// Si l'index existe alors on applique les changements
  		if (D->map_iterator != D->variables.end())
  		{
			// On récupère la forme courante pour appliquer les options
			Forme *f = D->shapeAt(D->map_iterator->second);
			f->set_color((yyvsp[0].texte));
  		}
  		// Sinon on affiche une erreur
    	else
    	{
    		std::cout << "Erreur: la variable " << nom_variable << " n'a pas été définie" << std::endl;
    	}	
    }
#line 1524 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 198 "parser.ypp" /* yacc.c:1646  */
    {
		// On récupère le nom de la variable dans une string
		std::string nom_variable = (yyvsp[-6].texte);

		// On cherche si la variable est associée à une forme et on retourne son index
  		D->map_iterator = D->variables.find(nom_variable);

  		// Si l'index existe alors on applique les changements
  		if (D->map_iterator != D->variables.end())
  		{
			// On récupère la forme courante pour appliquer les options
			Forme *f = D->shapeAt(D->map_iterator->second);
			f->set_rotation((yyvsp[-1].valeur_entiere));
  		}
  		// Sinon on affiche une erreur
    	else
    	{
    		std::cout << "Erreur: la variable " << nom_variable << " n'a pas été définie" << std::endl;
    	}
	}
#line 1549 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 219 "parser.ypp" /* yacc.c:1646  */
    {	
		// On récupère le nom de la variable dans une string
		std::string nom_variable = (yyvsp[-5].texte);

		// On cherche si la variable est associée à une forme et on retourne son index
  		D->map_iterator = D->variables.find(nom_variable);

  		// Si l'index existe alors on applique les changements
  		if (D->map_iterator != D->variables.end())
  		{
			// On récupère la forme courante pour appliquer les options
			Forme *f = D->shapeAt(D->map_iterator->second);
				if (strcmp((yyvsp[0].texte),"plein") == 0)
				{
					f->set_filling(PLEIN);
				}
  		}
  		// Sinon on affiche une erreur
    	else
    	{
    		std::cout << "Erreur: la variable " << nom_variable << " n'a pas été définie" << std::endl;
    	}
   	}
#line 1577 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 243 "parser.ypp" /* yacc.c:1646  */
    {
		// On récupère le nom de la variable dans une string
		std::string nom_variable = (yyvsp[-6].texte);

		// On cherche si la variable est associée à une forme et on retourne son index
  		D->map_iterator = D->variables.find(nom_variable);

  		// Si l'index existe alors on applique les changements
  		if (D->map_iterator != D->variables.end())
  		{
			// On récupère la forme courante pour appliquer les options
			Forme *f = D->shapeAt(D->map_iterator->second);
			f->set_opacity((yyvsp[-1].valeur_entiere));
  		}
  		// Sinon on affiche une erreur
    	else
    	{
    		std::cout << "Erreur: la variable " << nom_variable << " n'a pas été définie" << std::endl;
    	}
	}
#line 1602 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 264 "parser.ypp" /* yacc.c:1646  */
    {
		// On récupère le nom des la variable dans des string
		std::string nom_variable_gauche = (yyvsp[-8].texte);
		std::string nom_variable_droite = (yyvsp[-3].texte);

		// On cherche si la variable gauche est associée à une forme et on retourne son index
  		D->map_iterator = D->variables.find(nom_variable_droite);

  		// Si l'index existe alors on applique les changements
  		if (D->map_iterator != D->variables.end())
  		{
			// On récupère de la variable gauche pour obtenir sa propriété
			Forme *f = D->shapeAt(D->map_iterator->second);
			int epaisseur = f->get_thickness();

			// On cherche si la variable droite est associée à une forme et on retourne son index
  			D->map_iterator = D->variables.find(nom_variable_gauche);

	  		// Si l'index existe alors on applique les changements
	  		if (D->map_iterator != D->variables.end())
	  		{
				// On récupère la forme courante pour appliquer les options
				f = D->shapeAt(D->map_iterator->second);
				f->set_thickness(epaisseur);
	  		}
	  		// Sinon on affiche une erreur
	    	else
	    	{
	    		std::cout << "Erreur: la variable " << nom_variable_gauche << " n'a pas été définie" << std::endl;
	    	}
  		}
  		// Sinon on affiche une erreur
    	else
    	{
    		std::cout << "Erreur: la variable " << nom_variable_droite << " n'a pas été définie" << std::endl;
    	}
	}
#line 1644 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 302 "parser.ypp" /* yacc.c:1646  */
    {
		// On récupère le nom des la variable dans des string
		std::string nom_variable_gauche = (yyvsp[-8].texte);
		std::string nom_variable_droite = (yyvsp[-3].texte);

		// On cherche si la variable gauche est associée à une forme et on retourne son index
  		D->map_iterator = D->variables.find(nom_variable_droite);

  		// Si l'index existe alors on applique les changements
  		if (D->map_iterator != D->variables.end())
  		{
			// On récupère de la variable gauche pour obtenir sa propriété
			Forme *f = D->shapeAt(D->map_iterator->second);
			QColor color = f->get_color();

			// On cherche si la variable droite est associée à une forme et on retourne son index
  			D->map_iterator = D->variables.find(nom_variable_gauche);

	  		// Si l'index existe alors on applique les changements
	  		if (D->map_iterator != D->variables.end())
	  		{
				// On récupère la forme courante pour appliquer les options
				f = D->shapeAt(D->map_iterator->second);
				f->set_color(color);
	  		}
	  		// Sinon on affiche une erreur
	    	else
	    	{
	    		std::cout << "Erreur: la variable " << nom_variable_gauche << " n'a pas été définie" << std::endl;
	    	}
  		}
  		// Sinon on affiche une erreur
    	else
    	{
    		std::cout << "Erreur: la variable " << nom_variable_droite << " n'a pas été définie" << std::endl;
    	}
	}
#line 1686 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 340 "parser.ypp" /* yacc.c:1646  */
    {
		// On récupère le nom des la variable dans des string
		std::string nom_variable_gauche = (yyvsp[-8].texte);
		std::string nom_variable_droite = (yyvsp[-3].texte);

		// On cherche si la variable gauche est associée à une forme et on retourne son index
  		D->map_iterator = D->variables.find(nom_variable_droite);

  		// Si l'index existe alors on applique les changements
  		if (D->map_iterator != D->variables.end())
  		{
			// On récupère de la variable gauche pour obtenir sa propriété
			Forme *f = D->shapeAt(D->map_iterator->second);
			int rotation = f->get_rotation();

			// On cherche si la variable droite est associée à une forme et on retourne son index
  			D->map_iterator = D->variables.find(nom_variable_gauche);

	  		// Si l'index existe alors on applique les changements
	  		if (D->map_iterator != D->variables.end())
	  		{
				// On récupère la forme courante pour appliquer les options
				f = D->shapeAt(D->map_iterator->second);
				f->set_rotation(rotation);
	  		}
	  		// Sinon on affiche une erreur
	    	else
	    	{
	    		std::cout << "Erreur: la variable " << nom_variable_gauche << " n'a pas été définie" << std::endl;
	    	}
  		}
  		// Sinon on affiche une erreur
    	else
    	{
    		std::cout << "Erreur: la variable " << nom_variable_droite << " n'a pas été définie" << std::endl;
    	}
	}
#line 1728 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 378 "parser.ypp" /* yacc.c:1646  */
    {
		// On récupère le nom des la variable dans des string
		std::string nom_variable_gauche = (yyvsp[-8].texte);
		std::string nom_variable_droite = (yyvsp[-3].texte);

		// On cherche si la variable gauche est associée à une forme et on retourne son index
  		D->map_iterator = D->variables.find(nom_variable_droite);

  		// Si l'index existe alors on applique les changements
  		if (D->map_iterator != D->variables.end())
  		{
			// On récupère de la variable gauche pour obtenir sa propriété
			Forme *f = D->shapeAt(D->map_iterator->second);
			Filling remplissage = f->get_filling();

			// On cherche si la variable droite est associée à une forme et on retourne son index
  			D->map_iterator = D->variables.find(nom_variable_gauche);

	  		// Si l'index existe alors on applique les changements
	  		if (D->map_iterator != D->variables.end())
	  		{
				// On récupère la forme courante pour appliquer les options
				f = D->shapeAt(D->map_iterator->second);
				f->set_filling(remplissage);
	  		}
	  		// Sinon on affiche une erreur
	    	else
	    	{
	    		std::cout << "Erreur: la variable " << nom_variable_gauche << " n'a pas été définie" << std::endl;
	    	}
  		}
  		// Sinon on affiche une erreur
    	else
    	{
    		std::cout << "Erreur: la variable " << nom_variable_droite << " n'a pas été définie" << std::endl;
    	}
	}
#line 1770 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 416 "parser.ypp" /* yacc.c:1646  */
    {
		// On récupère le nom des la variable dans des string
		std::string nom_variable_gauche = (yyvsp[-8].texte);
		std::string nom_variable_droite = (yyvsp[-3].texte);

		// On cherche si la variable gauche est associée à une forme et on retourne son index
  		D->map_iterator = D->variables.find(nom_variable_droite);

  		// Si l'index existe alors on applique les changements
  		if (D->map_iterator != D->variables.end())
  		{
			// On récupère de la variable gauche pour obtenir sa propriété
			Forme *f = D->shapeAt(D->map_iterator->second);
			int opacite = f->get_opacity();

			// On cherche si la variable droite est associée à une forme et on retourne son index
  			D->map_iterator = D->variables.find(nom_variable_gauche);

	  		// Si l'index existe alors on applique les changements
	  		if (D->map_iterator != D->variables.end())
	  		{
				// On récupère la forme courante pour appliquer les options
				f = D->shapeAt(D->map_iterator->second);
				f->set_opacity(opacite);
	  		}
	  		// Sinon on affiche une erreur
	    	else
	    	{
	    		std::cout << "Erreur: la variable " << nom_variable_gauche << " n'a pas été définie" << std::endl;
	    	}
  		}
  		// Sinon on affiche une erreur
    	else
    	{
    		std::cout << "Erreur: la variable " << nom_variable_droite << " n'a pas été définie" << std::endl;
    	}
	}
#line 1812 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 457 "parser.ypp" /* yacc.c:1646  */
    {
		D->m_longueur = (yyvsp[0].valeur_entiere);
	}
#line 1820 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 461 "parser.ypp" /* yacc.c:1646  */
    {
		D->m_hauteur = (yyvsp[0].valeur_entiere);
	}
#line 1828 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 465 "parser.ypp" /* yacc.c:1646  */
    {
		D->set_color((yyvsp[0].texte));
	}
#line 1836 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 471 "parser.ypp" /* yacc.c:1646  */
    {
		Image *i = new Image((yyvsp[-5].valeur_entiere),(yyvsp[-3].valeur_entiere),(yyvsp[-1].texte));
		D->m_formes.push_back(i);
	}
#line 1845 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 488 "parser.ypp" /* yacc.c:1646  */
    {
		std::string str = "#";
		std::string str2 = std::to_string((yyvsp[-4].valeur_entiere));

		str += str2;
		str += ",";

		std::string str3 = std::to_string((yyvsp[-2].valeur_entiere));
		str += str3;
		str += ",";

		std::string str4 = std::to_string((yyvsp[0].valeur_entiere));
		str += str4;

		// On retourne la chaine formatée Example: #255,255,255
		(yyval.texte) = (char *) str.c_str();
	}
#line 1867 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 508 "parser.ypp" /* yacc.c:1646  */
    {
		Cercle *c = new Cercle((yyvsp[-5].valeur_entiere),(yyvsp[-3].valeur_entiere),(yyvsp[-1].valeur_entiere));
		D->m_formes.push_back(c);
	}
#line 1876 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 513 "parser.ypp" /* yacc.c:1646  */
    {
		std::string nomForme((yyvsp[-9].texte));
		std::transform(nomForme.begin(), nomForme.end(), nomForme.begin(), ::tolower);

		if(nomForme == "rectangle")
		{
			Rectangle *r = new Rectangle((yyvsp[-7].valeur_entiere),(yyvsp[-5].valeur_entiere),(yyvsp[-3].valeur_entiere),(yyvsp[-1].valeur_entiere));
			D->m_formes.push_back(r);	
		}
		else if(nomForme == "ligne")
		{
			Ligne *l = new Ligne((yyvsp[-7].valeur_entiere),(yyvsp[-5].valeur_entiere),(yyvsp[-3].valeur_entiere),(yyvsp[-1].valeur_entiere));
			D->m_formes.push_back(l);
		}
	}
#line 1896 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 531 "parser.ypp" /* yacc.c:1646  */
    {
		Cercle *c = new Cercle((yyvsp[-5].valeur_entiere),(yyvsp[-3].valeur_entiere),(yyvsp[-1].valeur_entiere));
		D->m_formes.push_back(c);
		D->variables[(yyvsp[-7].texte)] = D->currentIndex();
	}
#line 1906 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 537 "parser.ypp" /* yacc.c:1646  */
    {
		std::string nomForme((yyvsp[-10].texte));
		std::transform(nomForme.begin(), nomForme.end(), nomForme.begin(), ::tolower);

		if(nomForme == "rectangle")
		{
			Rectangle *r = new Rectangle((yyvsp[-7].valeur_entiere),(yyvsp[-5].valeur_entiere),(yyvsp[-3].valeur_entiere),(yyvsp[-1].valeur_entiere));
			D->m_formes.push_back(r);	
		}
		else if(nomForme == "ligne")
		{
			Ligne *l = new Ligne((yyvsp[-7].valeur_entiere),(yyvsp[-5].valeur_entiere),(yyvsp[-3].valeur_entiere),(yyvsp[-1].valeur_entiere));
			D->m_formes.push_back(l);
		}
		D->variables[(yyvsp[-9].texte)] = D->currentIndex();
	}
#line 1927 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 556 "parser.ypp" /* yacc.c:1646  */
    {
		for(int i = 0; i < (yyvsp[-5].valeur_entiere); i++)
		{
			Cercle *c = new Cercle(((yyvsp[-12].valeur_entiere) + (i*(yyvsp[-3].valeur_entiere))),((yyvsp[-10].valeur_entiere) + (i*(yyvsp[-1].valeur_entiere))),(yyvsp[-8].valeur_entiere));
			D->m_formes.push_back(c);
		}
		// On retourne le nombre d'itérations pour pouvoir traiter les options
		(yyval.valeur_entiere) = (yyvsp[-5].valeur_entiere);
	}
#line 1941 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 566 "parser.ypp" /* yacc.c:1646  */
    {
		for(int i = 0; i < (yyvsp[-5].valeur_entiere); i++)
		{
			std::string nomForme((yyvsp[-16].texte));
			std::transform(nomForme.begin(), nomForme.end(), nomForme.begin(), ::tolower);

			if(nomForme == "rectangle")
			{
				Rectangle *r = new Rectangle(((yyvsp[-14].valeur_entiere) + (i*(yyvsp[-3].valeur_entiere))),((yyvsp[-12].valeur_entiere) + (i*(yyvsp[-1].valeur_entiere))),(yyvsp[-10].valeur_entiere),(yyvsp[-8].valeur_entiere));
				D->m_formes.push_back(r);	
			}
			else if(nomForme == "ligne")
			{
				Ligne *l = new Ligne(((yyvsp[-14].valeur_entiere) + (i*(yyvsp[-3].valeur_entiere))),((yyvsp[-12].valeur_entiere) + (i*(yyvsp[-1].valeur_entiere))),((yyvsp[-10].valeur_entiere) + (i*(yyvsp[-3].valeur_entiere))),((yyvsp[-8].valeur_entiere) + (i*(yyvsp[-1].valeur_entiere))));
				D->m_formes.push_back(l);
			}
		}
		// On retourne le nombre d'itérations pour pouvoir traiter les options
		(yyval.valeur_entiere) = (yyvsp[-5].valeur_entiere);
	}
#line 1966 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 590 "parser.ypp" /* yacc.c:1646  */
    {
		Forme *f;
		for(int i = 0; i < (yyvsp[-14].valeur_entiere); i++)
		{
			// On récupère la forme courante pour appliquer les options
			f = D->currentShape(i);
			f->set_color((yyvsp[-12].texte));
			f->set_thickness((yyvsp[-10].valeur_entiere));
			if (strcmp((yyvsp[-8].texte),"plein") == 0)
			{
				f->set_filling(PLEIN);
			}
			f->set_rotation((yyvsp[-6].valeur_entiere));
			f->set_opacity((yyvsp[-3].valeur_entiere));	
		}
	}
#line 1987 "parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 1991 "parser.tab.cpp" /* yacc.c:1646  */
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
#line 608 "parser.ypp" /* yacc.c:1906  */



void trace(QMainWindow * w, int argc , char ** argv ){
	// Si on passe un argument au programme
	if(argc > 1)
	{
		// On essaye d'ouvrir le fichier qui a pour chemin et argument
		yyin = fopen(argv[1], "r");
		// Si on échoue, on quitte le programme avec un message d'erreur
		if(yyin == nullptr)
		{
			std::cout << "Erreur - Le fichier passé en argument du programme est invalide" << std::endl;
			exit(EXIT_FAILURE);
		}
	}
	// Sinon on lit le fichier par défaut
	{
		yyin = fopen("forme.txt", "r");
		// Si on échoue, on quitte le programme avec un message d'erreur
		if(yyin == nullptr)
		{
			std::cout << "Impossible de trouver le fichier à parser par défaut(forme.txt)" << std::endl;
			exit(EXIT_FAILURE);
		}
	}

	D = new monDessin;	
	w->setCentralWidget(D);
    w->setMinimumSize(800, 600);

    // On remplit les attributs au cas où ils ne sont pas fournis dans le fichier texte
    D->m_longueur = 800;
    D->m_hauteur = 600;

    // On commence à parser
	yyparse();

	// On met à jour la fenêtre et on affiche les formes une fois le parsing terminé
	QPalette Pal(QApplication::palette());
	Pal.setColor(QPalette::Background, D->color);		
	w->setAutoFillBackground(true);
	w->setPalette(Pal);

	// On redimensionne la fenêtre
	w->resize(D->m_longueur, D->m_hauteur);
	D->draw();
	w->show();
	return	;
}





void yyerror(const std::string& mess){
    std::cout << mess << std::endl;
}
