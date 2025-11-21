//order of constructor and destructor
//single inheritance
#include<iostream>
using namespace std;

//base class
class A
{
public:
    int x; //data member
public:
    A(int a)
    {
        x = a;
        cout << "base class -A parameterized constructor" << endl;
        cout << "x=" << x << endl;
    }

    ~A()
    {
        cout << "base class -A destructor" << endl;
    }
};

//derived class
class B : public A
{
public:
    int y; //data member
public:
    B(int m, int n) : A(m) // to call base class parameterized constructor explicitly
    {
        y = n;
        cout << "derived class-B parameterized constructor" << endl;
        cout << "y=" << y << endl;
    }

    ~B()
    {
        cout << "derived class-B destructor" << endl;
    }
};

int main()
{
    B b1(20, 30);
}
