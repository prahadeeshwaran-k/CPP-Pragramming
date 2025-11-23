//Function Templates
#include<iostream>
using namespace std;

template <class Type>
void sum(Type a)
{
    cout << "sum function is  called" << endl;
    cout << "a=" << a << endl;
}

template <class Type>
void sum(Type a, Type b)
{
    cout << "sum of second function is called" << endl;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
}

int main()
{
    int x = 10, y = 20;
    sum(x);
    sum(x, y);
}
