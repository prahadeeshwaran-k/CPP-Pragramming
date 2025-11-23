#include<iostream>
using namespace std;
void user()
{
	throw 10;
}
int main()
{
try
{
user();
}
catch(int x)
{
cout<<"x="<<x<<endl;
}
}

