//Exception  handling 
#include<iostream>
using namespace std;
int main()
{
	int op;
	try
	{
	cout<<"enter the 1) int 2)char "<<endl;
	cin>>op;
	switch(op)
	{
	case 1:throw 10;
	       break;
	case 2:throw 'A';// whenever exception was rasied,no handler exists means
	                 //it will call one standard library function
			 //terminate function
			 //terminate function used to terminate program forcefully.
	       break;
	default:cout<<"invalid option"<<endl;
	}
	}
	catch(int x)
	{
	cout<<"x="<<x<<endl;
	}

}
