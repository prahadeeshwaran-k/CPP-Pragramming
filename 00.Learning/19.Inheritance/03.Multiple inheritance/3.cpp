//order of constructor and destructor
//Multiple inheritance: 
#include<iostream>
using namespace std;
//base 1 class
class A
{
	public:
		int x,y;// data member 
	public:
	A(int a,int b)
	{
	x=a;
	y=b;
	cout<<"base 1 class-A parameterized constructor"<<endl;
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
	}
	~A()
	{
	cout<<"base 1 class-A destructor"<<endl;
	}
};
//base 2 class
class B
{
	public:
		int i,j;//data member 
	public:
	B(int s,int d)
	{
	i=s;
	j=d;
	cout<<"base 2 class-B parameterized constructor"<<endl;
	cout<<"i="<<i<<endl;
	cout<<"j="<<j<<endl;
	}
	~B()
	{
	cout<<"base 2 class -B destructor"<<endl;
	}
};
//base 3 class
class C
{
	public:
		int k,l;// data member 
	public:
	C(int u,int v)
	{
	k=u;
	l=v;
	cout<<"base 3 class -C parameterized constructor"<<endl;
	cout<<"k="<<k<<endl;
	cout<<"l="<<l<<endl;
	}
	~C()
	{
	cout<<"base 3 class -C destructor"<<endl;
	}
};
//derived class
class D:public B,public A,public C
{

  public:
   D(int m,int n):B(m,n),A(m,n),C(m,n)
   {
	 cout<<"derived class-D parameterized constructor"<<endl;
	 

   }
  ~D()
  {
	 cout<<"derived class-D destructor"<<endl;
  }
};
int main()
{
D d1(10,20);

}

