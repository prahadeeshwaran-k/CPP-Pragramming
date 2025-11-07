#include <iostream>
using namespace std;
class A
{
protected:
       int x;

public:
       void setdata(); // function declaration
       void print();
};
void A::setdata() // define member function outside the class
{
       cout << "enter the x value.." << endl;
       cin >> x;
}

void A::print()
{
       cout << "x=" << x << endl;
}

int main()
{
       A ob1;
       cout << "enter the ob1 data" << endl;
       ob1.setdata();
       cout << "display the ob1 data" << endl;
       ob1.print();
}
