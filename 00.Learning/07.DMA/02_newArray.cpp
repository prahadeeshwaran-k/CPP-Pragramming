//create a two pointer and add
#include<iostream>
using namespace std;

int main(){
    int size;
    int*ptr;
    cout << "Enter the size of array: ";
    cin >> size;

    ptr = new int[size];
    for(int i = 0;i<size;i++){
        cout << "Enter Element ["<< i <<"]: ";
        cin >> ptr[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout<< *(ptr + i) <<"  ";
    }
    cout << endl;
    
    delete[] ptr;//* this will delete all the array of element;
}
