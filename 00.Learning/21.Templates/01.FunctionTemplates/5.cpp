//Function Templates with multiple parameters is possible.
#include<iostream>
using namespace std;

template <class T1, class T2>
void sum(T1 a, T2 b)
{
    cout << "sum function is called" << endl;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
}

int main()
{
    int x = 10;;
    double d1 = 2.3;
    sum(x, d1);
}
