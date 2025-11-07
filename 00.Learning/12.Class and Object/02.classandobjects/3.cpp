//structure in C++
#include<iostream>
using namespace std;

struct A
{
    int x; //by default,public data member
};

int main() //non-member function ,it is not part of class/struct
{
    A ob1;

    cout << "using dot operator" << endl;
    cout << "ob1.x=" << ob1.x << endl;

    cout << "sizeof(ob1)=" << sizeof(ob1) << endl;
}
