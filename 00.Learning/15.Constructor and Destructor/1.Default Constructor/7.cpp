#include<iostream>
using namespace std;

class A
{
public:
    int x;
};

int main()
{
    A ob1; //invoke default constructor only
}

//NOTE:
//if user doesn't provide default constructor explicitly.
//then internally compiler will provide default constructor.
