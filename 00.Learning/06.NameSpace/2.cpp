//namespace feature present in C++.
#include<iostream>
using namespace std;

namespace A
{
    int x = 10; // global variable
}

namespace B
{
    int x = 20; // global variable
}

int main()
{
    cout << "B::x=" << B::x << endl;
}
