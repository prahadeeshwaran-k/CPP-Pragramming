//drawbacks of Templates
//normal function and template function cant coexist
#include<iostream>
using namespace std;

void sum(int a)
{
    cout << "normal function is called" << endl;
    cout << "a=" << a << endl;
}

template <class Type>
void sum(Type a)
{
    cout << "sum of function is called" << endl;
    cout << "a=" << a << endl;
}

int main()
{
    int x = 10;
    sum(x);
}
