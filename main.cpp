#include "classes.h"

int main()
{
	Circle c(5);
	c.printFunc();
	Square s(5);
	s.printFunc();
	c.setRadius(10);
	c.printFunc();
	s.setSide(20);
	s.printFunc();
	InscridedCircle ic(10);
	ic.printFunc();
	return 0;
}