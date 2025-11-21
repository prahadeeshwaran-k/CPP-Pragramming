//single inheritance
//the constructor call be like always be a base call 1st
#include<iostream>
using namespace std;
//base class
class A
{
	public:
	A()//1st
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
	B()  // internally //2nd
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
