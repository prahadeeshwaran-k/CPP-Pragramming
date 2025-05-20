/*
    *    
   ***   
  *****  
 ******* 
*********
*********
 *******
  *****
   ***
    *
*/

#include<iostream>
using namespace std;

void pattern2(int n){
    for (int i=0; i<n; i++)
    {   
        //Space
        for (int j = 0; j <i; j++)
        {
            cout<<" ";
        }
        //Star
        for (int j = 0; j <(2*n -(2*i+1)); j++)
        {
            cout<<"*";
        }
        //Space
        for (int j = 0; j <i; j++)
        {
            cout<<" ";
        }
        cout<< "\n";
    }
    
}
void pattern1(int n){
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
    pattern1(5);
    pattern2(5);
    return 0;
}