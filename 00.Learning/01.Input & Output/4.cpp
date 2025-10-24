//scope resolution operator(::)
#include<iostream>
using namespace std;
int x=20;//global variable 
int main()
{
	int x=10; //local variable
	cout<<"::x="<<::x<<endl;
	//:: is means take it from global scope.
}


