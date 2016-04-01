#ifndef	FORME_H
#define	FORME_H

#include <iostream>
#include <QColor>
#include <string>
#include <vector>
#include <sstream>
#include <utility>

#include "filling.h"

class Forme
{
	/// Propriétés protected qui seront héritées par Rectangle, Cercle et Ligne
	protected:
		int x;				// Abcisse
		int y;				// Ordonnée
		QColor color;		// Couleur
		int thickness;		// Epaisseur
		Filling filling;	// Etat de remplissage
		int rotation;		// Rotation
		int opacity;		// Opacité
		
	public:
		// Constructeur(s)
		Forme(int x, int y) : x(x), y(y), color(0,0,0), thickness(1), filling(VIDE), rotation(0), opacity(100) {};

		// Destructeur(s)
		virtual ~Forme() {};

		// Getter(s)
		int get_x() 					{ return x; }
		int get_y() 					{ return y; }
		QColor get_color()				{ return color; }
		int get_thickness() 			{ return thickness; }
		Filling get_filling()			{ return filling; }
		int get_rotation()				{ return rotation; }
		int get_opacity()				{ return opacity; }
		int alpha()							{ return opacity / 100; }
		QColor get_color_alpha()
		{
			int alpha = (opacity * 255) / 100;
			QColor c(color.red(), color.green(), color.blue(), alpha);
			return c;
		}

		// Setter(s)
		void set_x(int x) 				{ this->x = x; }
		void set_y(int y) 				{ this->y = y; }
		void set_color(QColor color) 	{ this->color = color; }
		void set_color(char *s)
		{
			// Cas #R,G,B
			if(s[0] == '#')
			{
				// On utilise un conteneur string pour la simplicité
				std::string str = s;

				// On supprime le #
				str.erase(0, 1);

				// On crée un vecteur de 3 strings qui contiendra les valeurs R G et B
				std::vector<std::string>  v = explode(str, ',');

				// On convertit les string en int
				int rouge = std::stoi(v[0]);
				int vert = std::stoi(v[1]);
				int bleu = std::stoi(v[2]);

				// On met à jour la couleur
				this->color = QColor(rouge,vert,bleu);
			}
			// Cas nom de la couleur (vert...etc) et cas d'erreur
			else
			{
				if(strcmp(s, "blanc") == 0)
					this->color = QColor(255,255,255);
				else if(strcmp(s, "bleu") == 0)
					this->color = QColor(0,0,255);
				else if(strcmp(s, "gris") == 0)
					this->color = QColor(127,127,127);
				else if(strcmp(s, "jaune") == 0)
					this->color = QColor(255,255,0);
				else if(strcmp(s, "noir") == 0)
					this->color = QColor(0,0,0);
				else if(strcmp(s, "rouge") == 0)
					this->color = QColor(255,0,0);
				else if(strcmp(s, "vert") == 0)
					this->color = QColor(0,255,0);
				// Cas d'erreur
				else
					std::cout << "La couleur demandé n'est pas disponible" << std::endl;
			}
		}
		void set_thickness(int thickness) 	{ this->thickness = thickness; }
		void set_filling(Filling filling)	{ this->filling = filling; }
		void set_rotation(int rotation)		{ this->rotation = rotation; }
		void set_opacity(int opacity)		{ this->opacity = opacity; }		

		// Autre

		// Fonction qui permet de split une string en fonction d'un délimiteur
		std::vector<std::string> explode(std::string const & s, char delim)
		{
		    std::vector<std::string> result;
		    std::istringstream iss(s);

		    for (std::string token; std::getline(iss, token, delim); )
		    {
		        result.push_back(std::move(token));
		    }

		    return result;
		}
};



#endif