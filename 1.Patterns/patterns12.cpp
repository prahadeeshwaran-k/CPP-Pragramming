/*
1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

#include<iostream>
using namespace std;

void pattern(int n){
    int num = 0;

    for (int i=1; i<=n; i++)
    {   
        //numbers
        for (int j = 1; j <=i; j++)
        { 
            num += 1;
            cout <<num <<" " ; 
        }
        cout<< endl;
    }
    
}


int main(){
    pattern(5);
    return 0;
}