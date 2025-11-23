//virtual function
#include<iostream>
using namespace std;

//base class
class A
{
public:
    virtual void test1()
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
    B* ptr;
    A a1;
    ptr = &a1; //invalid
    //parent class can hold base class address.
    //child class cannot hold parent address it leads to error.
    ptr->test1();
}

//NOTE:
//when function made as a virtual in base class,whatever function binding 
//happened at compile time is going to be stopped.
//it indicates that search address at runtime.
//compiler going to take decision at runtime.
//base class pointer will hold derived class object address at runtime.
//function binding happened at runtime.
