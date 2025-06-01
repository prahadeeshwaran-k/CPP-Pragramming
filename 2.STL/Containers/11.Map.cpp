#include <iostream>
#include <map>
using namespace std;
// * https://www.geeksforgeeks.org/map-associative-containers-the-c-standard-template-library-stl/
// * also used std::map
// ! map store every thing in the UNIQUE key in SORTED order
// ! store with KEY & VALUE

/*
In C++, maps are associative containers that store data in the form of key value pairs sorted on the basis of keys. No two mapped values can have the same keys. By default, it stores data in ascending order of the keys, but this can be changes as per requirement.
*/

int main() {
    // Simple map<int, int>
    map<int, int> mpp1;
    map<int, int> mpp2;
    map<int, int> mpp3;

    // Inserting into map<int, int>
    mpp1[1] = 2;               // using operator[]
    mpp2.emplace(3, 2);        // using emplace
    mpp3.insert({2, 4});       // using insert

    // Map with pair as key
    map<pair<int, int>, int> mpp4;
    mpp4[{2, 3}] = 10;         // inserting into map<pair<int, int>, int>

    // Output values
    cout << "mpp1[1] = " << mpp1[1] << endl;       // prints 2
    cout << "mpp2[3] = " << mpp2[3] << endl;       // prints 2
    cout << "mpp3[2] = " << mpp3[2] << endl;       // prints 4
    cout << "mpp4[{2,3}] = " << mpp4[{2, 3}] << endl; // prints 10

    return 0;
}
