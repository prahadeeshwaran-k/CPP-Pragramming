//Function Templates supports default arguments 
#include<iostream>
using namespace std;

template <class Type>
void sum(Type a, Type b = 15)
{
    cout << "sum function is called" << endl;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
}

int main()
{
    int x = 10, y = 20;
    sum(x);
    double d1 = 2.3, d2 = 3.4;
    sum(d1, d2);
}
