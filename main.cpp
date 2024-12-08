#include "classes.h"

int main()
{
	Base<int, double> base(1, 2.0);
	Child<int, double> child(3, 4.0);
	Child2<int, double> child2(5, 6.0);
	base.printFunc();
	child.printFunc();
	child2.printFunc();
	Base<int, double> base1;
	base1 = base;
	base1.printFunc();
	Child<int, double> child_1;
	child_1 = child;
	child_1.printFunc();
	Child2<int, double> child2_1;
	child2_1 = child2;
	child2_1.printFunc();
	base.setValues(7, 8.0);
	child.setValues(9, 10.0);
	child2.setValues(11, 12.0);
	base.printFunc();
	child.printFunc();
	child2.printFunc();
	Base <int, double> base2;
	base2 = base + base1;
	base2.printFunc();
	Child<int, double> child_2;
	child_2 = child * child_1;
	child_2.printFunc();
	Child2<int, double> child2_2;
	child2_2 = child2 / child2_1;
	child2_2.printFunc();
	Child2 <int, double> child2_3;
	child2_3 = child2 - child2_1;
	child2_3.printFunc();
	return 0;
}