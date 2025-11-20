//Heirarchical inheritance: 
#include<iostream>
using namespace std;
//base class
class A
{
	public:
		int x;// data member 
};
//derived 1 class
class B:public A
{
//derived 1 class inherits all the properties from base class
//internally
//public:
//int x;
	public:
		int y,tot;
        public:
		void setdata()
		{
		cout<<"------------------"<<endl;
		cout<<"derived 1 class"<<endl;
		cout<<"enter the x value.."<<endl;
		cin>>x;
		cout<<"enter the y value.."<<endl;
		cin>>y;
		cout<<"--------------------"<<endl;
		}
		void add()
		{
			tot=x+y;
		}
		void print()
		{
		cout<<"-------------------"<<endl;
		cout<<"derived 1 class"<<endl;
		cout<<"x="<<x<<endl;
		cout<<"y="<<y<<endl;
		cout<<"tot="<<tot<<endl;
		cout<<"-------------------"<<endl;
		}

};
//derived 2 class
class C:public A
{
//derived 2 class inherits all the properties from base class
//internally
//public:
//int x;
	public:
		int z,s;
	public:
		void getdata()
		{
		cout<<"---------------------"<<endl;
		cout<<"derived 2 class"<<endl;
		cout<<"enter the x value.."<<endl;
		cin>>x;
		cout<<"enter the z value.."<<endl;
		cin>>z;
		cout<<"-------------------"<<endl;
		}
		void sub()
		{
		s=z-x;
		}
		void putdata()
		{
		cout<<"---------------------"<<endl;
		cout<<"derived 2 class"<<endl;
		cout<<"x="<<x<<endl;
		cout<<"z="<<z<<endl;
		cout<<"s="<<s<<endl;
		cout<<"---------------------"<<endl;
		}




};
//derived 3 class
class D:public A
{
//derived 3 class inherits all  the properties from base class
//internally
//public:
//int x;
	public:
		int m,n;
	public:
	void input()
	{
	cout<<"---------------------"<<endl;
	cout<<"derived 3 class"<<endl;
	cout<<"enter the x value.."<<endl;
	cin>>x;
	cout<<"enter the m value..."<<endl;
	cin>>m;
	cout<<"--------------------"<<endl;
	}
	void mul()
	{
		n=m*x;
	}
	void output()
	{
	cout<<"-------------------------"<<endl;
	cout<<"derived 3 class"<<endl;
	cout<<"x="<<x<<endl;
	cout<<"m="<<m<<endl;
	cout<<"n="<<n<<endl;
	cout<<"--------------------------"<<endl;
	}





};
int main()
{
	A a1;
	B b1;
	b1.setdata();
	b1.add();
	 b1.print();
	 C c1;
	 c1.getdata();
	 c1.sub();
	 c1.putdata();
	 D d1;
	 d1.input();
	 d1.mul();
	 d1.output();

}
