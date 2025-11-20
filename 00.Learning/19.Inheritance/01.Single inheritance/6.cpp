//order of constructor and destructor
//single inheritance
#include<iostream>
using namespace std;
//base class
class A
{   
	public:
	int x;// data member 

	public:
	A():x(10)
	{
		cout<<"base class -A default constructor"<<endl;
		cout<<"x="<<x<<endl;
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
	   int y;// data member 
	public:
	B():y(20) // internally
	          //B():A()
	{
	cout<<"derived class -B default constructor"<<endl;
	cout<<"y="<<y<<endl;
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

