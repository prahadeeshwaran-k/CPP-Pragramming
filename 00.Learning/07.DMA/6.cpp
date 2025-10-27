//DMA in C++
//allocating memory for 2-D array
#include<iostream>
using namespace std;

int main()
{
    int r, c;
    int i, j;
    cout << "enter the row and column" << endl;
    cin >> r >> c;
    int** p = new int*[r];
    for (i = 0; i < r; i++)
    {
        p[i] = new int[c];
    }
    cout << "enter the elements" << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> p[i][j];
        }
    }
    cout << "display the elements" << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "p[" << i << "][" << j << "]=" << p[i][j] << endl;
        }
    }
    cout << "deallocating memory for 2-D array" << endl;
    for (i = 0; i < r; i++)
        delete [] p[i]; // deallocating memory for inner array
    delete [] p; // deallocating memory for outer array
    p = NULL;
    cout << "after deallocating memory" << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "p[" << i << "][" << j << "]=" << p[i][j] << endl;
        }
    }
}
