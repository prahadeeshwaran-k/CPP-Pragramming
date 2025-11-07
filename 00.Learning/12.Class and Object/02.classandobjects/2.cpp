//class and objects
#include<iostream>
using namespace std;

class A
{
    int x; //by default, private data member
};

int main() //non-member function,it is not part of class
{
    A ob1, ob2;

    ob1.x = 10;
    ob2.x = 20;
    cout << "using dot operator" << endl;
    cout << "ob1.x=" << ob1.x << endl;
    cout << "ob2.x=" << ob2.x << endl;
}
