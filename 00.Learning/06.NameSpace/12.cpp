//nested namespace 
#include<iostream>
using namespace std;
namespace A
{
	int x=10;// global variable
	namespace B
	{
	int x=20;// global variable
	}
}
int main()
{
	cout<<"A::B::x="<<A::B::x<<endl;
}
