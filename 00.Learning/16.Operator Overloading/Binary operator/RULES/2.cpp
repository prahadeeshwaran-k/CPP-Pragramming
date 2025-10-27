//binary operator as a friend function
#include<iostream>
using  namespace std;
class A
{
private:
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
friend A  operator+(A &ob4,int y);
void print()
{
cout<<"x="<<x<<endl;
}
};
A operator+(A  &ob4,int y) //non-member function,it is not part of class
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
ob2=ob1+100;//operator+(ob1,100);
cout<<"display the ob2 data"<<endl;
ob2.print();
}

