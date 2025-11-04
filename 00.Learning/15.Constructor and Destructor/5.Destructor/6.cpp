// constructor and destructor
#include <iostream>
using namespace std;
class A
{
    int x;   // by default ,private data member
    A(int a) // by default,private constructor
    {
        x = a;
        cout << "parameterized constructor" << endl;
        cout << "x=" << x << endl;
    }
    ~A() // by default,private destructor
    {
        cout << "destructor" << endl;
    }
};
int main()
{
    A ob1(10);
}
