#ifndef	FORME_H
#define	FORME_H

#include <QColor>

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
			if(strcmp(s, "blanc") == 0)
				this->color = QColor(255,255,255);
			else if(strcmp(s, "bleu") == 0)
				this->color = QColor(255,255,255);
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
		}
		void set_thickness(int thickness) 	{ this->thickness = thickness; }
		void set_filling(Filling filling)	{ this->filling = filling; }
		void set_rotation(int rotation)		{ this->rotation = rotation; }
		void set_opacity(int opacity)		{ this->opacity = opacity; }		
};



#endif