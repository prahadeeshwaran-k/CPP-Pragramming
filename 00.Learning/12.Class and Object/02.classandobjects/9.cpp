#include <iostream>
using namespace std;

class A
{
private:
	int x; // data member
public:
	void setdata() // member function,it is a part of class
	{
		cout << "enter the x value.." << endl;
		cin >> x;
	}
	void add(A &ob4, A &ob5)
	{

		cout << "add function is called" << endl;

		x = ob4.x + ob5.x;
	}
	void print()
	{
		cout << "x=" << x << endl;
	}
};
int main() // non-member function,it is not part of class
{
	A ob1, ob2, ob3;
	cout << "enter the ob1 data" << endl;
	ob1.setdata();
	cout << "enter the ob2 data" << endl;
	ob2.setdata();
	cout << "display the ob1 data" << endl;
	ob1.print();
	cout << "display the ob2 data" << endl;
	ob2.print();
	// ob3=ob1+ob2;//invalid
	// ob3.x=ob1.x+ob2.x;//valid ,public data member only.
	cout << "add function" << endl;
	ob3.add(ob1, ob2); // two objects data passed to the member function explicitly
	cout << "display the ob3 data" << endl;
	ob3.print();
}
