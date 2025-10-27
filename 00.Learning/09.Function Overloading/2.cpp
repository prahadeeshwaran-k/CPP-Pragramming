//function overloading in C++
#include<iostream>
using namespace std;
void sum(int a)   //_Z3sumi
	           //Name mangling  is a technic used for the compiler
	         // to provides names to the function based on arguments
{
cout<<"sum of int function is called"<<endl;
cout<<"a="<<a<<endl;
}
void sum(double d) //_Z3sumd
{
cout<<"sum of double function is called"<<endl;
cout<<"d="<<d<<endl;
}
int main()
{
double d1=2.3;
sum(d1);
}
//NOTE:
//sum function is called,compiler tries to bind exact argument matching
//function in which actual arguments and formal arguments both should
//be matched.then only invoke function for execution.
