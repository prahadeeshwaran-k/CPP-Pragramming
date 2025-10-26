//reference variable in c++
#include<iostream>
using namespace std;
int main()
{
	int x=10;
	int &r=x;//alias name of existing variable which are shared same memory location

	cout<<"value of x="<<x<<endl;
	cout<<"address of x="<<&x<<endl;
	cout<<"value of r="<<r<<endl;
	cout<<"address of r="<<&r<<endl;
	r=20;
	cout<<"after modify"<<endl;
	cout<<"value of x="<<x<<endl;
	cout<<"value of r="<<r<<endl;
}
