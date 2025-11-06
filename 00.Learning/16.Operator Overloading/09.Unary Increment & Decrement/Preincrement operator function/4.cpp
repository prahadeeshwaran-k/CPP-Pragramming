//preincrement operator is a unary operator
//unary operator as a friend function 
#include<iostream>
using namespace std;

class A
{
protected:
    int x;

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

    friend A operator++(A& ob4);

    void print()
    {
        cout << "x=" << x << endl;
    }
};

A operator++(A& ob4) //non-member function,it is not part of class
{
    cout << "preincrement operator function is called" << endl;
    A temp;

    temp.x = ++ob4.x;


    return temp;
}


int main()
{
    A ob1(10), ob2;
    cout << "display the ob1 data" << endl;
    ob1.print();
    ob2 = ++ob1; // operator++(ob1)
    // it is going to invoke preincrement operator function.
    cout << "display the ob2 data" << endl;
    ob2.print();
    cout << "display the ob1 data" << endl;
    ob1.print();
}
