#include <iostream>
using namespace std;
class A
{
public:
	int x, y; // data member
public:
	A(int a)
	{
		x = a;
		cout << "parameterized constructor1" << endl;
		cout << "x=" << x << endl;
		cout << "y=" << y << endl;
	}

	A(int a, int b = 15)
	{
		x = a; // Assignment
		y = b; // Assignment
		cout << "parameterized constructor2" << endl;
		cout << "x=" << x << endl;
		cout << "y=" << y << endl;
	}
};

int main()
{
	A ob1(10); // whenever object gets created,compiler tries to bind
			   //  two constructor definition.
	// compiler gets confused which one  is going to execute
	// first.
	// compiler will generate ambiguity error
}
