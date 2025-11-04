#include<iostream>
using namespace std;

class A
{
public:
    int x; // data member
public:
    A(int a)
    {
        x = a;
        cout << "parameterized constructor" << endl;
        cout << "x=" << x << endl;
    }

    ~A()
    {
        cout << "destructor" << endl;
    }
};

int main()
{
    A ob1(10), ob2(20);
}
