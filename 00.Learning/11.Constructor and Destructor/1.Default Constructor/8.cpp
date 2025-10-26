#include<iostream>
using namespace std;
class A
{
private:
int x;//data member 
public:
A();// constructor declaration
};
A::A() //define constructor definition outside the class
{
x=10;
cout<<"default constructor"<<endl;
cout<<"x="<<x<<endl;//10

}
int main()
{
A ob1;//invoke default constructor

}





