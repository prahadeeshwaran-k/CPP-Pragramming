//Multipath Inheritance (Diamond inheritance)
#include<iostream>
using namespace std;

//base class
class A
{
public:
    int x;
};

//derived 1 class
class B : public A
{
    //derived 1 class inherits all the properties from base class
    //internally
    //public:
    //int x;
public:
    int y;
};

//derived 2 class
class C : public A
{
    //derived 2 class inherits all the properties from base class
    //internally
    //public:
    //int x;

public:
    int z;
};

//derived 3 class
class D : public B, public C
{
    //class  D iherits all the properties from both class B and class C
    //internally
    //public:
    //int x;
    //public:
    //int y;
    //public:
    //int x;
    //public:
    //int z;
public:
    void print()
    {
        cout << "x=" << x << endl; //error
        cout << "y=" << y << endl;
        cout << "z=" << z << endl;
    }
};

int main()
{
    D d1;
    d1.print();
}

//NOTE:
//class D inherits all the properties from both class B and class C.
//it  get two copies of base datamember

//if you try to access base class data member,  compiler will produce an error
//because compiler doesn't know whether to call base class data member either
//from class B or class C.
