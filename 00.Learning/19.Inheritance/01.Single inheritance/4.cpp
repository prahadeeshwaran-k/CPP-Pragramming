//single inheritance
#include<iostream>
using namespace std;
//base class
class A
{
	public:
		int x;// data member
	protected:
	int y;// data member 
        private:
         int z;// data member 	

};
//derived class
class B:public  A
{
//internally
//public:
//int x;
//protected:
//int y;
	public:
		void print()
		{
			cout<<"x="<<x<<endl;
			cout<<"y="<<y<<endl;
			cout<<"z="<<z<<endl;//u can't access base class
		                            //private data member
		}

};
int main()
{
	A  a1;
	B b1;
	b1.print();
}
