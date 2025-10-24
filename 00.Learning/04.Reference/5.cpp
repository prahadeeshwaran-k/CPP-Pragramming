//reference to reference
#include<iostream>
using namespace std;
int main()
{
	int x=10;
	int &r=x;// alias name of existing variable 
	cout<<"value of x="<<x<<endl;
	cout<<"address of x="<<&x<<endl;
	cout<<"value of r="<<r<<endl;
	cout<<"address of r="<<&r<<endl;
	int &r2=r;// alias name of existing reference variable 
        cout<<"value of r2="<<r2<<endl;
	cout<<"address of r2="<<&r2<<endl;
         r2=20;
	 cout<<"after modify"<<endl;
	 cout<<"value of x="<<x<<endl;
	 cout<<"value of r="<<r<<endl;
	 cout<<"value of r2="<<r2<<endl;


}
