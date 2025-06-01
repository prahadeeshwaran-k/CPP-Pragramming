/*
0
10
010
1010
01010
*/

#include<iostream>
using namespace std;

void pattern(int n){
    for (int i=1; i<=n; i++)
    {   
        bool State = (i % 2 == 1) ? 1 : 0;
        for (int j = 0; j <i; j++)
        { 
            State = !State;
            cout<< State ;
        }
        cout<< "\n";
    }
    
}


int main(){
    pattern(5);
    return 0;
}