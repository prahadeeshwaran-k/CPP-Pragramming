// class and objects
#include <iostream>
using namespace std;

class XYZ
{
public:
	int x; // data member

public:
	void setdata() // member function,it is part of class
	{
		cout << "enter the x value.." << endl;
		cin >> x;
	}
	void print()
	{
		cout << "x=" << x << endl;
	}
};

class ABC
{
public:
	int x; // data member
public:
	void setdata() // member function,it is part of class
	{
		cout << "enter the  x value.." << endl;
		cin >> x;
	}
	void print()
	{
		cout << "x=" << x << endl;
	}
};

void add(XYZ &ob4, ABC &ob5) // non-member function,it is not part of class
{
	cout << "add function is called" << endl;
	int tot;
	tot = ob4.x + ob5.x;
	cout << "tot=" << tot << endl;
}

int main() // non-member function,it is not part of class
{
	XYZ ob1;

	cout << "enter the ob1 data" << endl;
	ob1.setdata();
	cout << "display the ob1 data" << endl;
	ob1.print();
	ABC ob2;
	cout << "enter the ob2 data" << endl;
	ob2.setdata();
	cout << "display the ob2 data" << endl;
	ob2.print();
	cout << "add function" << endl;
	add(ob1, ob2); // two objects data passed to the non-member function explicitly
}
