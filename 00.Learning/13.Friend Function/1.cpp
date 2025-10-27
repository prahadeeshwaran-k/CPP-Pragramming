// friend function.
// here we add the main function as a friend function.

#include <iostream>
using namespace std;

class A
{
private:
	int x; // data member
	friend int main();
};

int main() // non-member function,it is not part of class
{
	A ob1;
	cout << "using dot operator" << endl;
	cout << "ob1.x=" << ob1.x << endl;
}
