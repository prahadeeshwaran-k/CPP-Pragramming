//case 3:
#include<iostream>
using namespace std;
int main()
{
	int x=10; // non-const existing variable
	const int &r=x;// const reference  -> is valid
	//r++;	 //invalid because reference is constant
	x++;//valid
	cout<<"x="<<x<<endl;
	cout<<"&x="<<&x<<endl;
	cout<<"r="<<r<<endl;
	cout<<"&r="<<&r<<endl;
}
