//case 2
#include<iostream>
using namespace std;

class A
{
private:
    int x; // data member
public:
    A(int a)
    {
        x = a;
        cout << "parameterized constructor" << endl;
        cout << "x=" << x << endl;
    }

    A(A& ob4)
    {
        cout << "copy constructor" << endl;
        x = ob4.x;
    }

    friend A print(A ob5);
};

A print(A ob5) //non-member function,it is not part of class
{
    //A ob5=ob1;// A ob5(ob1);// invoke copy constructor
    cout << "print function is called" << endl;
    cout << "ob5.x=" << ob5.x << endl;
    cout << "function returns to object" << endl;
    return ob5; // A ob5=ob1;// A ob5(ob1);// invoke copy constructor
}

int main()
{
    A ob1(10); //invoke parameterized constructor

    print(ob1);
}
