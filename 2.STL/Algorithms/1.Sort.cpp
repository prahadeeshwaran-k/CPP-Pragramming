#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
// * Rules for a Valid Comparator
// * My understand if its return true no change, if false then change
// * It must take two arguments of the same type (the type you're comparing).
// * It must return true if the first argument should come before the second, based on your custom logic.
// * It must define a strict weak ordering (basically: consistent, no circular logic).

int main() {
    vector<int> v = {5, 3, 2, 1, 4};

    // Sort vector (by default in ascending order)
    sort(v.begin(), v.end());

    for (int i : v){
        cout << i << " ";
    }
    cout<<"\n";

    // Sort vector (by default in descending order)
    sort(v.begin(), v.end(), greater<int>());
    
    for (int i : v){
        cout << i << " ";
    }
    cout<<"\n";



    //sorting an ARRAY
    int arr[5] = {5, 3, 2, 1, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Sort array (by default in ascending order)
    sort(arr, arr + n);

    for (int i : arr)
        cout << i << " ";

    cout<<"\n";
    return 0;
}