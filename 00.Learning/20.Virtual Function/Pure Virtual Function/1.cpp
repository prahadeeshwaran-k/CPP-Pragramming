#include<iostream>
using namespace std;
//base class
class A //Abstract class
{
	public:
		virtual void test1()=0;//pure virtual function

};
//derived class
class B:public A
{
	public:
		void test1()
		{
		cout<<"derived class -B test 1 function is called"<<endl;
		}


};
int main()
{
	//A a1;//invalid
	A *ptr;
	B b1;
	ptr=&b1;
	ptr->test1();


}

