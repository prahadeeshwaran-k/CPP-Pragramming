//Assignment operator overloading is a binary operator
//binary operator as a member function
#include<iostream>
using namespace std;
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
void operator=(A   &ob4)
{
cout<<"Assignment operator overloading function is called"<<endl;

x=ob4.x;
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
ob1.print();
A ob2;
cout<<"display the ob2 data"<<endl;
ob2.print();
ob2=ob1; //ob2.operator=(ob1)
        // ob2 going to invoke Assignment operator overloading function
cout<<"display the ob2 data"<<endl;
ob2.print();
}
//NOTE:
//one object data copied into another object with the help of user will provide
//Assignment operator overloading function explicitly.

