#include<iostream>
using namespace std;

class A
{
public:
    static int x; // static data member
};

int A::x = 10; //static definition
int main() //non-member function
{
    cout << "using class name" << endl;
    cout << "A::x=" << A::x << endl;
}

//NOTE:
//static data member is a part of class 
