// C++ program for implementation of Insertion Sort
#include <iostream>
using namespace std;

void Insertion_Sort(int n,int arr[]){
    int temp,j;
    for (int i = 0; i<=n-1 ; i++){
        j = i;
        while (j>0 && arr[j-1]>arr[j])
        {
            temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;

            j--;
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
    Insertion_Sort(n,arr);
    
    cout<<"\n";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}