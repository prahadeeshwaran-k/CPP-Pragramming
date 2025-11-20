//order of constructor and destructor
//Multiple inheritance: 
#include<iostream>
using namespace std;
//base 1 class
class A
{
	public:
		int x;// data member 
	public:
	A()
	{
	cout<<"base 1 class-A default constructor"<<endl;
	cout<<"x="<<x<<endl;
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
		int y;//data member 
	public:
	B()
	{
	cout<<"base 2 class-B default constructor"<<endl;
	cout<<"y="<<y<<endl;
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
		int z;// data member 
	public:
	C()
	{
	cout<<"base 3 class -C default constructor"<<endl;
	cout<<"z="<<z<<endl;
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
	int m;// data member 
  public:
   D()//internally
       //D():B(),D():A(),D():C()
   {
	 cout<<"derived class-D default constructor"<<endl;
	 cout<<"m="<<m<<endl;

   }
  ~D()
  {
	 cout<<"derived class-D destructor"<<endl;
  }
};
int main()
{
D d1;

}

