//inline function
#include<iostream>
using namespace std;

inline int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int x = 10, y = 20;
    cout << "sum(x,y)=" << sum(x, y) << endl; // Here the function body is replaced with the function call
    cout << "sum(x,y)=" << sum(x, y) << endl;
    cout << "sum(x,y)=" << sum(x, y) << endl;
}
