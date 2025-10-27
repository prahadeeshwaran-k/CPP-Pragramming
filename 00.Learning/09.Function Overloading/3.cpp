//function overloading
//These  functions have different parameter type
#include<iostream>
using namespace std;
double sum(int a,int b)  //_Z3sumii
{
	cout<<"sum of int  function is called"<<endl;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
}
char sum(double c,double f) //_Z3sumdd
{
cout<<"sum of double function is called"<<endl;
cout<<"c="<<c<<endl;
cout<<"f="<<f<<endl;
}
int main()
{
  int x=10,y=20;
  sum(x,y);


}
