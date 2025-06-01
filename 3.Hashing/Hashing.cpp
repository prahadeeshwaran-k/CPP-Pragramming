#include <bits/stdc++.h>
using namespace std;

int main() {
    // Hardcoded input
    int n = 5;
    int arr[n] = {1, 3, 2, 1, 3};

    // Precompute hash
    int hash[13] = {0};  // size 13 to handle queries up to 12
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    // Hardcoded queries
    int q = 5;
    int queries[q] = {1, 4, 2, 3, 12};

    // Process and print results
    for (int i = 0; i < q; i++) {
        int number = queries[i];
        cout << hash[number] << endl;
    }

    return 0;
}
