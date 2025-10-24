//array
#include<iostream>
using namespace std;
int main()
{
	int a[5]={10,20,30,40,50};
	int i;
	for(i=0;i<5;i++)
	{
	cout<<"a["<<i<<"]="<<a[i]<<endl;
	}
	cout<<"a="<<a<<endl;//1000
	cout<<"a+0="<<a+0<<endl;//1000
	cout<<"a+1="<<a+1<<endl;//1004
	cout<<"a+2="<<a+2<<endl;//1008
	cout<<"a+3="<<a+3<<endl;// 1012
	cout<<"a+4="<<a+4<<endl;//1016

}
