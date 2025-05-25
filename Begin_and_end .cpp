#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {5, 3, 2, 1, 4};

    // Sort vector in ascending order
    sort(v.begin(), v.end());
    cout << "after sorting\n";

    cout << "Begin value: " << *v.begin() << endl;
    cout << "Begin address: " << &(*v.begin()) << endl;
    cout << "---------------------------------"<< endl;

    // Note: v.end() points to one past the last element
    cout << "End (one past last) value: " << *(v.end()) << endl;
    cout << "End (one past last) address: " << &(*v.end()) << endl;
    cout << "---------------------------------"<< endl;

    cout << "Last element value: " << *(v.end() - 1) << endl;
    cout << "Last element address: " << &(*(v.end() - 1)) << endl;
    cout << "---------------------------------"<< endl;
    


    // Print entire vector
    cout << "\nSorted Vector: ";
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

//OUTPUT
/*
after sorting
Begin value: 1
Begin address: 0x1f522e22250
---------------------------------
End (one past last) value: -1
End (one past last) address: 0x1f522e22264
---------------------------------
Last element value: 5
Last element address: 0x1f522e22260
---------------------------------

Sorted Vector: 1 2 3 4 5
*/
