#include<iostream>
using namespace std;
//Using Polymorphism and an Abstract Class.
//Rules
/*
    A is an abstract class because it contains at least one pure virtual function.
    virtual void test1() = 0; means:
        The function has no definition in this class.
        Any class inheriting from A must implement this function.
    Important: You cannot create an object of an abstract class.
    Why do we use this?
    To enforce rule: "All derived classes must implement specific behavior."
*/
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
        cout << "derived class -B test 1 function is called" << endl;
    }
};

int main()
{
    //A a1;//invalid
    A* ptr;
    B b1;
    ptr = &b1;
    ptr->test1();
}
