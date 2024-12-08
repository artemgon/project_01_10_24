#include "classes.h"

int main()
{
	Wheels w(19); // inches
	Engine e(540); 
	Doors d(2);
	Seats s(4);
	Boot b(240);
	Car c(w.getDiameter(), e.getPower(), d.getQuantity_1(), s.getQuantity_2(), b.getVolume());
	c.printFunc();
	return 0;
}