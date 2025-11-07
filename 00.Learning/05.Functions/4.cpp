//call by reference
#include<iostream>
using namespace std;
void sum(int &a,int &b);// function declaration 
int main()
{
    int x=10,y=20;
    cout<<"before swapping"<<endl;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    sum(x,y);//value of variable passed to the function
    cout<<"after swapping"<<endl;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
}
void sum(int &a,int &b) //function definition
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

