//Virtual Base class
#include<iostream>
using namespace std;

//base class
class A
{
public:
    int x;
};

//derived 1 class
class B : virtual public A
{
    //derived 1 class inherits all the properties from base class
    //internally
    //public:
    //int x;
public:
    int y;
};

//derived 2 class
class C : virtual public A
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
    //int y;
    //public:
    //int z;
public:
    void print()
    {
        cout << "x=" << x << endl;
        cout << "y=" << y << endl;
        cout << "z=" << z << endl;
    }
};

int main()
{
    D d1;
    d1.print();
}
