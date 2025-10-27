// for allocating memory dynamically for an 1-D array :
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the n size"<<endl;
	cin>>n;
	int *p=new int[n];

	int i;
	cout<<"enter the elements"<<endl;
	for(i=0;i<n;i++)
	{
	cin>>p[i];
	}
	for(i=0;i<n;i++)
	{
	cout<<"p["<<i<<"]="<<p[i]<<endl;
	}
	delete [] p;// deallocating memory
	p=NULL;
	cout<<"after deallocating "<<endl;
	for(i=0;i<n;i++)
	{
	cout<<"p["<<i<<"]="<<p[i]<<endl;

}
}
