/*
1______1
12____21
123__321
12344321
*/

#include<iostream>
using namespace std;

void pattern(int n){
    int space = 2*(n-1);

    for (int i=1; i<=n; i++)
    {   
        //numbers
        for (int j = 1; j <=i; j++)
        { 
            cout <<j ; 
        }
        //space
        for (int j = 1; j <=space;j++){
            cout <<"_" ; 
        }
        //numbers
        for (int j = i; j >=1; j--)
            { 
                cout <<j ; 
            }
        cout<< "\n";
        space -= 2;
    }
    
}


int main(){
    pattern(4);
    return 0;
}