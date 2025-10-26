//using declarative
#include<iostream>
using namespace std;

namespace A
{
    int x = 10, y = 20; //global variable
}

namespace B
{
    int x = 30, y = 40; //global variable
}

int main()
{
    {
        cout << "inside the block" << endl;
        using A::x;
        cout << "x=" << x << endl;
    }
    cout << "outside the block" << endl;
    using B::x;
    cout << "x=" << x << endl;
}
