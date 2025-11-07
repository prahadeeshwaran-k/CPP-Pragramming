//call by value
#include<iostream>
using namespace std;
void sum(int a, int b); // function declaration
int main()
{
    int x = 10, y = 20;
    sum(x, y); //value of variable  passed to the function
    cout << "actual arguments" << endl;
    cout << "x=" << x << endl;
    cout << "y=" << y << endl;
    cout << "address of x=" << &x << endl;
    cout << "address of y=" << &y << endl;
}

void sum(int a, int b) //function definition
{
    //NOTE:
    //Any changes made inside the function,it will affect only formal arguments.
    a = 25;
    b = 35;
    cout << "formal arguments" << endl;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    cout << "address of a=" << &a << endl;
    cout << "address of b=" << &b << endl;
}
