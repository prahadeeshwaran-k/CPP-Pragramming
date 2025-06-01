/*
1
22
333
4444
55555
*/

#include<iostream>
using namespace std;

void pattern(int n){
    for (int i=1; i<=n; i++)
    {
        for (int j = 0; j <i; j++)//or use j < i+1
        {
            cout<< i ;
        }
        cout<< "\n";
    }
    
}

int main(){
    pattern(5);
    return 0;
}