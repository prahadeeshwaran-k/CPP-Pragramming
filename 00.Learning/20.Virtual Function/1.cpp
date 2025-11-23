//non-virtual function
#include<iostream>
using namespace std;

//base class
class A
{
public:
    void test1()
    {
        cout << "base class-A test1 function is called" << endl;
    }
};

//derived class
class B : public A
{
public:
    void test1()
    {
        cout << "derived class-B test1 function is called" << endl;
    }
};

int main()
{
    A* ptr; // this pointer is based on the Base class type
    B b1; //Derived clas object
    ptr = &b1; //a pointer to the derived
    ptr->test1(); //object de-referencing
    // it call the base class function.
}
