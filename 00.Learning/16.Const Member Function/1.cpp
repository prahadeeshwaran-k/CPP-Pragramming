//const member function 
#include<iostream>
using namespace std;

class A
{
private:
    mutable int x; // data member
public:
    void setdata()
    {
        cout << "enter the x value.." << endl;
        cin >> x;
    }

    void print() const
    {
        x = 25;
        cout << "x=" << x << endl;
    }
};

int main()
{
    A ob1;
    cout << "enter the ob1 data" << endl;
    ob1.setdata();
    cout << "display the ob1 data" << endl;
    ob1.print();
}
