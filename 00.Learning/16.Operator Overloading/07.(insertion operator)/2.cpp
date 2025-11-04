//<< (insertion operator )
#include<iostream>
using namespace std;
class A
{
public:
int x;
public:
A(int a)
{
x=a;
cout<<"parameterized constructor"<<endl;
cout<<"x="<<x<<endl;
}
};
ostream  & operator<<(ostream   &out,A   &ob4)
{
out<<"insertion operator function is called"<<endl;
out<<ob4.x<<endl;
return out;// reference object return cout


} 
int main()
{
A ob1(10);
cout<<ob1;//operator<<(cout,ob1) 
          // it is going to invoke insertion operator function
           // cout



}

