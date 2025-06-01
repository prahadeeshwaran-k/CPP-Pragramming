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

    // Printing first element of array
    cout << "First element of array is front(): ";
    cout << arr.front();// it just return the data not a pointer to the memory 
    cout <<"\n";

    cout << "First element of array is back(): ";
    cout << arr.back();// it just return the data not a pointer to the memory
    cout <<"\n";

    cout << "The number of array elements is size():";
    cout << arr.size();
    cout << "\n";

    // Printing maximum elements array can hold
    cout << "Maximum elements array can hold is : ";
    cout << arr.max_size() << endl;
    cout << "\n";

    // for swap() and array
    array<int,3> arr1 = {1,2};//in arr if the value is not initalized that will be 0
    array<int,3> arr2 = {2,3,4};

    for (int i=0;i<3;i++){
        cout<<arr1[i]<<" ";
    }
    cout << "\n";

    for (int i=0;i<3;i++){
        cout<<arr2[i]<<" ";
    }
    cout << "\n";

    arr1.swap(arr2);

    for (int i=0;i<3;i++){
        cout<<arr1[i]<<" ";
    }
    cout << "\n";

    for (int i=0;i<3;i++){
        cout<<arr2[i]<<" ";
    }
    cout << "\n";

   // 9. empty() :- This function returns true when the array size is zero else returns false. 

   //10. fill() :- This function is used to fill the entire array with a particular value.   

}