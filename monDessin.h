#ifndef MONDESSIN_H
#define MONDESSIN_H

#include <QtGui>
#include <QMainWindow>
#include <vector>


#include "forme.h"
#include "rectangle.h"
#include "cercle.h"
#include "ligne.h"

class monDessin:public QWidget
{
	Q_OBJECT

	private:

	public:
		monDessin(QWidget * parent=0, Qt::WindowFlags flags=0);
		~monDessin();
		void paintEvent(QPaintEvent *event);
		void draw() {update();}
		void dessinerRectangle(Rectangle *rectangle);
		void dessinerCercle(Cercle *cercle);
		void dessinerLigne(Ligne *ligne);
		// On retourne la forme courante afin de pouvoir appliquer les options ensuite
		Forme * currentShape()	{ return this->m_formes.at(this->m_formes.size()-1); }


		void set_color(char *s)
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
		}

		std::vector<Forme *> m_formes;	// Vecteur contenant toutes les formes à afficher
		int m_longueur;					// Longueur de la fenêtre
		int m_hauteur;					// Hauteur de la fenêtre
		QColor color;				// COuleur de la fenêtre

};


#endif
