//A constructor can have the default arguments.
#include<iostream>
using namespace std;

class A
{
public:
    int x, y; //data member
public:
    A(int a, int b = 15)
    {
        x = a; //Assignment
        y = b; //Assignment
        cout << "parameterized constructor" << endl;
        cout << "x=" << x << endl;
        cout << "y=" << y << endl;
    }
};

int main()
{
    A ob1(10);
}
