//binary operator as a member function
#include<iostream>
using namespace std;

class A
{
public:
    int x; // data member
public:
    A()
    {
        cout << "default constructor" << endl;
        cout << "x=" << x << endl;
    }

    A(int a)
    {
        x = a;
        cout << "parameterized constructor" << endl;
        cout << "x=" << x << endl;
    }

    A operator+(A& ob5)
    {
        cout << "plus operator function is called" << endl;
        A temp;
        temp.x = x + ob5.x;
        return temp;
    }

    A operator-(A& ob6)
    {
        cout << "minus operator function is called" << endl;
        A temp2;
        temp2.x = x - ob6.x;
        return temp2;
    }

    void print()
    {
        cout << "x=" << x << endl;
    }
};

int main()
{
    A ob1(10), ob2(20), ob4(5), ob3;
    cout << "display the ob1 data" << endl;
    ob1.print();
    cout << "display the ob2 data" << endl;
    ob2.print();
    cout << "display the ob4 data" << endl;
    ob4.print();
    ob3 = ob1 + ob2 - ob4; // step 1:
    // ob1.operator+(ob2)
    // ob3=temp-ob4;
    // step2 :
    // ob3=temp-ob4;
    // temp.operator-(ob4)

    cout << "display the ob3 data" << endl;
    ob3.print();
}
