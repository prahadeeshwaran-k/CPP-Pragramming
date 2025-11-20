#include<iostream>
using namespace std;

class A
{
public:
    static int x; // static data member
};

int A::x = 10; // static definition outside the class
int main()
{
    A ob1, ob2;
    cout << "using dot operator" << endl;
    cout << "ob1.x=" << ob1.x << endl;
    cout << "ob2.x=" << ob2.x << endl;
    ob1.x = 20;
    cout << "after modify" << endl;
    cout << "ob1.x=" << ob1.x << endl;
    cout << "ob2.x=" << ob2.x << endl;
}
