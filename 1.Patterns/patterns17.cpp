/*
E 
D E
C D E
B C D E
A B C D E
*/

#include<iostream>
using namespace std;

void pattern(int n){
    for (int i=0; i<n; i++)
    {  
        //char
        for (char j = 'E'-i; j <='E'; j++)
        {
            cout<<j<<" ";
        }
    
        cout<< "\n";
    }
    
}

int main(){
    pattern(5);
    return 0;
}