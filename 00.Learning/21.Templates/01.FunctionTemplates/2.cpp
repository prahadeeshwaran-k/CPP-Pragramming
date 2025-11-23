//Function Templates
#include<iostream>
using namespace std;

template <class Type>
void sum(Type a)
{
    cout << "sum function is called" << endl;
    cout << "a=" << a << endl;
}

int main()
{
    int x = 10;
    sum(x);
    double d1 = 2.3;
    sum(d1);
}

// NOTE:
// sum function is called,
// compiler tries to bind exact argument matching function
// if exact argument matching function is not found,
// then compiler search for function  Templates.
