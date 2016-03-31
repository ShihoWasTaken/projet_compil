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

		std::vector<Forme *> m_formes;	// Vecteur contenant toutes les formes à afficher
		int m_longueur;	// Longueur de la fenêtre
		int m_hauteur;	// Hauteur de la fenêtre

};


#endif
