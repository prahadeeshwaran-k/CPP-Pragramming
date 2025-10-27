// A constant object must be initialized only through constructor.
//A constant object must be accessed only through constant 
   
// member function.
#include<iostream>
using namespace std;
class A
{
private:
mutable int x;
public:
A():x(10)
{
cout<<"default constructor"<<endl;
cout<<"x="<<x<<endl;
}
void print() const
{
x=25;
cout<<"x="<<x<<endl;
}

};
int main()
{
const A ob1;
cout<<"display the ob1 data"<<endl;
ob1.print();



}
