#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin("data.txt");// read mode
	fin.seekg(-3,ios::end);
	char ch;
	ch=fin.get();
	cout<<"ch="<<ch<<endl;
	int x;
	x=fin.tellg();
	cout<<"x="<<x<<endl;



}
