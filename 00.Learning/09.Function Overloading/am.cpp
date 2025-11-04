///function overloading
#include<iostream>
using namespace std;
void sum(int a)
{
	cout<<"sum of first function is called"<<endl;
	cout<<"a="<<a<<endl;
}
void sum(int &r)
{
	cout<<"sum of second function is called"<<endl;
	cout<<"r="<<r<<endl;
}
int main()
{
	int x=10;
	sum(x);// sum function is called,compiler tries to bind two function
	       // definition.compiler gets confused which one is going to execute.
	       // compiler will generate ambiguity error .
}
