 //class and objects
//in class also the memory leaking is happens.like structure
#include<iostream>
using namespace std;
#pragma pack(1)// it says, must have 1 byte at least.
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
