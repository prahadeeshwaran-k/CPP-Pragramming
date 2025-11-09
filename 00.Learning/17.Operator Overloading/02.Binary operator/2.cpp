//binary operator as a member function
//operator function required one argument
#include<iostream>
using namespace std;

class A
{
public:
    int x; // data member
public:
    A()
    {
        cout << "default constructor" << endl;
        cout << "x=" << x << endl;
    }

    A(int a)
    {
        x = a;
        cout << "parameterized constructor" << endl;
        cout << "x=" << x << endl;
    }

    A operator+(A& ob4)
    {
        cout << "plus operator function is called" << endl;
        A temp;
        temp.x = x + ob4.x;
        return temp;
    }

    void print()
    {
        cout << "x=" << x << endl;
    }
};

int main()
{
    A ob1(10), ob2(20), ob3;
    cout << "display the ob1 data" << endl;
    ob1.print();
    cout << "display the ob2 data" << endl;
    ob2.print();
    ob3 = ob1 + ob2; //ob1.operator+(ob2)
    // ob1  going to invoke plus operator function
    // ob2 data passed to the plus operator function explicitly

    cout << "display the ob3 data" << endl;
    ob3.print();
}
