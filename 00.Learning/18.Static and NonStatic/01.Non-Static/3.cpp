#include<iostream>
using namespace std;

class A
{
public:
    int x; // non-static data member

public:
    A() : x(10) //valid
    {
        cout << "default constructor" << endl;
        cout << "x=" << x << endl;
    }
};

int main()
{
    A ob1;
}

//NOTE:
//non-static data member can be  initialized  through constructor.
//because non-static data member is a part of object 
