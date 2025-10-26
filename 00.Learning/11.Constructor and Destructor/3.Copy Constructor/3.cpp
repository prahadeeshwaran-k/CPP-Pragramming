#include<iostream>
using namespace std;
class A
{
	public:
		int x,y;// data member
	public:
	A(int a,int b)
	{
		x=a;
		y=b;
	cout<<"parameterized constructor"<<endl;
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
	}
	A(A &ob4)
	{
		cout<<"copy constructor"<<endl;
		x=ob4.x;
		y=ob4.y;
	}
	
	void print()
	{
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
	}
};
int main()
{
	A ob1(10,20); //invoke parameterized constructor  
        cout<<"display the ob1 data"<<endl;
	ob1.print();
         A ob2=ob1;// A ob2(ob1);// invoke copy constructor only
	                        // ob1 data passed copy constructor explicitly
cout<<"display the ob2 data"<<endl;
ob2.print();
}
//NOTE:
//one object data copied into another object with help of copy constructor 
