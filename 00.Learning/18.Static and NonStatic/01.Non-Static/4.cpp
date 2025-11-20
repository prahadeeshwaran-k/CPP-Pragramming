#include<iostream>
using namespace std;

class A
{
protected:
    int x; //non-static data member
public:
    void print() //non-static member function
    {
        cout << "x=" << x << endl;
    }
};

int main() //non-member function
{
    A ob1;
    cout << "display the ob1 data" << endl;
    ob1.print();
}
