//using directive
#include<iostream>
using namespace std;

namespace A
{
    int x = 10, y = 20; //global variable
    void fun()
    {
        int z;
        cout << "namespace A function is called" << endl;
        z = x + y;
        cout << "z=" << z << endl;
    }
}

namespace B
{
    int x = 30, y = 40; //global variable
    void fun()
    {
        int z;
        cout << "namespace B function is called" << endl;
        z = y - x;
        cout << "z=" << z << endl;
    }
}

int main()
{
    {
        cout << "inside the block" << endl;
        using namespace A;
        cout << "x=" << x << endl;
        cout << "y=" << y << endl;
        fun();
    }
    cout << "outside the block" << endl;
    using namespace B;
    cout << "x=" << x << endl;
    cout << "y=" << y << endl;
    fun();
}
