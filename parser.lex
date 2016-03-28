%option nounput
%option yylineno

%{
#include <iostream>
#include <string>

using namespace std;

extern "C" int yylex(void);

#include "parser.tab.hpp"
%}
blancs    [ \t\n]

chiffre   [0-9]
entier    {chiffre}+
commentaire_multi	(\/\*(.*)\*\/|\\)
commentaire_mono	[/]{2,}.*

%%

{blancs}   { /* On ignore */ }

{commentaire_multi} { cout << "Trouvé un commentaire multiligne: " << yytext << endl; }
{commentaire_mono} { cout << "Trouvé un commentaire monoligne: " << yytext << endl; }

{entier}    {
				yylval=atoi(yytext);
				cout << "Trouvé un entier: " << yytext << endl;
				//return(NOMBRE);
		    }

(c|C)(e|E)(r|R)(c|C)(l|L)(e|E) { cout << "Trouvé un cercle: " << yytext << endl; }
(r|R)(e|E)(c|C)(t|T)(a|A)(n|N)(g|G)(l|L)(e|E) { cout << "Trouvé un rectangle: " << yytext << endl; }
(l|L)(i|I)(g|G)(n|N)(e|E) { cout << "Trouvé une ligne: " << yytext << endl; }

(e|é|E|É)(p|P)(a|A)(i|I)(s|S){2}(e|E)(u|U)(r|R) { cout << "Trouvé une épaisseur: " << yytext << endl; }
(c|C)(o|O)(u|U)(l|L)(e|E)(u|U)(r|R) { cout << "Trouvé une couleur: " << yytext << endl; }
(o|O)(p|P)(a|A)(c|C)(i|I)(t|T)(e|é|E|É) { cout << "Trouvé une opacité: " << yytext << endl; }
(r|R)(o|O)(t|T)(a|A)(t|T)(i|I)(o|O)(n|N) { cout << "Trouvé une rotation: " << yytext << endl; }
(r|R)(e|E)(m|M)(p|P)(l|L)(i|I)(s|S){2}(a|A)(g|G)(e|E) { cout << "Trouvé un remplissage: " << yytext << endl; }

[A-Za-z]([a-z]|[A-Z]|[0-9])* { cout << "Trouvé un identificateur: " << yytext << endl; }

"," { cout << "Trouvé une virgule: " << yytext << endl; }
"°" { cout << "Trouvé un degré: " << "\xc2\xb0" << endl; }
"%"	{ cout << "Trouvé un %: " << yytext << endl; }
"("	{ cout << "Trouvé une paranthèse: " << yytext << endl; }
")"	{ cout << "Trouvé une paranthèse: " << yytext << endl; }
"{"	{ cout << "Trouvé une accolade: " << yytext << endl; }
"}"	{ cout << "Trouvé une accolade: " << yytext << endl; }
"["	{ cout << "Trouvé un crochet: " << yytext << endl; }
"]"	{ cout << "Trouvé un crochet: " << yytext << endl; }
"="	{ cout << "Trouvé un égal: " << yytext << endl; }
%%
