//stack using class templates and exception handling 
#include<iostream>
using namespace std;
#define max 3
template<class type>
class A
{
	   type a[max];
	   int top,i;
	public:
	  A()
	  {
		  top=0;
	cout<<"default constructor"<<endl;
	  }
	  void push()
	  {
		 try
		 {
			if(top==max)
			{
			throw "stack overflow";
			}
			else
			{
			type ele;
			cout<<"enter the elements"<<endl;
			cin>>ele;
			a[top++]=ele;
			}
		 }
		 catch(const char *p)
		 {
			cout<<"p="<<p<<endl;
		 }
	  }
	  void pop()
	  {
		 try
		 {
			if(top==0)
			{
			throw "stack underflow";
			}
			else
			{
			a[--top]=0;
			}
		 }
		 catch(const char *p)
		 {
			cout<<"p="<<p<<endl;
		 }
	  }
	  void display()
	  {
           for(i=0;i<max;i++)
	   {
		  cout<<"a["<<i<<"]="<<a[i]<<endl;
	   }
	  }

};
int main()
{
A <int> ob1;
int op;
while(1)
{
cout<<"enter the option 1)push 2) pop 3) display 4) Exit"<<endl;
cin>>op;
switch(op)
{
case 1:ob1.push();
       break;
case 2:ob1.pop();
       break;
case 3:ob1.display();
       break;
case 4:cout<<"stack operation is over"<<endl;
       return 0;
default:cout<<"invalid options"<<endl;
	return 0;
}
}
}

