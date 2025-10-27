#include<iostream>
using namespace std;

class A
{
private:
    int x; //data member
public:
    A(int a)
    {
        cout << "x=" << x << endl; //g.v
        x = a; //Assignment`
        cout << "parameterized constructor" << endl;
        cout << "x=" << x << endl; //10
    }
};

int main()
{
    A ob1(10); //whenever object gets created,it is invoke parameterized
    //constructor only.
}
