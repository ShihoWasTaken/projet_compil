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

commentaire_multi	\/\\*(.*?)\\*\/

commentaire_mono	[/]{2,}.*

ligne				(l|L)(i|I)(g|G)(n|N)(e|E)
rectangle			(r|R)(e|E)(c|C)(t|T)(a|A)(n|N)(g|G)(l|L)(e|E)
cercle				(c|C)(e|E)(r|R)(c|C)(l|L)(e|E)

couleur (rouge|vert|bleu|jaune|noir|blanc)
remplissage (plein|vide)

%%

{blancs}   { /* On ignore */ }

{commentaire_multi} { cout << "Trouvé un commentaire multiligne: " << yytext << endl; }
{commentaire_mono} { cout << "Trouvé un commentaire monoligne: " << yytext << endl; }

{entier}    {
				yylval=atoi(yytext);
				cout << "Trouvé un entier: " << yytext << endl;
				return(ENTIER);
		    }

{cercle} { cout << "Trouvé un cercle: " << yytext << endl; return(CERCLE); }
{rectangle} { cout << "Trouvé un rectangle: " << yytext << endl; return(RECTANGLE); }
{ligne} { cout << "Trouvé une ligne: " << yytext << endl; return(LIGNE); }

(e|é|E|É)(p|P)(a|A)(i|I)(s|S){2}(e|E)(u|U)(r|R) { cout << "Trouvé une épaisseur: " << yytext << endl; return(EPAISSEUR); }
(c|C)(o|O)(u|U)(l|L)(e|E)(u|U)(r|R) { cout << "Trouvé une couleur: " << yytext << endl; return(COULEUR); }
(o|O)(p|P)(a|A)(c|C)(i|I)(t|T)(e|é|E|É) { cout << "Trouvé une opacité: " << yytext << endl; return(OPACITE); }
(r|R)(o|O)(t|T)(a|A)(t|T)(i|I)(o|O)(n|N) { cout << "Trouvé une rotation: " << yytext << endl; return(ROTATION);  }
(r|R)(e|E)(m|M)(p|P)(l|L)(i|I)(s|S){2}(a|A)(g|G)(e|E) { cout << "Trouvé un remplissage: " << yytext << endl; return(REMPLISSAGE); }


{couleur} { cout << "Trouvé une couleur: " << yytext << endl; return(COULEUR);}
{remplissage} { cout << "Trouvé un remplissage: " << yytext << endl; return(REMPLISSAGE);}

[A-Za-z]([a-z]|[A-Z]|[0-9])* { cout << "Trouvé un identificateur: " << yytext << endl; return(IDENTIFICATEUR); }

[\n] { cout << "Trouvé un \\n(fin): " << endl; return(FIN);}
"," { cout << "Trouvé une virgule: " << yytext << endl; return(VIRGULE); }
"°" { cout << "Trouvé un degré: " << "\xc2\xb0" << endl; return(DEGRE); }
"%"	{ cout << "Trouvé un %: " << yytext << endl; return(POURCENT); }
"("	{ cout << "Trouvé une paranthèse: " << yytext << endl; return(PARENTHESE_OUVRANTE); }
")"	{ cout << "Trouvé une paranthèse: " << yytext << endl; return(PARENTHESE_FERMANTE); }
"{"	{ cout << "Trouvé une accolade: " << yytext << endl; return(ACCOLADE_OUVRANTE); }
"}"	{ cout << "Trouvé une accolade: " << yytext << endl; return(ACCOLADE_FERMANTE); }
"["	{ cout << "Trouvé un crochet: " << yytext << endl; return(CROCHET_OUVRANT);}
"]"	{ cout << "Trouvé un crochet: " << yytext << endl; return(CROCHET_FERMANT); }
"="	{ cout << "Trouvé un égal: " << yytext << endl; return(EGAL); }
%%
