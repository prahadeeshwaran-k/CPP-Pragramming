#include<iostream>
using namespace std;
class A
{
	protected:
		int x;//data member 
	public:
		void setdata() //member function,it is a part of class
		{
		cout<<"enter the x value.."<<endl;
		cin>>x;
		}
		void print()
		{
			cout<<"x="<<x<<endl;
		}


};
int main() //non-member function,it is not part of class
{
A ob1,ob2,ob3;
cout<<"enter the ob1 data"<<endl;
ob1.setdata();
cout<<"enter the ob2 data"<<endl;
ob2.setdata();
cout<<"display the ob1 data"<<endl;
ob1.print();
cout<<"display the ob2 data"<<endl;
ob2.print();
cout<<"sizeof(ob1)="<<sizeof(ob1)<<endl;
cout<<"sizeof(ob2)="<<sizeof(ob2)<<endl;
}
