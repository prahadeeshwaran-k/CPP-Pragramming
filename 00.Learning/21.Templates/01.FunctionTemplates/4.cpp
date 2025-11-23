//Function Templates
#include<iostream>
using namespace std;

template <class Type>
void sum(Type a, Type b)
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

//NOTE:
//template parameter doesn't consider for two different parameter
//compiler will generate error 
