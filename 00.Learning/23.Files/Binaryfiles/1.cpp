#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int x;
	char ch[20];
	cout<<"enter the x value.."<<endl;
	cin>>x;
	cout<<"enter the ch value.."<<endl;
	cin>>ch;
	ofstream fout("data.txt");// write mode
	fout.write((char*)&x,sizeof(x));
	fout.write( (char*)&ch,sizeof(ch));

	ifstream fin("data.txt");// read mode
	fin.read((char*) &x,sizeof(x));
	fin.read((char*)&ch,sizeof(ch));
	cout<<"x="<<x<<endl;
	cout<<"ch="<<ch<<endl;
	fout.close();
	fin.close();

}
	
