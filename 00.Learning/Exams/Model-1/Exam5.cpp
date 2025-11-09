//
// Created by prahadeesh on 11/9/25.
//
// Write a program to Implement post decrement
//operator function using member function and friend function
#include <iostream>
using namespace std;

class A
{
public:
    int x;

    A()
    {
        x = 0;
    }

    A(int x)
    {
        this->x = x;
    }

    void print()
    {
        cout << "X = " << x << endl;
    }

    A operator --()
    {
        A temp;
        temp.x = --x;
        return temp;
    }
};


class B
{
public:
    int x;

    B()
    {
        x = 0;
    }

    B(int x)
    {
        this->x = x;
    }

    void print()
    {
        cout << "X = " << x << endl;
    }

    friend B operator --(B& ref);
};

B operator --(B& ref)
{
    B temp;
    temp.x = --ref.x;
    return temp;
}

int main()
{
    A obj1(10), obj2;
    obj2 = --obj1;
    obj1.print();
    obj2.print();

    B obj3(20), obj4;
    obj4 = --obj3;
    obj3.print();
    obj4.print();
}
