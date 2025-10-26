//Rules of reference variable
#include<iostream>
using namespace std;
int main()
{
	int x = 10;
	int &r;
	r=x;//invalid
	cout<<"x="<<x<<endl;
	cout<<"r="<<r<<endl;
}
//NOTE:
// whenever  reference variable created,it must be initialized 
// otherwise compiler will generate error
