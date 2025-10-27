#include<iostream>
using  namespace std;
class A
{
private:
int x;// data member 
public:
A()
{
cout<<"default constructor"<<endl;
cout<<"x="<<x<<endl;
}
A(int a)
{
x=a;
cout<<"parameterized constructor"<<endl;
cout<<"x="<<x<<endl;
}
void operator()(int j)
{
cout<<"function call operator function  is called"<<endl;
cout<<"j="<<j<<endl;//10
}
};
int main()
{
A ob1;// invoke default constructor

 ob1(10);//ob1.operator()(10)
         // ob1 going to invoke function call operator function

}

//NOTE:
// for every object,one time constructor will call and one time destructor will call
