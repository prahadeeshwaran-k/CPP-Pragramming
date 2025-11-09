#include<iostream>
using namespace std;

class A
{
private:
    int x, y; // datamember
public:
    A(int a)
    {
        x = a;
        cout << "dynamic parameterized constructor1" << endl;
        cout << "x=" << x << endl;
        cout << "y=" << y << endl;
    }

    A(int a, int b = 15)
    {
        x = a;
        y = b;
        cout << "dynamic parameterized constructor 2 " << endl;
        cout << "x=" << x << endl;
        cout << "y=" << y << endl;
    }
};

int main()
{
    A* ptr = new A(10); //whenever object gets created,compiler tries
    // to bind two constructor definition.
    // compiler gets confused which one is going to
    // execute first.
    //compiler will generate ambiguity error.
}
