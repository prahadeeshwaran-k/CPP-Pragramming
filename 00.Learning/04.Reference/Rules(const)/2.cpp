//case 2:
#include<iostream>
using namespace std;
int main()
{
	const int x=10; // const existing variable
	int &r=x;// non-const reference             }invalid 
	cout<<"x="<<x<<endl;
	cout<<"&x="<<&x<<endl;
	cout<<"r="<<r<<endl;
	cout<<"&r="<<&r<<endl;
}
