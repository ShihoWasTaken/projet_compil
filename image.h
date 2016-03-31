#ifndef IMAGE_H
#define IMAGE_H

#include <iostream>

#include "forme.h"

class Image : virtual public Forme 
{
	private:
		char * path;
	
	public:
		Image(int x, int y, char * path);
		
		char * get_path() { return path; }

		void set_path(char * path) { this->path = path; }

		std::ostream& print(std::ostream& out) const;

		friend std::ostream& operator<<(std::ostream& out, const Image & l) { return l.print(out); }
		
		~Image() {};
};

#endif
