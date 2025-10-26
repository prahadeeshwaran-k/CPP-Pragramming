//unary operator as a friend function
//operator function required one argument
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
x=a;//Assignment
cout<<"parameterized constructor"<<endl;
cout<<"x="<<x<<endl;
}
friend A operator-(A &ob4);
void print()
{
cout<<"x="<<x<<endl;
}

};
A operator-(A  &ob4) //non-member function,it is not part of class
{
cout<<"minus operator function is called"<<endl;
A temp;
temp.x=-ob4.x;
return temp;
}
int main()
{
A ob1(10),ob2;
cout<<"display the ob1 data"<<endl;
ob1.print();
ob2=-ob1;//operator-(ob1);
cout<<"display the ob2 data"<<endl;
ob2.print();
}

