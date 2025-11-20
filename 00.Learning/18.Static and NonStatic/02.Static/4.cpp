//static data member should not be initialized through constructor
//because static data member is a part of class .
#include<iostream>
using namespace std;

class A
{
public:
    static int x; //static data member
public:
    A() : x(10) //invalid
    {
        cout << "default constructor" << endl;
        cout << "x=" << x << endl;
    }
};

int A::x; // static definition
int main()
{
    A ob1;
}
