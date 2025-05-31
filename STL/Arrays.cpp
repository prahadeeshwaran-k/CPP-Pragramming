//https://www.geeksforgeeks.org/array-class-c/
#include<iostream>
#include<array> //for array,at()
#include<tuple> // for get()
using namespace std;

int main(){
    array <int,6> arr = {1,2,3,4,5,6};

    for(int i = 0; i<6; i++){
        //cout<< arr.at(i) <<" \n";    //using at()
        cout<< arr[i] <<" ";       //using []
        // not complied it gives error but change i to 1 or 3 mean number is ok // cout<< get<i>(arr) <<" \n";
    }
    cout<<"\n";

}