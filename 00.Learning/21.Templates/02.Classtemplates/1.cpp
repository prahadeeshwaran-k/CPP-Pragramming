//normal class
#include<iostream>
using namespace std;

class A
{
    int a[5];
    int i;

public:
    void setdata()
    {
        cout << "enter the integer array elements" << endl;
        for (i = 0; i < 5; i++)
        {
            cin >> a[i];
        }
    }

    void print()
    {
        cout << "display the integer array elements" << endl;
        for (i = 0; i < 5; i++)
        {
            cout << "a[" << i << "]=" << a[i] << endl;
        }
    }
};

class B
{
    char a[5];
    int i;

public:
    void setdata()
    {
        cout << "enter the character array elements" << endl;
        for (i = 0; i < 5; i++)
        {
            cin >> a[i];
        }
    }

    void print()
    {
        cout << "display the character array elements" << endl;
        for (i = 0; i < 5; i++)
        {
            cout << "a[" << i << "]=" << a[i] << endl;
        }
    }
};

class C
{
    float a[5];
    int i;

public:
    void setdata()
    {
        cout << "enter the float array elements" << endl;
        for (i = 0; i < 5; i++)
        {
            cin >> a[i];
        }
    }

    void print()
    {
        cout << "display the float array elements" << endl;
        for (i = 0; i < 5; i++)
        {
            cout << "a[" << i << "]=" << a[i] << endl;
        }
    }
};

int main()
{
    A ob1;
    ob1.setdata();
    ob1.print();
    B ob2;
    ob2.setdata();
    ob2.print();
    C ob3;
    ob3.setdata();
    ob3.print();
}
