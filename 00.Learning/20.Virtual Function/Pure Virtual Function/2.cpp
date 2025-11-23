#include<iostream>
using namespace std;
//base class
class A //Abstract class
{
	public:
		virtual void test1()=0;//pure virtual function

};
//derived class
class B:public A //Abstract class 
{
//derived class inherits all the properties from base class
//internally
//public:
//virtual void test1()=0;//pure virtual function

};
int main()
{
	//A a1;//invalid
	A *ptr;
	B b1; //invalid
	ptr=&b1;
	ptr->test1();

}

