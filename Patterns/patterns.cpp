 /*
****
****
****
****
*/
#include<iostream>
using namespace std;

int main(){
    int i,j,row,col;
    row = 4;
    col = 4;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}