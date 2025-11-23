//VTABLE (Virtual Table)
#include<iostream>
using namespace std;

//base class
class A
{
public:
    virtual void fun1()
    {
        cout << "base class -A function 1 is called" << endl;
    }

    virtual void fun2()
    {
        cout << "base class-A function 2 is called" << endl;
    }
};

//derived class
class B : public A
{
public:
    void fun1()
    {
        cout << "derived class-B function 1 is called" << endl;
    }

    void fun2()
    {
        cout << "derived class-B function 2 is called" << endl;
    }
};

int main()
{
    A* ptr;
    B b1;
    ptr = &b1;
    ptr->fun1();
    ptr->fun2();
}
