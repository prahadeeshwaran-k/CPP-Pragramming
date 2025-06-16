#include<iostream>
using namespace std;
int main(){

    int i=1,num;
    cout<<"Enter the number: ";
    cin>>num;

    //* brute force
    /*for(i;i<=num;i++){
        if(num%i==0){
            cout<< i <<" ";
        }
    }*/
    
    for(i; (i*i)<=num; i++){
        if(num%i==0){
            cout<<i<<" ";

            if((num/i) != i){//this find the middel of the number eg;([36/6] != 6) => 6*6
                cout<< (num/i) <<" ";
            }

        }
    }
    
}