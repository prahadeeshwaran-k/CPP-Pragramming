//<< (insertion operator )
#include<iostream>
using namespace std;
class A
{
protected:
int x;
public:
A(int a)
{
x=a;
cout<<"parameterized constructor"<<endl;
cout<<"x="<<x<<endl;
}
friend ostream & operator<<(ostream &out,A &ob4);
};
ostream & operator<<(ostream   &out,A   &ob4) //non-member function,it is not of part of class
{
out<<"insertion operator function is called"<<endl;
out<<ob4.x<<endl;
return out;// reference object return cout
} 
int main()
{
A ob1(10),ob2(20);
cout<<ob1<<ob2;//step1:
               // cout<<ob1;
               //operator<<(cout,ob1);
               // it is going to invoke insertion operator
               //cout
               // step 2:
               // cout<<ob2;
              // operator<<(cout,ob2);
               //cout


}

