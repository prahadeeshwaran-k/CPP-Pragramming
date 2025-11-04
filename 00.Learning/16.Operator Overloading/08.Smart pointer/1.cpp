//Smart pointer (arrow operator)
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
A  * operator->()
{

return this;// returns current object address information

}  
void print()
{
cout<<"x="<<x<<endl;
}
};
int main()
{
A ob1(10);
cout<<"display the ob1 data"<<endl;
ob1->print();//ob1.operator->()->print();
             //(&ob1)->print();

}


