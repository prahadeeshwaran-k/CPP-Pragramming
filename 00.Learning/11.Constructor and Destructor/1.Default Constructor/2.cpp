#include<iostream>
using namespace std;
class A
{
private:
int x;//data member
public:
void A() //invalid ,constructor doesn't have any return type
{
cout<<"before modify"<<endl;
cout<<"x="<<x<<endl;//g.v
x=10;//Assignment
cout<<"after modify"<<endl;
cout<<"default constructor"<<endl;
cout<<"x="<<x<<endl;//10
}
};
int main()
{
A ob1;//whenever object gets created,it is invoke default constructor
      //only.

}






