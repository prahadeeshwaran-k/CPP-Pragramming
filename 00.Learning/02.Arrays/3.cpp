//reference to array
#include<iostream>
using namespace std;
int main()
{
	int a[]={10,20,30,40,50};
	int (&ra)[5]=a;//alias name of existing array
	ra++;//invalid because of reference is alise name of a that cant be ++
	int i;
	for(i=0;i<5;i++)
	{
	cout<<"ra["<<i<<"]="<<ra[i]<<endl;
	}

}
