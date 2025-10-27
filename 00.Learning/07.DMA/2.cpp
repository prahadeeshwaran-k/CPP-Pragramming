//DMA in C++
//method 1
#include<iostream>
using namespace std;
int main()
{
	int *p;
	p=new int(20);
	cout<<"p="<<p<<endl; //1000
	cout<<"*p="<<*p<<endl;//*(1000)=20
	delete p;//
	p=NULL;
   cout<<"deallocating memory"<<endl;
   cout<<"p="<<p<<endl;//0
   cout<<"*p="<<*p<<endl; //*(0)  
}
//NOTE:
//typecasting and sizeof operator not required.
