#ifndef CERCLE_H
#define CERCLE_H

#include <iostream>

#include "forme.h"

class Cercle : virtual public Forme {
	private:
		int radius;
	
	public:
		Cercle(int x, int y, int radius);
		
		int get_radius() { return radius; }
		
		void set_radius(int radius) { this->radius = radius; }

		std::ostream& print(std::ostream& out) const;

		friend std::ostream& operator<<(std::ostream& out, const Cercle & c) { return c.print(out); }
		
		~Cercle() {};
};

#endif
