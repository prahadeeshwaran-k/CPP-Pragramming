//single inheritance
#include<iostream>
using namespace std;
//base class
class A
{
	  private:
		  int x;
};
//derived class 
class B:private A
{
//derived class cannot be inherits all the properties from base class
	public:
		void print()
		{
			cout<<"x="<<x<<endl;//u cannot access base 
			                  // class private data member
		}


};
int main()
{
	A a1;
	B b1;
	b1.print();
}
