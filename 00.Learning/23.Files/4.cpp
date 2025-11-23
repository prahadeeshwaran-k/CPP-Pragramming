//opening files using open(); 
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int x;
    char ch[20];
    cout << "enter the x value.." << endl;
    cin >> x;
    cout << "enter the ch value.." << endl;
    cin >> ch;
    ofstream fout;
    fout.open("v2.txt"); // write mode
    fout << x << endl;
    fout << ch << endl;
    fout.close();
}
