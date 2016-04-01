#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

#include "forme.h"

class Rectangle : virtual public Forme
{
	private:
		int length;
		int height;
	
	public:
		Rectangle(int x, int y, int length, int height);
		
		int get_length() { return length; }
		int get_height() { return height; }
		
		void set_length(int length) { this->length = length; }
		void set_height(int height) { this->height = height; }
		
		~Rectangle() {};
};

#endif
