///class templates
#include<iostream>
using namespace std;

template <class T1, class T2>
class A
{
    T1 x; //data member used for template parameter
    T2 y; // data member used for template parameter
public:
    A(T1 a, T2 b)
    {
        x = a;
        y = b;
        cout << "parameterized constructor" << endl;
        cout << "x=" << x << endl;
        cout << "y=" << y << endl;
    }

    void print()
    {
        cout << "print function is called" << endl;
        cout << "x=" << x << endl;
        cout << "y=" << y << endl;
    }
};

int main()
{
    A<int, char> ob1(10, 'A');
    ob1.print();
}
