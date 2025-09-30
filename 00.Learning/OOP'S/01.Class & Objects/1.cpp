//class and objects
#include<iostream>
using namespace std;
class  A
{
	public:
		int x;// datamember 
};
int main() //non-member function,it is not part of class
{
A ob1,ob2;

ob1.x=10;
ob2.x=20;

cout<<"using dot operator"<<endl;
cout<<"ob1.x="<<ob1.x<<endl;
cout<<"ob2.x="<<ob2.x<<endl;
cout<<"sizeof(ob1)="<<sizeof(ob1)<<endl;
cout<<"sizeof(ob2)="<<sizeof(ob2)<<endl;
}



