#include<iostream>
using namespace std;

class A
{
protected:
    int x; //non-static data member
public:
    void print() //non-static member function
    {
        cout << "x=" << x << endl;
    }
};

int main() //non-member function
{
    cout << "using class name" << endl;
    A::print(); //invalid
}

//NOTE:
//non-static member function is a part of object.
