//binary operator as  a friend function
//operator function required two arguments 
#include<iostream>
using namespace std;
class A
{
private:
int x,y;// data member 
public:
A()
{
cout<<"default constructor"<<endl;
cout<<"x="<<x<<endl;
cout<<"y="<<y<<endl;
}
A(int a,int b)
{
x=a;
y=b;
cout<<"parameterized constructor"<<endl;
cout<<"x="<<x<<endl;
cout<<"y="<<y<<endl;
}
friend A operator+(A &ob4,A &ob5);
void print()
{
cout<<"x="<<x<<endl;
cout<<"y="<<y<<endl;
}
};
A operator+(A   &ob4,A   &ob5) //non-member function,it is not part of class
{
cout<<"plus operator function is called"<<endl;
A temp;
temp.x=ob4.x+ob5.x;
temp.y=ob4.y+ob5.y;
return temp;
}
int  main()
{
A ob1(10,20),ob2(30,40),ob3;
cout<<"display the ob1 data"<<endl;
ob1.print();
cout<<"display the ob2 data"<<endl;
ob2.print();
ob3=ob1+ob2;//operator+(ob1,ob2) 
cout<<"display the ob3 data"<<endl;
ob3.print();

}


