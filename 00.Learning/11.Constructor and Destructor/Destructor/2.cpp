//constructor and destructor
#include<iostream>
using namespace std;
class A
{
public:
int x;// data member 
public:
void A()//invalid,constructor doesn't have return type
{
cout<<"default constructor"<<endl;
cout<<"x="<<x<<endl;
}
public:
void ~A()//invalid,destructor doesn't have return type.
{
cout<<"destructor"<<endl;
}
};
int main()
{
A ob1;  

}

