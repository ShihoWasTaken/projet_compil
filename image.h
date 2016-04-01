#ifndef IMAGE_H
#define IMAGE_H

#include <iostream>
#include <QString>

#include "forme.h"

class Image : virtual public Forme 
{
	private:
		char * path;
		QString QPath;
	
	public:
		Image(int x, int y, char * path);
		
		char * get_path() { return path; }
		void set_path(char * path) { this->path = path; }

		QString get_QPath() { return QPath; }
		void set_QPath(QString QPath) { this->QPath = QPath; }
		
		~Image() {};
};

#endif
