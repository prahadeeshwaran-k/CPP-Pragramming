//namespace feature present in C++.
//qualifying the namespace name and scope resolution operator
#include<iostream>
using namespace std;

namespace A
{
    int x = 10, y = 20; // global variable
    void add()
    {
        int z;
        cout << "namespace A add function is called" << endl;
        z = x + y;
        cout << "x=" << x << endl;
        cout << "y=" << y << endl;
        cout << "z=" << z << endl;
    }
}

namespace B
{
    int x = 30, y = 40; // global variable
    void add()
    {
        int z;
        cout << " namespace B  add function is called" << endl;
        z = y - x;
        cout << "x=" << x << endl;
        cout << "y=" << y << endl;
        cout << "z=" << z << endl;
    }
}

int main()
{
    B::add();
}
