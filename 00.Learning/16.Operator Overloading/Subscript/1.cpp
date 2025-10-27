//Subscripting operator [] 
#include<iostream>
using namespace std;
class A
{
 public:
int a[3];// data member 
int i;//data member
public:
A()
{
cout<<"default constructor"<<endl;
cout<<"enter the elements"<<endl;
for(i=0;i<3;i++)
{
cin>>a[i];
}
}

};
int main()
{
A ob1;
int i;
for(i=0;i<3;i++)
{
ob1[i];
}


}




