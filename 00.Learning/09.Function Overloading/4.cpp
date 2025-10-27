//Rules of Function Overloading in C++
//These functions have a different number of parameters
#include<iostream>
using namespace std;
void sum(int a) //_Z3sumi
{
cout<<"sum of first function is called"<<endl;
cout<<"a="<<a<<endl;
}
void sum(int a,int b)  //_Z3sumii
{
cout<<"sum of second function is called"<<endl;
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;
}
void sum(int a,int b,int c) // _Z3sumiii
{
cout<<"sum of third function is called"<<endl;
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;
cout<<"c="<<c<<endl;
}
int main()
{
	int x=10,y=20,z=30;
          sum(x,y,z);
}
