//case 1:
#include<iostream>
using namespace std;
int main()
{
	int x=10; // non-const existing variable
	int &r=x;// non-const reference 
	cout<<"x="<<x<<endl;
	cout<<"&x="<<&x<<endl;
	cout<<"r="<<r<<endl;
	cout<<"&r="<<&r<<endl;
}
