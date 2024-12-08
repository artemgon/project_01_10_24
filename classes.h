#include "libs.h"

class Wheels
{
protected:
	int diameter;
public:
	Wheels(int d) : diameter(d) {}
	int getDiameter()
	{
		return diameter;
	}
	virtual void printFunc()
	{
		cout << "Diameter: " << diameter << endl;
	}
	~Wheels() = default;
};

class Engine
{
protected:
	int power;
public:
	Engine(int p) : power(p) {}
	int getPower()
	{
		return power;
	}
	virtual void printFunc()
	{
		cout << "Power: " << power << endl;
	}
	~Engine() = default;
};

class Doors
{
protected:
	int quantity_1;
public:
	Doors(int q) : quantity_1(q) {}
	int getQuantity_1()
	{
		return quantity_1;
	}
	virtual void printFunc()
	{
		cout << "quantity_1: " << quantity_1 << endl;
	}
	~Doors() = default;
};

class Seats
{
protected:
	int quantity_2;
public:
	Seats(int q) : quantity_2(q) {}
	int getQuantity_2()
	{
		return quantity_2;
	}
	virtual void printFunc()
	{
		cout << "quantity_2: " << quantity_2 << endl;
	}
	~Seats() = default;
};

class Boot
{
protected:
	int volume;
public:
	Boot(int v) : volume(v) {}
	int getVolume()
	{
		return volume;
	}
	virtual void printFunc()
	{
		cout << "Volume: " << volume << endl;
	}
	~Boot() = default;
};

class Car : public Wheels, public Engine, public Doors, public Seats, public Boot
{
public:
	Car(int d, int p, int q1, int q2, int v) : Wheels(d), Engine(p), Doors(q1), Seats(q2), Boot(v) {}
	void printFunc()
	{
		cout << "Car:" << endl;
		cout << endl;
		Wheels::printFunc();
		Engine::printFunc();
		Doors::printFunc();
		Seats::printFunc();
		Boot::printFunc();
	}
	~Car() = default;
};