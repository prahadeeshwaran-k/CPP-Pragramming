//Rules of reference variable
#include<iostream>
using namespace std;
int main()
{
	char x = 'A';
	int  &r = x;  //} invalid
	cout<<"x="<<x<<endl;
	cout<<"r="<<r<<endl;
}
//NOTE:
// referece variable and existing variable both should be same data type
// otherwise compiler will generate error.
