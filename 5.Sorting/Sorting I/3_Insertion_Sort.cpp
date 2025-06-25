// C++ program for implementation of Insertion Sort
#include <iostream>
using namespace std;

int main()
{
    int arr[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}

/* This code is contributed by Hritik Shah. */