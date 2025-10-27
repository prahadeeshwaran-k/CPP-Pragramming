#include<iostream>
using namespace std;
class A
{
private:
int x;// data member 

};
int main()
{
A ob1; //invoke default constructor 
}
//NOTE 1:
// if user doesn't provide default constructor explicitly.
//then internally compiler will provide default constructor

//NOTE 2:
//if user doesn't provide destructor explicitly.
//then internally compiler will provide destructor. 
