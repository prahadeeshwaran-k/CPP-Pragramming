/*
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
*/
#include<iostream>
using namespace std;

void pattern(int n) {
    int space =2*n-2;
    for (int i = 1; i <= 2*n-1 ; i++) {
        //star
        int stars = i;
        if(i > n) {stars=2*n-i;}
        for (int j = 1; j <= stars; j++) {
        cout << "*";
        }
        //spaces
        for (int j = 1; j <= space; j++) {
        cout << " ";
        }
        //star
        for (int j = 1; j <= stars; j++) {
        cout << "*";
        }
        
        cout << endl;
        if(i<n){space -=2;}
        else{space+=2;}
    }
}

int main() {
    pattern(5); // 4 lines in top and bottom halves
    return 0;
}
