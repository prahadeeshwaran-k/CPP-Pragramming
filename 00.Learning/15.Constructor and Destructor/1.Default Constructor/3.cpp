#include<iostream>
using namespace std;

class A
{
private:
    int x, y; //data member
public:
    A()
    {
        cout << "x=" << x << endl; //g.v
        cout << "y=" << y << endl; //g.v
        x = 10; //Assignment
        y = 20; //Assignment
        cout << "default constructor" << endl;
        cout << "x=" << x << endl; //10
        cout << "y=" << y << endl; //20
    }
};

int main()
{
    A ob1; //invoke default constructor only
}
