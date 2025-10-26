//structure in C++
//constructor and destructor
#include<iostream>
using namespace std;
struct A
{

int x;// by default,public data member 
A(int a) //by default,public constructor
{
x=a;
cout<<"parameterized constructor"<<endl;
cout<<"x="<<x<<endl;
}
~A()  //by default,public destructor
{
cout<<"destructor"<<endl;
}
};
int main()
{
A ob1(10);

}

