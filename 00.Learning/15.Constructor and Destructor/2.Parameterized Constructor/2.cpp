#include<iostream>
using namespace std;

class A
{
private:
    int x; //data member
public:
    A()
    {
        cout << "default constructor" << endl;
        cout << "x=" << x << endl;
    }

    A(int a)
    {
        cout << "x=" << x << endl; //g.v
        x = a; //Assignment`
        cout << "parameterized constructor" << endl;
        cout << "x=" << x << endl; //10
    }
};

int main()
{
    A ob1(10); //whenever object gets created,it is invoke parameterized
    //constructor only.

    A ob2; //invoke default constructor only.
}

//NOTE:
//if user defined parameterized constructor ,then internally
//compiler will drop default constructor implicitly.
//compiler will generate error.
//To avoid this error.
//you need to provide default constructor explicitly
