//multipath inheritance(Diamond inheritance)
#include<iostream>
using namespace std;
//base class
class A
{
	public:
	A()
	{
		cout<<"base class -A default constructor"<<endl;
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
B() //internally
     // B():A()
{
cout<<"derived 1 class -B default constructor"<<endl;
}
~B()
{
cout<<"derived 1 class-B destructor"<<endl;
}
};
//derived 2 class
class C:public A
{
	public:
	C()//internally
	      //C():A()
	{
		cout<<"derived 2 class -C default constructor"<<endl;
	}
	~C()
	{
	cout<<"derived 2 class -C destructor"<<endl;
	}

};
//derived 3 class
class D:public B,public C
{

	public:
	D()//internally
	  //D():B(),D():C()
	{
	cout<<"derived 3 class -D default constructor"<<endl;
	
	}
	~D()
	{
		cout<<"derived 3 class -D destructor"<<endl;
	}
};
int main()
{
	D d1;


}






