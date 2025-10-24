//reference to pointer 
#include<iostream>
using namespace std;
int main()
{
	int x=10;
	int *p=&x;
	cout<<"value of x="<<x<<endl;//10
	cout<<"address of x="<<&x<<endl;//1000
	cout<<"value of *p="<<*p<<endl;//*(1000)=10
	cout<<"address of p="<<&p<<endl;//2000
	int *&rp=p;//alias name of existing pointer variable 
cout<<"value of rp="<<*rp<<endl; //*(1000)=10
cout<<"address of rp="<<&rp<<endl;//2000




}
