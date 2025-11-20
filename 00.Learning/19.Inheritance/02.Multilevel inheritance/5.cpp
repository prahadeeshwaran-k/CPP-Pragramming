//Multi level Inheritance
#include<iostream>
using namespace std;
//base class
class A
{
	public:
		int x;// datamember 
	public:
	A():x(10)
	{
	cout<<"base class -A default constructor"<<endl;
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
B():y(20) //internally
          // B():A()
{
cout<<"derived 1 class -B default constructor"<<endl;
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
	C():z(30) // internally
	      //C():B()	
	{
	cout<<"derived 2 class-C default constructor"<<endl;
	cout<<"z="<<z<<endl;
	}
	~C()
	{
	cout<<"derived 2 class -C destructor"<<endl;
	}
};
int main()
{
C c1;


}



