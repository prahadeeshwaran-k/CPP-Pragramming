//binary operator as a member function
#include<iostream>
using namespace std;

class A
{
private:
    int x; //data member
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

    A operator+(A& ob4) //
    {
        cout << "plus operator function is called" << endl;
        A temp;
        temp.x = x + ob4.x;
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
    ob2 = 100 + ob1; // 100.operator+(ob1);
    //Error due to constant operator can't call the overload function
    cout << "display the ob2 data" << endl;
    ob2.print();
}
