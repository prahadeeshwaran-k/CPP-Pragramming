//Multiple inheritance: 
#include<iostream>
using namespace std;
//base 1 class
class supermarket
{
	 public:
		 char name[20],prod[20];
		 int price;

};
//base 2 class
class GST
{
	public:
		int cs,ss;
};

//base 3 class
class discount
{
 public:
	 int d;
};

//derived class
class customer:public supermarket,public GST,public discount
{
//derived class inherits all the properties from base 1 class
//derived class inherits all the properties from base 2 class
//derived class inherits all the properties from base 3 class
//internally
//public:
//char name[20],prod[20];
//int price;
//public:
//int cs,ss;
//public:
//int d;
	public:
		int tot;
	public:
		void setdata()
		{
		cout<<"--------------------------"<<endl;
		cout<<"welcome to D-MART"<<endl;
		cout<<"enter the name.."<<endl;
		cin>>name;
		cout<<"enter the product name..."<<endl;
		cin>>prod;
		cout<<"enter the product price.."<<endl;
		cin>>price;
		cout<<"enter the central GST"<<endl;
		cin>>cs;
		cout<<"enter the state GST"<<endl;
		cin>>ss;
		cout<<"enter the discount price"<<endl;
		cin>>d;
		cout<<"----------------------------"<<endl;
		}
		void add()
		{
                 tot=price+cs+ss-d;

		}
		void print()
		{
		cout<<"------------------------"<<endl;
		cout<<"welcome to D-MART"<<endl;
		cout<<"name="<<name<<endl;
		cout<<"product="<<prod<<endl;
		cout<<"price="<<price<<endl;
		cout<<"central GST="<<cs<<endl;
		cout<<"state GST="<<ss<<endl;
		cout<<"discount="<<d<<endl;
		cout<<"total amount="<<tot<<endl;
                cout<<"-------------------------"<<endl;
		}
};
int main()
{
supermarket s1;
GST g1;
discount d2;
customer c1;
c1.setdata();
c1.add();
c1.print();
}




