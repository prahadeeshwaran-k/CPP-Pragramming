//class Templates
#include<iostream>
using namespace std;

template <class Type>
class A
{
    Type a[5]; // data member are used template parameter
    int i;

public:
    void setdata()
    {
        cout << "enter the array elements" << endl;
        for (i = 0; i < 5; i++)
        {
            cin >> a[i];
        }
    }

    void print()
    {
        cout << "display the array elements" << endl;
        for (i = 0; i < 5; i++)
        {
            cout << "a[" << i << "]=" << a[i] << endl;
        }
    }
};

int main()
{
    A<int> ob1;
    ob1.setdata();
    ob1.print();
    A<char> ob2;
    ob2.setdata();
    ob2.print();
    A<float> ob3;
    ob3.setdata();
    ob3.print();
}
