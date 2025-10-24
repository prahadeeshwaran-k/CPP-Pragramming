//reference to array
#include<iostream>
using namespace std;
int main()
{
	int a[]={10,20,30,40,50};
	int (&ra)[] = a; //alias name of existing array    -> ok
	//int (&ra)[5] = a; //alias name of existing array -> ok

	//int (&ra)[4]=a;//alias name of existing array -> Error
	//int (&ra)[4]=a;//alias name of existing array -> Error


	int i;
	for(i=0;i<5;i++)
	{
	cout<<"ra["<<i<<"]="<<ra[i]<<endl;
	}
	cout<<"a="<<a<<endl; //1000
	cout<<"ra="<<ra<<endl;// 1000
	cout<<"a+0="<<a+0<<endl;//1000
	cout<<"ra+0="<<ra+0<<endl;//1000
	cout<<"a+1="<<a+1<<endl;//1004
	cout<<"ra+1="<<ra+1<<endl;//1004
	cout<<"a+2="<<a+2<<endl; //1008
	cout<<"ra+2="<<ra+2<<endl;//1008
	cout<<"a+3="<<a+3<<endl;//1012
	cout<<"ra+3="<<ra+3<<endl;//1012
	cout<<"a+4="<<a+4<<endl;//1016
	cout<<"ra+4="<<ra+4<<endl;//1016


}

