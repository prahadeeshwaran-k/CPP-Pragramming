/reference variable
#include<iostream>
using namespace std;
int main()
{
	int &r=0; //invalid
	cout<<"r="<<r<<endl;
}
//NOTE:
//reference cannot be point to NULL. 
