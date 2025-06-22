#include<iostream>
using namespace std;

void SelectionSort(int n,int arr[]){
    int temp,minimum;
    for (int i = 0; i<=n-2 ; i++){
        minimum = i;
        for(int j =i;j<=n-1;j++){
            if(arr[j]<arr[minimum]){
                minimum = j;
            }
        }
        temp = arr[minimum];
        arr[minimum] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    int n;
    cout <<"Enter the Elements of Array: ";
    cin >> n;
    int arr[n];

    cout <<"Enter the values: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    SelectionSort(n,arr);

    cout<<"\n";
    for(int i=0;i<n;i++){
        cout << arr[i]<<" ";
    }








}