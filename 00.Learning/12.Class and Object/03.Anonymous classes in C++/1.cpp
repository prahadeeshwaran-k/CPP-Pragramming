//Anonymous classes in C++
#include<iostream>
using namespace std;

class
{
public:
    int x;
} ob1, ob2;

int main() //non-member function,it is not part of class
{
    cout << "using dot operator" << endl;
    cout << "ob1.x=" << ob1.x << endl;
    cout << "ob2.x=" << ob2.x << endl;
}
