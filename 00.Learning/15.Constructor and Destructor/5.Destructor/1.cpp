// constructor and destructor
#include <iostream>
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

public:
    ~A()
    {
        cout << "destructor" << endl;
    }
};

int main()
{
    A ob1;
}
