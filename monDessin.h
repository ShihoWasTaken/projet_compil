#ifndef MONDESSIN_H
#define MONDESSIN_H

#include <QtGui>
#include <QMainWindow>
#include <vector>


#include "forme.h"
#include "rectangle.h"
#include "cercle.h"
#include "ligne.h"
#include "image.h"

class monDessin:public QWidget
{
	Q_OBJECT

	private:

	public:
		monDessin(QWidget * parent=0, Qt::WindowFlags flags=0);
		~monDessin();
		void paintEvent(QPaintEvent *event);
		void draw() {update();}
		void dessinerImage(Image *image);
		void dessinerRectangle(Rectangle *rectangle);
		void dessinerCercle(Cercle *cercle);
		void dessinerLigne(Ligne *ligne);
		// On retourne la forme courante afin de pouvoir appliquer les options ensuite
		Forme * currentShape()	{ return this->m_formes.at(this->m_formes.size()-1); }


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

		std::vector<Forme *> m_formes;	// Vecteur contenant toutes les formes à afficher
		int m_longueur;					// Longueur de la fenêtre
		int m_hauteur;					// Hauteur de la fenêtre
		QColor color;				// COuleur de la fenêtre

};


#endif
