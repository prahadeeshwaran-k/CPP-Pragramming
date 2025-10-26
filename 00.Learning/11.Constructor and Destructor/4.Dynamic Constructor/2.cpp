//constructor can be overloaded 
#include<iostream>
using namespace std;
class A
{
private:
int x,y;// data member 
public:
A(int a)
{
x=a;
cout<<"dynamic parameterized constructor"<<endl;
cout<<"x="<<x<<endl;
cout<<"y="<<y<<endl;
}
A(int a,int b)
{

x=a;
y=b;
cout<<"dynamic parameterized constructor 2"<<endl;
cout<<"x="<<x<<endl;
cout<<"y="<<y<<endl;
}
};
int main()
{
A *ptr=new A(10);// new operator is used to invoke
                 // dynamic parameterized constructor 

A *ptr1=new A(20,30);//new operator is used to invoke 
                    // dynamic parameterized constructor 2


}

