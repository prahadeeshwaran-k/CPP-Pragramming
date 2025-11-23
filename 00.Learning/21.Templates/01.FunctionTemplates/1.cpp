//function overloading
#include<iostream>
using namespace std;

void sum(int a)
{
    cout << "sum of int function is called" << endl;
    cout << "a=" << a << endl;
}

void sum(double b)
{
    cout << "sum of double function is called" << endl;
    cout << "b=" << b << endl;
}

int main()
{
    int x = 10;
    sum(x);
    double d1 = 2.3;
    sum(d1);
}
