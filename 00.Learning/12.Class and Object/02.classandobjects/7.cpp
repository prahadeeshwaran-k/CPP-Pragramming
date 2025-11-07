//class and objects
#include<iostream>
using namespace std;
class A
{
	public:
	 void print() //member function,it is part of class
	 {
		 cout<<" welcome"<<endl;
	 }
};
int main() //non-member function,it is not part of class
{
	A  ob1;
	cout<<"display the ob1 data"<<endl;
	ob1.print();
	cout<<"sizeof(ob1)="<<sizeof(ob1)<<endl; 
}




