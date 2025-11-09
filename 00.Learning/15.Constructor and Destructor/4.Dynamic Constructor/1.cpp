#include<iostream>
using namespace std;

class A
{
private:
    int x; // data member
public:
    A()
    {
        x = 10; //Assignment
        cout << "dynamic default constructor" << endl;
        cout << "x=" << x << endl;
    }
};

int main()
{
    A* ptr = new A; // new operator used to invoke dynamic default constructor
}
