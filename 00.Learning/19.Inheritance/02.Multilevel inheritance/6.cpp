//Multi level Inheritance
#include<iostream>
using namespace std;
//base class
class A
{
	public:
		int x;// datamember 
	public:
	A(int a)
	{
	x=a;
	cout<<"base class -A parameterized constructor"<<endl;
	cout<<"x="<<x<<endl;
	}
	~A()
	{
	cout<<"base class-A destructor"<<endl;
	}
};
//derived 1 class
class B:public A
{
public:
	int y;//data member
 public:
B(int u,int v):A(u) //to call base class parameterized constructor explicitly
{
y=v;
cout<<"derived 1 class -B  parameterized  constructor"<<endl;
cout<<"y="<<y<<endl;
}
~B()
{
cout<<"derived 1 class-B destructor"<<endl;
}
};
//derived 2 class
class C:public B
{
	public:
		int z;// datamember 
	public:
	C(int m,int n,int g):B(m,n) // to call derived 1 class parameterized
			             // constructor explicitly
	{
	z=g;
	cout<<"derived 2 class-C parameterized constructor"<<endl;
	cout<<"z="<<z<<endl;
	}
	~C()
	{
	cout<<"derived 2 class -C destructor"<<endl;
	}
};
int main()
{
C c1(10,20,30);
}



