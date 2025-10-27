//DMA in C++
//method 2:
#include<iostream>
using namespace std;
int main()
{
	int *p=new int(20);
	cout<<"p="<<p<<endl;// 1000
	cout<<"*p="<<*p<<endl;//*(1000)=20
	delete p;
	p=NULL;
	cout<<"deallocating memory"<<endl;
	cout<<"p="<<p<<endl;//0
	cout<<"*p="<<*p<<endl;//*(0)



}
