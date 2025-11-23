//opening files using constructor 
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
int x;
char ch[20];
ifstream fin("data.txt");// read mode

fin>>x;
fin>>ch;

cout<<"x="<<x<<endl;
cout<<"ch="<<ch<<endl;
fin.close();

}

