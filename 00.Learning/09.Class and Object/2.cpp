//structure in C++
#include<iostream>
using namespace std;
struct st
{
	void fun(int num) // functions are allowed inside the structure
	{
		cout<<"welcome "<<num<<endl;
	}
}s1;
int main()
{
	s1.fun(3);
}
