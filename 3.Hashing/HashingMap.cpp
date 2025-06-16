#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Enter Size of Array : ";
    cin >> n;
    cout << "Enter Elements of Array : ";
    int arr[n];
    for(int i =0;i<n;i++){
        cin >> arr[i];
    }
    //* map stored in sorted order
    map<int,int> mpp;
    for(int i = 0;i<n;i++){
        mpp[arr[i]] = mpp[arr[i]]+1;

    }
    
    for (auto it: mpp){
        cout<<it.first<<" -> "<<it.second<<"\n";
    }

    cout << "Enter who may elements to find: ";
    int q;
    cin >> q;
    while(q--) {
        int number;
        cout << "Enter the element to find: ";
        cin >> number;
        // fetch
        cout << mpp[number] << endl;
    }
}