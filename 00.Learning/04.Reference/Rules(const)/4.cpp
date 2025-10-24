//case 4:
#include<iostream>
using namespace std;
int main()
{
	const int x=10; // const existing variable
	const int &r=x;// const reference 
	//r++;//invalid
	//x++;//invalid
	cout<<"x="<<x<<endl;
	cout<<"&x="<<&x<<endl;
	cout<<"r="<<r<<endl;
	cout<<"&r="<<&r<<endl;
}
