//virtual function
#include<iostream>
using namespace std;
//base class
class A
{


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
