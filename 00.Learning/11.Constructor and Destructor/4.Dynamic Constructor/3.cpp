//constructor can have default arguments. 
#include<iostream>
using namespace std;
class A
{
private:
int x,y;// datamember
public:
A(int a,int b=15)
{
x=a;
y=b;
cout<<"dynamic parameterized constructor"<<endl;
cout<<"x="<<x<<endl;
cout<<"y="<<y<<endl;
}
};
int main()
{
A *ptr=new A(10);
}

