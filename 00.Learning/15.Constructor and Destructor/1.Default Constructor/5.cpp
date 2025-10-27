#include<iostream>
using namespace std;

class A
{

    int x, y; //by default,private data member
                       //This leads to compilation error
    A() : x(10), y(20) //by default,private constructor
    {
        cout << "x=" << x << endl; //
        cout << "y=" << y << endl; //
        cout << "default constructor" << endl;
        cout << "x=" << x << endl; //
        cout << "y=" << y << endl; //
    }
};

int main()
{
    A ob1; //invoke default constructor only
}
