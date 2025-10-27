#include<iostream>
using namespace std;

class A
{
private:
    int x, y; //data member
public:
    A() : x(10), y(20)
    {
        cout << "x=" << x << endl; //10
        cout << "y=" << y << endl; //20
        cout << "default constructor" << endl;
        cout << "x=" << x << endl; //10
        cout << "y=" << y << endl; //20
    }
};

int main()
{
    A ob1; //invoke default constructor only
}
