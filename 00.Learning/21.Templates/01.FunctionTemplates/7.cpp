//Function Templates
//swap  two variables using function templates 
#include<iostream>
using namespace std;

template <class Type>
void swp(Type& a, Type& b)
{
    Type temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;
    double d1 = 2.3, d2 = 3.4;
    cout << "before swapping" << endl;
    cout << "x=" << x << endl;
    cout << "y=" << y << endl;
    cout << "d1=" << d1 << endl;
    cout << "d2=" << d2 << endl;
    swp(x, y);
    swp(d1, d2);
    cout << "after swapping" << endl;
    cout << "x=" << x << endl;
    cout << "y=" << y << endl;
    cout << "d1=" << d1 << endl;
    cout << "d2=" << d2 << endl;
}
