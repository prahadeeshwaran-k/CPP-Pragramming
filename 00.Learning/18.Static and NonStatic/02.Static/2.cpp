#include<iostream>
using namespace std;

class A
{
private:
    static int x; // static data member
    friend int main();
};

int A::x = 10; // static definition
int main() //non-member function
{
    A ob1, ob2;
    cout << "using dot operator" << endl;
    cout << "ob1.x=" << ob1.x << endl;
    cout << "ob2.x=" << ob2.x << endl;
}
