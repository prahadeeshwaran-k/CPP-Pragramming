//dynamic constructor
#include<iostream>
using namespace std;

class A
{
private:
    int x; //data member
public:
    A()
    {
        cout << " dynamic default constructor" << endl;
        cout << "x=" << x << endl;
    }

    ~A()
    {
        cout << "destructor" << endl;
    }
};

int main()
{
    A* ptr = new A; //new operator is used to call dynamic default constructor

    delete ptr; // delete operator is used to call destructor to destroy
    // the object
}
