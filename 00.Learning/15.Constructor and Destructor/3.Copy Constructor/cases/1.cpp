#include<iostream>
using namespace std;

class A
{
public:
    int x; //data member
public:
    A(int a)
    {
        x = a; // Assignment
        cout << "parameterized constructor" << endl;
        cout << "x=" << x << endl;
    }

    A(A& ob4)
    {
        cout << "copy constructor" << endl;
        x = ob4.x;
    }

    void print()
    {
        cout << "x=" << x << endl;
    }
};

int main()
{
    A ob1(10);
    cout << "display the ob1 data" << endl;
    ob1.print();
    A ob2(ob1); //invoke copy constructor
    cout << "display the ob2 data" << endl;
    ob2.print();
}
