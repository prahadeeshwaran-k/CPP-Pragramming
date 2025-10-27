// for allocating memory dynamically for an 1-D array :
#include<iostream>
using namespace std;
int main()
{
	int *p=new int[5]{10,20,30,40,50};
	int i;
	for(i=0;i<5;i++)
	{
	cout<<"p["<<i<<"]="<<p[i]<<endl;
	}
	delete [] p;//deallocating memory for 1-D array
	p=NULL;
	cout<<"after deallocating"<<endl;
	for(i=0;i<5;i++)
	{
	cout<<"p["<<i<<"]="<<p[i]<<endl;
	}




}
