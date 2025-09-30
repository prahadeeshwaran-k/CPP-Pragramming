//class and objects
//non member function are only accessed by by public only
#include<iostream>
using namespace std;
class A
{
	 public:
		 int x;
		 int y;
		 char ch;
};
int main()//non-member function,it is not part of class
{
A ob1,ob2;
cout<<"using dot operator"<<endl;
cout<<"ob1.x="<<ob1.x<<endl;
cout<<"ob1.y="<<ob1.y<<endl;
cout<<"ob1.ch="<<ob1.ch<<endl;
cout<<"ob2.x="<<ob2.x<<endl;
cout<<"ob2.y="<<ob2.y<<endl;
cout<<"ob2.ch="<<ob2.ch<<endl;
cout<<"sizeof(ob1)="<<sizeof(ob1)<<endl;
cout<<"sizeof(ob2)="<<sizeof(ob2)<<endl;
}


