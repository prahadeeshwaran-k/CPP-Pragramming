//virtual function
#include<iostream>
using namespace std;
//base class
class A
{
	public:
	virtual	void test1()
		{
			cout<<"base class-A test1 function is called"<<endl;
		}
};
//derived class
class B:public A
{
	public:
		void test1()
		{
		cout<<"derived class-B test1 function is called"<<endl;
		}
};
int main()
{
	A *ptr;
	B b1;
	ptr=&b1;
	ptr->test1();

}

//NOTE:
//when function made as a virtual in base class,whatever function binding 
//happend at compile time is going to stopped.
//it indicates that search address at runtime.
//compiler going to take decision at runtime.
//base class pointer will hold derived class object address at runtime.
//function binding happend at runtime.
