//post increment operator function  is a unary operator
//unary operator as a member function
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

    A operator++(int a)
    {
        cout << "post increment operator function is called" << endl;
        cout << "a=" << a << endl; // 0
        A temp;
        temp.x = x++;

        return temp;
    }

    void print()
    {
        cout << "x=" << x << endl;
    }
};

int main()
{
    A ob1(10), ob2;
    cout << "display the ob1 data" << endl;
    ob1.print();
    ob2 = ob1++; //ob1.operator++(0)
    // ob1 going to invoke post increment operator function
    // by default,compiler will pass zero value
    // to the post increment operator function explicitly
    cout << "display the ob2 data" << endl;
    ob2.print();
    cout << "display the ob1 data" << endl;
    ob1.print();
}
