#include "image.h"

using namespace std;

Image::Image(int x, int y, char * path) : Forme(x, y), path(path), QPath(path) {}

ostream& Image::print(ostream & out) const {
	out << "Image :" << endl;
	out << "\t X1 : " << x << endl;
	out << "\t Y1 : " << y << endl;
	out << "\t Path : " << path << endl;
	out << "\t Couleur : (" << color.red() << "," << color.green() << "," << color.blue() << ")" << endl;
	out << "\t Epaisseur : " << thickness << endl;
	out << "\t Remplissage : " << filling << endl;
	out << "\t Rotation : " << rotation << "°" << endl;
	out << "\t Opacité : " << opacity << "%" <<endl;
	
    return out;
}