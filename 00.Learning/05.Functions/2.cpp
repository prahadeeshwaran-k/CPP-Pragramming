// call by address
#include<iostream>
using namespace std;
void sum(int *p,int *q);// function declaration
int main()
{
	int x=10,y=20;
	sum(&x,&y);//address of variable passed to the function
        cout<<"actual arguments"<<endl;
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
	cout<<"address of x="<<&x<<endl;
	cout<<"address of y="<<&y<<endl;

}
void sum(int *p,int *q) //function definition
{
//NOTE:
//Any changes made inside function,it will affect both actual  arguments and 
//formal arguments
*p=45;
*q=35;
cout<<"formal arguments"<<endl;
cout<<"*p="<<*p<<endl;
cout<<"*q="<<*q<<endl;
cout<<"address of p="<<&p<<endl;
cout<<"address of q="<<&q<<endl;
}
