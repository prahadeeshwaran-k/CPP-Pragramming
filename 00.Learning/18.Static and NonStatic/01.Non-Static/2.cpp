#include<iostream>
using namespace std;

class A
{
public:
    int x; // non-static data member
};

int main() //non-member function,it is not part of class
{
    cout << "using class name" << endl;
    cout << "A::x=" << A::x << endl; //invalid
}

//NOTE:
//non-static data member is a part of object
//
