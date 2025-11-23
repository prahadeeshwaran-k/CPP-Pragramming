#include<iostream>
#include<fstream>
using namespace std;
int main(int argc,char **argv)
{
fstream fin(argv[1],ios::in);// read mode

if(fin.is_open()==0)
{
cout<<"file doesn't exist"<<endl;
return 0;
}
char ch;
fstream fout(argv[2],ios::out);// write mode
while((ch=fin.get())!=EOF)
fout.put(ch);
fin.close();
fout.close();

}
