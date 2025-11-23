#include<iostream>
using namespace std;
//Virtual Table(VTABLE)
/*
1.What is happening in the program?
You have:
    A base class A with two virtual functions: fun1() and fun2()
    A derived class B which overrides only fun1()
    A pointer A *ptr pointing to an object of B
--------------------------------------------------------------
2.Key Concept — Runtime Polymorphism
Because the functions are virtual,
the compiler does not decide which version of fun1() to call at compile time.
Instead, it uses a mechanism called:
    vptr (Virtual Pointer)
    vtable (Virtual Table)
--------------------------------------------------------------
3.How vptr and vtable work
At compile time:

    - Compiler creates a hidden table called vtable for each class having virtual functions.
    - Every object of that class will have a hidden pointer called vptr,
      which points to that class’s vtable.
At runtime:
    When a virtual function is called through pointer,
    compiler checks the vptr to find which version of the function should be executed.
 */


// Base class
class A
{
public:
    virtual void fun1()
    {
        cout << "base class - A function 1 is called" << endl;
    }

    virtual void fun2()
    {
        cout << "base class - A function 2 is called" << endl;
    }
};

// Derived class
class B : public A
{
public:
    void fun1() override
    {
        cout << "derived class - B function 1 is called" << endl;
    }
};

int main()
{
    A* ptr;
    B b1;
    ptr = &b1; // base class pointer holding derived object
    ptr->fun1(); // runtime polymorphism
}
