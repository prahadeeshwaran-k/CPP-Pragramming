/*
    *    
   ***   
  *****  
 ******* 
*********
*/

#include<iostream>
using namespace std;

void pattern(int n){
    for (int i=0; i<n; i++)
    {   
        //Space
        for (int j = 0; j <n-i-1; j++)
        {
            cout<<" ";
        }
        //Star
        for (int j = 0; j <2*i+1; j++)
        {
            cout<<"*";
        }
        //Space
        for (int j = 0; j <n-i-1; j++)
        {
            cout<<" ";
        }
        cout<< "\n";
    }
    
}

int main(){
    pattern(5);
    return 0;
}