//Multi level Inheritance
#include<iostream>
using namespace std;

//base class
class A
{
public:
    int x; // data member
};

//derived 1 class
class B : protected A
{
    //derived 1 class inherits all the properties from base class
    //internally
    //protected:
    //int x;
};

//derived 2 class
class C : public B
{
    //derived 2 class inherits all the properties from derived 1 class
    //internally
    //protected:
    //int x;
public:
    void print()
    {
        cout << "x=" << x << endl; //u can access derived 1 class
        // data member
    }
};

int main()
{
    A a1;
    B b1;
    C c1;
    c1.print();
}
