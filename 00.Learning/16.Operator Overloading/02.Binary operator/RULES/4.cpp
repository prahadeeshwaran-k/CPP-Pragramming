//binary operator as a friend function
#include<iostream>
using  namespace std;
class A
{
protected:
int x;//data member 
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
friend A operator+(int y,A &ob4);
void print()
{
cout<<"x="<<x<<endl;
}
};
A operator+(int y,A &ob4) //non-member function,it is not part of class
{
cout<<"plus operator function is called"<<endl;
A temp;
temp.x=ob4.x+y;
return temp;
}
int main()
{
A ob1(10),ob2;
cout<<"display the ob1 data"<<endl;
ob1.print();
ob2=100+ob1;// operator+(100,ob4);
cout<<"display the ob2 data"<<endl;
ob2.print();
}

