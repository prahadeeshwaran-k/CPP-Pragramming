/*
*
**
***
****
*****
****
***
**
*
*/

#include<iostream>
using namespace std;

void pattern(int n){
    for (int i=1; i<=2*n-1; i++)
    {   
        int stars=i;
        if(i>n){stars=2*n-i;}
        for (int j = 0; j <stars; j++)
        {
            cout<<"*";
        }
        cout<< "\n";
    }
    
}


int main(){
    pattern(5);
    return 0;
}