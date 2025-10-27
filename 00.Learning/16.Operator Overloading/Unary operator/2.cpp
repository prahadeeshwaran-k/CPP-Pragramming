//unary operator as a member function
//operator function doesn't required any argument
#include<iostream>
using namespace std;
class A
{
public:
int x;// data member 
public:
A()
{
cout<<"default constructor"<<endl;
cout<<"x="<<x<<endl;
}
A(int a)
{
x=a;//Assignment
cout<<"parameterized constructor"<<endl;
cout<<"x="<<x<<endl;
}
A operator-()
{
cout<<"minus operator function is called"<<endl;
A temp;
temp.x=-x;
return temp;
} 
void print()
{
cout<<"x="<<x<<endl;
}

};
int main()
{
A ob1(10),ob2;
cout<<"display the ob1 data"<<endl;
ob1.print();
ob2=-ob1;//ob1.operator-()
   
cout<<"display the ob2 data"<<endl;
ob2.print();
}

