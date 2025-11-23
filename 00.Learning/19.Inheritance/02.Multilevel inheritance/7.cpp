//Multi level Inheritance
#include<iostream>
using namespace std;
//base class
class A
{
	public:
		int x;// data member 
};

//derived 1 class
class B:public A
{
//derived 1 class inherits all the properties from base class
//internally
//public:
//int x;
	public:
		int y;// to add extra features in derived class
};

//derived 2 class
class C:public B
{
//derived 2 class inherits all the properties from derived 1 class
//internally
//public:
//int x;
//public:
//int y;
	public:
		int z,tot;// to add extra features in derived 2 class
          public:
		void setdata()
		{
			cout<<"setdata function is called"<<endl;
			cout<<"enter the x value..."<<endl;
			cin>>x;
			cout<<"enter the y value.."<<endl;
			cin>>y;
			cout<<"enter the z  value..."<<endl;
			cin>>z;
		}
		void add()
		{
			tot=x+y+z;
		}
		void print()
		{
			cout<<"print function is called"<<endl;
			cout<<"x="<<x<<endl;
			cout<<"y="<<y<<endl;
			cout<<"z="<<z<<endl;
			cout<<"total="<<tot<<endl;
		}
};


int main()
{
	//A a1;
	//B b1;
	C c1;
	c1.setdata();
	c1.add();
	c1.print();
	//out<<"sizeof(base)="<<sizeof(a1)<<endl;
	//cout<<"sizeof(derived1)="<<sizeof(b1)<<endl;
	cout<<"sizeof(derived 2)="<<sizeof(c1)<<endl;
}
