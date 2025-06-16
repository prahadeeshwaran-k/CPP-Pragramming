#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout << "Enter the num: ";
    cin >> num;
    if(num != 0){
        if (num<0){ //to remove the negative sign
            num = -num;
            //num = (num * -1);//multiple with -1;-653
        }
        int count = (int)(log10(num) +1);
        cout << "Number od Digits: "<< count;
    }
    else{
        cout << "Number is not valid";
    }
    
}