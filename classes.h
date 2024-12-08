#include "libs.h"

template<typename T1, typename T2>
class Base
{
protected:
	T1 _value1;
	T2 _value2;
public:
	Base() : _value1(0), _value2(0) {}
	Base(T1 value1, T2 value2) : _value1(value1), _value2(value2) {}
	Base(const Base& other) : _value1(other._value1), _value2(other._value2) {}
	void setValues(T1 value1, T2 value2)
	{
		_value1 = value1;
		_value2 = value2;
	}
	Base& operator=(const Base& other)
	{
		_value1 = other._value1;
		_value2 = other._value2;
		return *this;
	}
	Base operator+(const Base& other) const
	{
		Base temp;
		temp._value1 = _value1 + other._value1;
		temp._value2 = _value2 + other._value2;
		return temp;
	}
	Base operator-(const Base& other) const
	{
		Base temp;
		temp._value1 = _value1 - other._value1;
		temp._value2 = _value2 - other._value2;
		return temp;
	}
	Base operator*(const Base& other) const
	{
		Base temp;
		temp._value1 = _value1 * other._value1;
		temp._value2 = _value2 * other._value2;
		return temp;
	}
	Base operator/(const Base& other) const
	{
		Base temp;
		temp._value1 = _value1 / other._value1;
		temp._value2 = _value2 / other._value2;
		return temp;
	}
	virtual void printFunc() const
	{
		cout << endl;
		cout << "Base: " << _value1 << " " << _value2 << endl;
	}
	~Base() = default;
};

template<typename T3, typename T4>
class Child : public Base<T3, T4>
{
protected:
	T3 _value3;
	T4 _value4;
public:
	Child() : _value3(0), _value4(0) {}
	Child(T3 value3, T4 value4) : Base<T3, T4>(value3, value4), _value3(value3), _value4(value4) {}
	Child(const Child& other) : Base<T3, T4>(other), _value3(other._value3), _value4(other._value4) {}
	Child& operator=(const Child& other) 
	{
		_value3 = other._value3;
		_value4 = other._value4;
		return *this;
	}
	Child operator+(const Child& other) 
	{
		Child temp;
		temp._value3 = _value3 + other._value3;
		temp._value4 = _value4 + other._value4;
		return temp;
	}
	Child operator-(const Child& other) 
	{
		Child temp;
		temp._value3 = _value3 - other._value3;
		temp._value4 = _value4 - other._value4;
		return temp;
	}
	Child operator*(const Child& other) 
	{
		Child temp;
		temp._value3 = _value3 * other._value3;
		temp._value4 = _value4 * other._value4;
		return temp;
	}
	Child operator/(const Child& other) 
	{
		Child temp;
		temp._value3 = _value3 / other._value3;
		temp._value4 = _value4 / other._value4;
		return temp;
	}
	void setValues(T3 value3, T4 value4)
	{
		_value3 = value3;
		_value4 = value4;
	}
	void printFunc() const override
	{
		cout << "Child: " << _value3 << " " << _value4 << endl;
	}
	~Child() = default;
};

template<typename T5, typename T6>
class Child2 : public Child<T5, T6>
{
protected:
	T5 _value5;
	T6 _value6;
public:
	Child2() : _value5(0), _value6(0) {}
	Child2(T5 value5, T6 value6) : Child<T5, T6>(value5, value6), _value5(value5), _value6(value6) {}
	Child2(const Child2& other) : Child<T5, T6>(other), _value5(other._value5), _value6(other._value6) {}
	Child2& operator=(const Child2& other) 
	{
		_value5 = other._value5;
		_value6 = other._value6;
		return *this;
	}
	Child2 operator+(const Child2& other) 
	{
		Child2 temp;
		temp._value5 = _value5 + other._value5;
		temp._value6 = _value6 + other._value6;
		return temp;
	}
	Child2 operator-(const Child2& other) 
	{
		Child2 temp;
		temp._value5 = _value5 - other._value5;
		temp._value6 = _value6 - other._value6;
		return temp;
	}
	Child2 operator*(const Child2& other) 
	{
		Child2 temp;
		temp._value5 = _value5 * other._value5;
		temp._value6 = _value6 * other._value6;
		return temp;
	}
	Child2 operator/(const Child2& other) 
	{
		Child2 temp;
		temp._value5 = _value5 / other._value5;
		temp._value6 = _value6 / other._value6;
		return temp;
	}
	void setValues(T5 value5, T6 value6)
	{
		_value5 = value5;
		_value6 = value6;
	}
	void printFunc() const override
	{
		cout << "Child2: " << _value5 << " " << _value6 << endl;
	}
	~Child2() = default;
};