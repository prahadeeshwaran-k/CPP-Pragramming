#include<iostream>
using namespace std;

class A
{
public:
    static int x; // static data member
public:
    void print() //non-static member function
    {
        cout << "x=" << x << endl;
    }
};

int A::x = 10; // static definition
int main()
{
    A ob1, ob2;
    cout << "display the ob1 data" << endl;
    ob1.print();
    cout << "display the ob2 data" << endl;
    ob2.print();
}
