//using directive
#include<iostream>
using namespace std;
namespace A
{
	int x=10,y=20; //global variable
}
namespace B
{
	int x=30,y=40; //global variable
}
int main()
{
{
cout<<"inside the block"<<endl;
using namespace A;
cout<<"x="<<x<<endl;
cout<<"y="<<y<<endl;
}
cout<<"outside the block"<<endl;
using namespace B;
cout<<"x="<<x<<endl;
cout<<"y="<<y<<endl;
}


