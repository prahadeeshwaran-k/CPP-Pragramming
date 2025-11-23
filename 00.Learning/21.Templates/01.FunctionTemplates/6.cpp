//Function Templates with multiple parameters is possible.
#include<iostream>
using namespace std;

template <class T1, class T2>
T2 sum(T1 a, T2 b)
{
    cout << "sum function is called" << endl;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    return a + b;
}

int main()
{
    int x = 10;;
    double d1 = 2.3;
    cout << "sum(x,d1)=" << sum(x, d1) << endl;
}
