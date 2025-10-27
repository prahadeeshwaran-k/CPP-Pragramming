//class and objects 
//friend class 
#include<iostream>
using namespace std;
class A
{
protected:
int x;// data member
friend class B;               
};
class B
{
 public:
void print(A &ob4)
{
cout<<"print function is called"<<endl;
cout<<"ob4.x="<<ob4.x<<endl;
}

};
int main()
{
A ob1;
B ob2;
ob2.print(ob1);// ob1 data passed to the member function explicitly
}





