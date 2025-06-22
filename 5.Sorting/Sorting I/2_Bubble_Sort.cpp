#include<iostream>
using namespace std;

void BubbleSort(int n,int arr[]){
    int temp;
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<=i-1;j+1){
            if(arr[j]>arr[j++]){// my mistakej+1 is not incrementing j This creates an infinite loop
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    int n;
    cout << "Enter the Elements of Array :";
    cin >> n;

    int arr[n];
    cout <<"Enter the values: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    
    BubbleSort(n,arr);
    
    cout<<"\n";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}