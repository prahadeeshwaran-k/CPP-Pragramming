//VTABLE (Virtual Table)
#include<iostream>
using namespace std;
//base class 
class A
{
	public:
		virtual void fun1()
		{
		cout<<"base class -A function 1 is called"<<endl;
		}
		virtual void fun2()
		{
		cout<<"base class-A function 2 is called"<<endl;
		}
};
A *__vptr;// virtual pointer
//derived class
class B:public A
{
//derived class inherits all the properties from base class 
//internally
//public:
//virtual void fun2()
//{
//cout<<"base class -A function 2 is called"<<endl;
//}
	public:
		void fun1()
		{
		cout<<"derived class-B function 1 is called"<<endl;
		}
		
};
int main()
{
	A *ptr;
	B b1;
	ptr=&b1;
	ptr->fun1();
	ptr->fun2();

}
//NOTE:
//when function made as a virtual,that function address stored into VTABLE(Virtual Table).
//VTABLE contains collection of function address .
//
//virtual pointer holds address of VTABLE.
