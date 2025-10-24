//class and objects
#include<iostream>
using namespace std;
#pragma pack(1)
class A
{
	public:
		int x;
		int y;
		char ch;
};
int main() //non-member function,it is not part of class
{
A ob1;
cout<<"sizeof(ob1)="<<sizeof(ob1)<<endl;
}
