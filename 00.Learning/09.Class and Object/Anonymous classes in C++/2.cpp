//Anonymous classes in C++
#include<iostream>
using namespace std;
class 
{
	public:
		int x;//data member 
}ob1[2];

int main() //non-member function,it is not part of class
{
cout<<"using dot operator"<<endl;
cout<<"ob1[0].x="<<ob1[0].x<<endl;
cout<<"ob1[1].x="<<ob1[1].x<<endl;
}


