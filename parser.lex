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

path 				^.*\.(jpg|JPG|png|PNG)$
extension			(jpg|JPG|png|PNG)

identificateur 		[A-Za-z]([a-z]|[A-Z]|[0-9])*

couleur (rouge|vert|bleu|jaune|noir|blanc|gris)
remplissage (plein|vide)

boucler				(b|B)(o|O)(u|U)(c|C)(l|L)(e|E)(r|R)

%%

{blancs}   { /* On ignore */ }

"\n" { cout << "Trouvé un \\n(fin): " << endl; return(FIN_LIGNE);}
{commentaire_multi} { cout << "Trouvé un commentaire multiligne: " << yytext << endl; return(COMMENTAIRE_MULTI); }
{commentaire_mono} { cout << "Trouvé un commentaire monoligne: " << yytext << endl; return(COMMENTAIRE_MONO);}

{entier}    {
				yylval.valeur_entiere = atoi(yytext);
				cout << "Trouvé un entier: " << yytext << endl;
				return(ENTIER);
		    }

{cercle} { yylval.texte = strdup(yytext); return(CERCLE); }
{rectangle} { yylval.texte = strdup(yytext); return(RECTANGLE); }
{ligne} { yylval.texte = strdup(yytext); return(LIGNE); }
{image} { yylval.texte = strdup(yytext); return(IMAGE); }
{boucler} { yylval.texte = strdup(yytext); return(BOUCLER); }



{extension} { yylval.texte = strdup(yytext); yylval.texte = strdup(yytext); return(EXT_IMG); }
{path}(.jpg) { yylval.texte = strdup(yytext); return(PATH); }


(e|é|E|É)(p|P)(a|A)(i|I)(s|S){2}(e|E)(u|U)(r|R) { cout << "Trouvé une épaisseur: " << yytext << endl; return(EPAISSEUR); }
(c|C)(o|O)(u|U)(l|L)(e|E)(u|U)(r|R) { cout << "Trouvé une couleur: " << yytext << endl; return(COULEUR); }
(o|O)(p|P)(a|A)(c|C)(i|I)(t|T)(e|é|E|É) { cout << "Trouvé une opacité: " << yytext << endl; return(OPACITE); }
(r|R)(o|O)(t|T)(a|A)(t|T)(i|I)(o|O)(n|N) { cout << "Trouvé une rotation: " << yytext << endl; return(ROTATION);  }
(r|R)(e|E)(m|M)(p|P)(l|L)(i|I)(s|S){2}(a|A)(g|G)(e|E) { cout << "Trouvé un remplissage: " << yytext << endl; return(REMPLISSAGE); }

(f|F)(e|E)(n|N)(e|E|ê)(t|T)(r|R)(e|E) { cout << "Trouvé une fenêtre: " << yytext << endl; return(FENETRE); }
(l|L)(o|O)(n|N)(g|G)(u|U)(e|E)(u|U)(r|R) { cout << "Trouvé une longueur: " << yytext << endl; return(LONGUEUR); }
(h|H)(a|A)(u|U)(t|T)(e|E)(u|U)(r|R) { cout << "Trouvé une hauteur: " << yytext << endl; return(HAUTEUR); }





{couleur} { cout << "Trouvé une couleur: " << yytext << endl; yylval.texte = strdup(yytext); return(COLORNAME);}
{remplissage} { cout << "Trouvé un remplissage: " << yytext << endl; yylval.texte = strdup(yytext); return(FILLING);}

{identificateur} { cout << "Trouvé un identificateur: " << yytext << endl; yylval.texte = strdup(yytext); return(IDENTIFICATEUR); }

"." { cout << "Trouvé un point: " << yytext << endl; yylval.texte = strdup(yytext); return(DOT); }
"," { cout << "Trouvé une virgule: " << yytext << endl; yylval.texte = strdup(yytext); return(VIRGULE); }
"°" { cout << "Trouvé un degré: " << "\xc2\xb0" << endl; return(DEGRE); }
"%"	{ cout << "Trouvé un %: " << yytext << endl; return(POURCENT); }
"("	{ cout << "Trouvé une paranthèse: " << yytext << endl; return(PARENTHESE_OUVRANTE); }
")"	{ cout << "Trouvé une paranthèse: " << yytext << endl; return(PARENTHESE_FERMANTE); }
"{"	{ cout << "Trouvé une accolade: " << yytext << endl; return(ACCOLADE_OUVRANTE); }
"}"	{ cout << "Trouvé une accolade: " << yytext << endl; return(ACCOLADE_FERMANTE); }
"["	{ cout << "Trouvé un crochet: " << yytext << endl; return(CROCHET_OUVRANT);}
"]"	{ cout << "Trouvé un crochet: " << yytext << endl; return(CROCHET_FERMANT); }
"="	{ cout << "Trouvé un égal: " << yytext << endl; return(EGAL); }
"#"	{ cout << "Trouvé un hashtag: " << yytext << endl; yylval.texte = strdup(yytext); return(HASHTAG); }
%%