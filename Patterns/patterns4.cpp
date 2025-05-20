/*
*****
****
***
**
*
*/

#include<iostream>
using namespace std;

void pattern(int n){
    for (int i=1; i<=n; i++)
    {
        for (int j = 0; j < n-i+1; j)//or use j < i+1
        {
            cout<< "* ";
        }
        cout<< "\n";
    }
    
}

int main(){
    pattern(5);
    return 0;
}