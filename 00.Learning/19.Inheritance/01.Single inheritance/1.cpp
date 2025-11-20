//single inheritance
#include<iostream>
using namespace std;
//base class
class A
{
	  public:
		  int x;
};
//derived class 
class B:public A
{
//internally
//public:
//int x;
	public:
		void print()
		{
			cout<<"x="<<x<<endl;
		}


};
int main()
{
	A a1;
	B b1;
	b1.print();
}
