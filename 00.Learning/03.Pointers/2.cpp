//double pointer(pointer to pointer)
#include<iostream>
using namespace std;
int main()
{
	int x=10;
	int *p=&x;
	cout<<"value of  x="<<x<<endl;//10
	cout<<"address of x="<<&x<<endl;//1000
	cout<<"value of p="<<*p<<endl;//*(1000)=10
	cout<<"address of p="<<&p<<endl;//2000
	int **dp=&p;
	cout<<"value of dp="<<**dp<<endl; //**dp=**(2000)=*(1000)=10
	cout<<"address of dp="<<&dp<<endl;//3000
}
//NOTE:
//double pointer holds address of pointer which are stored
//separate memory location
//
//Drawbacks of double pointer
//increase memory space


