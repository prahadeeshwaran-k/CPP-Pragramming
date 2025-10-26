#include<iostream>
#include <bitset>
using namespace std;
int main()
{
	int x=10;
	cout<<"x="<<x<<endl;
	cout<<"Hexadecimal="<<hex<<x<<endl;
	cout<<"Octal="<<oct<<x<<endl;
	cout<<"Decimal="<<dec<<x<<endl;
	cout<<"Binary="<<bitset<32>(x)<< endl;  // 32-bit binary
}

