%option nounput
%option yylineno

%{
#include <iostream>
#include <string>

using namespace std;

extern "C" int yylex(void);

#include "parser.tab.hpp"
%}
blancs    [ \t]
chiffre   [0-9]
entier    {chiffre}+
commentaire_multi	[/][*]([^*])*[*][/]
commentaire_mono	[/]{2,}.*
ligne				(l|L)(i|I)(g|G)(n|N)(e|E)
rectangle			(r|R)(e|E)(c|C)(t|T)(a|A)(n|N)(g|G)(l|L)(e|E)
cercle				(c|C)(e|E)(r|R)(c|C)(l|L)(e|E)
image				(i|I)(m|M)(a|A)(g|G)(e|E)
identificateur		([a-z])([a-z]|[A-Z]|{chiffre})*
string				[a-zA-Z0-9àâäèéêëîïôœùûüÿçÀÂÄÈÉÊËÎÏÔŒÙÛÜŸÇ]+
extension			(jpg|JPG|png|PNG)
path 				{string}[{string}| ]*[.]{extension}
couleur (rouge|vert|bleu|jaune|noir|blanc|gris)
remplissage (plein|vide)
boucler				(b|B)(o|O)(u|U)(c|C)(l|L)(e|E)(r|R)
%%

{blancs}   { /* On ignore */ }
"\n" { return(FIN_LIGNE);}
{commentaire_multi} { return(COMMENTAIRE_MULTI); }
{commentaire_mono} { return(COMMENTAIRE_MONO);}
{entier}    { yylval.valeur_entiere = atoi(yytext);	return(ENTIER); }
{cercle} { yylval.texte = strdup(yytext); return(CERCLE); }
{rectangle} { yylval.texte = strdup(yytext); return(RECTANGLE); }
{ligne} { yylval.texte = strdup(yytext); return(LIGNE); }
{image} { yylval.texte = strdup(yytext); return(IMAGE); }
{boucler} { yylval.texte = strdup(yytext); return(BOUCLER); }
{extension} { yylval.texte = strdup(yytext); yylval.texte = strdup(yytext); return(EXT_IMG); }
(e|é|E|É)(p|P)(a|A)(i|I)(s|S){2}(e|E)(u|U)(r|R) { return(EPAISSEUR); }
(c|C)(o|O)(u|U)(l|L)(e|E)(u|U)(r|R) { return(COULEUR); }
(o|O)(p|P)(a|A)(c|C)(i|I)(t|T)(e|é|E|É) { return(OPACITE); }
(r|R)(o|O)(t|T)(a|A)(t|T)(i|I)(o|O)(n|N) { return(ROTATION);  }
(r|R)(e|E)(m|M)(p|P)(l|L)(i|I)(s|S){2}(a|A)(g|G)(e|E) { return(REMPLISSAGE); }
(f|F)(e|E)(n|N)(e|E|ê)(t|T)(r|R)(e|E) { return(FENETRE); }
(l|L)(o|O)(n|N)(g|G)(u|U)(e|E)(u|U)(r|R) { return(LONGUEUR); }
(h|H)(a|A)(u|U)(t|T)(e|E)(u|U)(r|R) { return(HAUTEUR); }
{couleur} { yylval.texte = strdup(yytext); return(COLORNAME);}
{remplissage} { yylval.texte = strdup(yytext); return(FILLING);}
{path} { yylval.texte = strdup(yytext); return(PATH); }
{identificateur} { yylval.texte = strdup(yytext); return(IDENTIFICATEUR); }
"." { yylval.texte = strdup(yytext); return(DOT); }
"," { yylval.texte = strdup(yytext); return(VIRGULE); }
"°" { return(DEGRE); }
"%"	{ return(POURCENT); }
"("	{ return(PARENTHESE_OUVRANTE); }
")"	{ return(PARENTHESE_FERMANTE); }
"{"	{ return(ACCOLADE_OUVRANTE); }
"}"	{ return(ACCOLADE_FERMANTE); }
"["	{ return(CROCHET_OUVRANT);}
"]"	{ return(CROCHET_FERMANT); }
"="	{ return(EGAL); }
"#"	{ yylval.texte = strdup(yytext); return(HASHTAG); }
%%