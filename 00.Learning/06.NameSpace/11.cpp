#include<iostream>
using namespace std;
int main()
{
	namespace A
	{
		int x=10;// local variable
	}
	namespace B
	{
	int x=20;//local variable
	}
	cout<<"A::x="<<A::x<<endl;
}

