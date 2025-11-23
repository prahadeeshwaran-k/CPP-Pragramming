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

    void print();
    void modify();
};

//the function outside of scope
template <class T1, class T2>
void A<T1, T2>::print()
{
    cout << "print function  is called" << endl;
    cout << "x=" << x << endl;
    cout << "y=" << y << endl;
}

template <class T1, class T2>
void A<T1, T2>::modify()
{
    cout << "modify function  is called" << endl;
    x = 20;
    y = 'B';
    cout << "x=" << x << endl;
    cout << "y=" << y << endl;
}

int main()
{
    A<int, char> ob1(10, 'A');
    ob1.print();
    ob1.modify();
}
