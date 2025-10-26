//friend function
#include<iostream>
using namespace std;

class A
{
private:
    int x; //data member
    friend void print(A& ob4);
};

void print(A& ob4) //non-member function,it is not part of class
{
    cout << "print function is called" << endl;
    cout << "ob4.x=" << ob4.x << endl;
}

int main() //non-member function,it is not part of class
{
    A ob1;
    print(ob1); //ob1 data passed to the non-member function explicitly
}
