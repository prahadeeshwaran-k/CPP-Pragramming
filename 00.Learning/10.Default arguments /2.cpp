//default arguments 
#include<iostream>
using namespace std;

int sum(int a = 5, int b = 25, int c = 15)
{
    return a + b + c;
}

int main()
{
    int x = 10, y = 20, z = 30;
    cout << "sum(x,y,z)=" << sum(x, y, z) << endl;
    cout << "sum(x,y)=" << sum(x, y) << endl;
    cout << "sum(x)=" << sum(x) << endl;
    cout << "sum()=" << sum() << endl;
}
