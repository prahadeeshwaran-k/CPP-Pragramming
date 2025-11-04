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
    {
        cout << "inside the block 1" << endl;
        A ob1(10);
    }
    {
        cout << "inside the block 2" << endl;
        A ob2(20);
    }
    cout << "outside the block" << endl;
    A ob3(30);
}
