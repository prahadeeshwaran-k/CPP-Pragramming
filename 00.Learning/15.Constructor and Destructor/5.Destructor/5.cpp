// constructor and destructor
// constructor can be overloaded
#include <iostream>
using namespace std;
class A
{
private:
    int x, y; // data member
public:
    A(int a)
    {
        x = a;
        cout << "parameterized constructor1" << endl;
        cout << "x=" << x << endl;
        cout << "y=" << y << endl;
    }
    A(int a, int b)
    {
        x = a;
        y = b;
        cout << "parameterized constructor 2" << endl;
        cout << "x=" << x << endl;
        cout << "y=" << y << endl;
    }
    ~A(int a)
    {
        cout << "destructor1" << endl;
    }
    ~A(int a, int b)
    {
        cout << "destructor 2" << endl;
    }
};

int main()
{
    A ob1(10);

    A ob2(20, 30); // invoke parameterized constructor 2
}
