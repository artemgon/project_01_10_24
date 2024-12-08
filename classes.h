#include "libs.h"

class Circle
{
protected:
	double radius;
public:
	Circle(double r = 0) : radius(r) {}
	double getRadius() const { return radius; }
	void setRadius(double r) { radius = r; }
	double getArea() const { return 3.14159 * radius * radius; }
	double getDiameter() const { return 2 * radius; }
	double getCircumference() const { return 2 * 3.14159 * radius; }
	virtual void printFunc() const
	{
		cout << "Circle: " << endl;
		cout << "Radius: " << radius << endl;
		cout << "Diameter: " << getDiameter() << endl;
		cout << "Circumference: " << getCircumference() << endl;
		cout << "Area: " << getArea() << endl;
		cout << endl;
	}
	~Circle() = default;
};

class Square
{
protected:
	double side;
public:
	Square(double s = 0) : side(s) {}
	double getSide() const { return side; }
	void setSide(double s) { side = s; }
	double getArea() const { return side * side; }
	double getPerimeter() const { return 4 * side; }
	virtual void printFunc() const
	{
		cout << "Square: " << endl;
		cout << "Side: " << side << endl;
		cout << "Area: " << getArea() << endl;
		cout << "Perimeter: " << getPerimeter() << endl;
		cout << endl;
	}
	~Square() = default;
};

class InscridedCircle : public Circle, public Square
{
public:
	InscridedCircle(double r) : Circle(r), Square(2 * r) {}
	void printFunc() const override
	{
		cout << "Inscrided Circle: " << endl;
		cout << endl;
		Circle::printFunc();
		Square::printFunc();
	}
	~InscridedCircle() = default;
};