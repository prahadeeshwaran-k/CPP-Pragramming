#include<iostream>
using namespace std;

//base class
class A //Abstract class
{
public:
    virtual void test1() =0; //pure virtual function
};

//derived class
class B : public A
{
public:
    void test1()
    {
        cout << "derived  class -B test1 function is called" << endl;
    }
};

int main()
{
    B* ptr;
    A a1; //invalid abstract class cant be created the object
    ptr = &a1; //invalid
    ptr->test1();
}
