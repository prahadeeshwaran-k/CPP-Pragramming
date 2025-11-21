//non-virtual function
#include<iostream>
using namespace std;
//base class
class A
{
	public:
		void test1()
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
