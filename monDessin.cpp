#include "monDessin.h"
#include <sstream>
#include <iostream>
using namespace std;

extern void trace(const char*);

monDessin::monDessin(QWidget * parent, Qt::WindowFlags flags)
:QWidget(parent,flags)
{

}

monDessin::~monDessin()
{

}

void monDessin::paintEvent(QPaintEvent *event)
{
	// On caste en string
	cout << "taille du vecteur = " << m_formes.size() << endl;
    for (std::string forme : m_formes ) 
	{
	    cout << "On dessine un rectangle du vecteur" << endl;
		cout << "Texte: " <<  forme << endl;
		for(int i = 0; forme[i]; i++){
		  forme[i] = tolower(forme[i]);
		}
		if(forme == "rectangle")
		{
			QRect rect = event->rect();
			dessinerRectangle(rect);
	    	cout << "rectangle" << endl;
		}
	    else if(forme == "cercle")
		{
			QRect rect = event->rect();
			dessinerCercle();
	    	cout << "cercle" << endl;
		}
	    else if(forme == "ligne")
		{
			QRect rect = event->rect();
			dessinerRectangle(rect);
	    	cout << "ligne" << endl;
		}
	}
}

void monDessin::dessinerRectangle(QRect &rect)
{
	QPainter p(this);

	QPen pe;
	pe.setWidth(5);
	p.setBrush(Qt::yellow);
	pe.setBrush(Qt::green);
	p.setPen(pe);
	p.drawRect(QRect(10,15,20,25));
	p.rotate(45);
	p.setOpacity(0.5);
}

void monDessin::dessinerCercle()
{
	QPainter p(this);
	QPen pe;
	QColor color = Qt::green;
	
	// Couleur & Opacité
	pe.setBrush(color);
	// Epaisseur
	pe.setWidth(5);
	// Remplissage
	//if(C->get_filling() == plein)
		p.setBrush(color);
	p.setPen(pe);
	
	p.drawEllipse(1,
	 1,
	  50,
	   50);
	// Rotation
	p.rotate(0);
}