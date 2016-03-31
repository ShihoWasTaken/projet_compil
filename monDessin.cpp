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
	// On parcourt le vecteur de Formes
    for (Forme * forme : m_formes ) 
	{
		// On caste la forme en les 3 classes filles
		// Cela permet de retrouver son "type"
		// Si le cast échoue, le pointeur vaudra null
		Cercle * C = dynamic_cast<Cercle *> (forme);
		Rectangle * R = dynamic_cast<Rectangle *> (forme);
		Ligne * L = dynamic_cast<Ligne *> (forme);
		Image * I = dynamic_cast<Image *> (forme);
		if(C != nullptr)
		{
			dessinerCercle(C);
		}
		else if(R != nullptr)
		{
			dessinerRectangle(R);
		}
		else if(L != nullptr)
		{
			dessinerLigne(L);
		}
		else if(I != nullptr)
		{
			dessinerImage(I);
		}
	}
}

void monDessin::dessinerImage(Image * image)
{
	// On définit le painter
	QPainter painter(this);

	painter.drawImage(image->get_x(),image->get_y(),QImage(image->get_path()));

}

void monDessin::dessinerRectangle(Rectangle *rectangle)
{
	// On définit le painter et le pen
	QPainter painter(this);
	QPen pen;
		
	// Couleur RBGA gérant l'opacité
	pen.setBrush(rectangle->get_color_alpha());

	// On fixe l'épaisseur du pen
	pen.setWidth(rectangle->get_thickness());

	// On remplit ou non
	if(rectangle->get_filling() == PLEIN)
	{
		painter.setBrush(rectangle->get_color_alpha());
	}

	// On fixe le pen au painter
	painter.setPen(pen);	

	// On dessine un rectangle
	painter.drawRect(rectangle->get_x(), rectangle->get_y(), rectangle->get_length(), rectangle->get_width());

	// On effectue la rotation
	painter.rotate(rectangle->get_rotation());
}

void monDessin::dessinerCercle(Cercle *cercle)
{
	// On définit le painter et le pen
	QPainter painter(this);
	QPen pen;
	
	// Couleur RBGA gérant l'opacité
	pen.setBrush(cercle->get_color_alpha());

	// On fixe l'épaisseur du pen
	pen.setWidth(cercle->get_thickness());

	// On remplit ou non
	if(cercle->get_filling() == PLEIN)
	{
		painter.setBrush(cercle->get_color_alpha());
	}

	// On fixe le pen au painter
	painter.setPen(pen);

	// On dessine un cercle (ellipse avec 2 même radius)
	painter.drawEllipse(cercle->get_x()-cercle->get_radius(), cercle->get_y()-cercle->get_radius(), cercle->get_radius() * 2, cercle->get_radius() * 2);

	// On effectue la rotation
	painter.rotate(cercle->get_rotation());
}


void monDessin::dessinerLigne(Ligne *ligne)
{
	// On définit le painter et le pen
	QPainter painter(this);
	QPen pen;
	
	// Couleur RBGA gérant l'opacité
	pen.setBrush(ligne->get_color_alpha());

	// On fixe l'épaisseur du pen
	pen.setWidth(ligne->get_thickness());

	// On remplit ou non
	if(ligne->get_filling() == PLEIN)
	{
		painter.setBrush(ligne->get_color_alpha());
	}

	// On fixe le pen au painter
	painter.setPen(pen);

	// On dessine la ligne
	painter.drawLine(ligne->get_x(), ligne->get_y(), ligne->get_x_end(), ligne->get_y_end());

	// On effectue la rotation
	painter.rotate(ligne->get_rotation());
}