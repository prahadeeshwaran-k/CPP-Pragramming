//
// Created by prahadeesh on 11/4/25.
//
// Write a program to impliment predecrement operator
// using member function

#include <iostream>
using namespace std;

class A
{
public:
    int x;

    A()
    {
        x=0;
    }

    A(int x)
    {
        this->x = x;
    }

    ~A()
    {
        cout<<"Destructor"<<endl;
    }

    A operator--(int Dummy)
    {
        A Temp;
        Temp.x = --x;
        return Temp;
    }
    void print()
    {
        cout<<x<<endl;
    }
};

int main()
{
    A obj1(10),obj2;
    obj1.print();
    obj2.print();
    obj2 = obj1--;
    obj2.print();
}