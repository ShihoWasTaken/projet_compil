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

		std::vector<Forme *> m_formes;
		int m_longueur;
		int m_hauteur;

};


#endif
