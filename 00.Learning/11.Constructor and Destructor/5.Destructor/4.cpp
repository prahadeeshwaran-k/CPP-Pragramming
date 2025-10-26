#include<iostream>
using namespace std;
class A
{
public:
int x;// data member 
public:
A(int a)
{
x=a;
cout<<"parameterized constructor"<<endl;
cout<<"x="<<x<<endl;
}
~A(int a)//invalid,destructor doesn't accept any arguments.
{
cout<<"destructor"<<endl;
}
};
int main()
{
A ob1(10);
}


