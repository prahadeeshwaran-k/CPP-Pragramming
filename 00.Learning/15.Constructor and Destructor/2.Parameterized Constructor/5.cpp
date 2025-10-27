#include<iostream>
using namespace std;

class A
{
public:
    int x; //data member
public:
    A(int a); // constructor declaration
};

A::A(int a) //define constructor definition outside the class
{
    cout << "x=" << x << endl; // g.v
    x = a; //Assignment
    cout << "parameterized constructor" << endl;
    cout << "x=" << x << endl; //10
}

int main()
{
    A ob1(10);
}
