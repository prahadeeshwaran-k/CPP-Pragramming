//single inheritance
#include<iostream>
using namespace std;
//base class
class A
{
	public:
	A()
	{
		cout<<"base class-A default constructor"<<endl;
	}
	~A()
	{
	cout<<"base class -A destructor"<<endl;
	}
};
//derived class
class B:public A
{

	public:
	B()  // internally
	      // B():A()
	{
	cout<<"derived class -B default constructor"<<endl;
	}
	~B()
	{
	cout<<"derived class -B destructor"<<endl;
	}

};
int main()
{
	B b1;



}
