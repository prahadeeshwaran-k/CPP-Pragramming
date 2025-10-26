#include<iostream>
using namespace std;
class A
{
	public:
		int x,y;// data member 
	public:
		A(int a,int b);// constructor declaration

};
A::A(int a,int b):x(a),y(b) //define constructor definition outside the class
{
cout<<"x="<<x<<endl;//10
cout<<"y="<<y<<endl;//20
cout<<"parameterized constructor"<<endl;
cout<<"x="<<x<<endl;//10
cout<<"y="<<y<<endl;//20
}
int main()
{
	A ob1(10,20);
}







