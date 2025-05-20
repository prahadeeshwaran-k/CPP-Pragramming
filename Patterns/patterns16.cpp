/*
    A    
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
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
        //char
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for (int j = 1; j <=2*i+1; j++)
        {
            cout<<ch;
            if(j <= breakpoint) ch++ ;
            else ch--;
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