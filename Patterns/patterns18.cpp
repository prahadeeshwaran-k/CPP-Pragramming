/*
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/
#include<iostream>
using namespace std;

void pattern(int n) {
    int spaces = 0;

    // Top half including the middle line (n lines)
    for (int i = n; i >= 1; i--) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Middle spaces
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }

        // Right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        spaces += 2;
        cout << endl;
    }

    // Reset for bottom half
    spaces -= 2;

    // Bottom half (n lines)
    for (int i = 1; i <= n; i++) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Middle spaces
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }

        // Right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        spaces -= 2;
        cout << endl;
    }
}

int main() {
    pattern(5); // 4 lines in top and bottom halves
    return 0;
}
