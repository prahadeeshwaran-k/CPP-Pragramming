//allocating memory for 2-D array
////
#include<iostream>
using namespace std;

int main()
{
    int r, c, i, j;
    cout << "enter the row and column" << endl;
    cin >> r >> c;
    int** p = new int*[r];
    for (i = 0; i < r; i++)
    {
        p[i] = new int[c];
    }
    cout << "enter the p elements" << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> p[i][j];
        }
    }
    int** q = new int*[r];
    for (i = 0; i < r; i++)
    {
        q[i] = new int[c];
    }
    cout << "display the p elements" << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "p[" << i << "][" << j << "]=" << p[i][j] << endl;
        }
    }
    cout << "enter the q elements" << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> q[i][j];
        }
    }
    cout << "display the q elements" << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "q[" << i << "][" << j << "]=" << q[i][j] << endl;
        }
    }
    int** m = new int*[r];
    for (i = 0; i < r; i++)
    {
        m[i] = new int[c];
    }
    cout << "matrix addition" << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            m[i][j] = p[i][j] + q[i][j];
        }
    }
    cout << "display the m elements" << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "m[" << i << "][" << j << "]=" << m[i][j] << endl;
        }
    }
    cout << "deallocating memory for p" << endl;
    for (i = 0; i < r; i++)
        delete [] p[i]; // deallocating memory for inner array
    delete [] p; // deallocating memory for outer array
    p = NULL;
    cout << "deallocating memory for q" << endl;
    for (i = 0; i < r; i++)
        delete [] q[i]; // deallocating memory for inner array
    delete [] q; // deallocating memory for outer array
    q = NULL;
    cout << "deallocating memory for m" << endl;
    for (i = 0; i < r; i++)
        delete [] m[i]; // deallocating memory for inner array
    delete [] m; // deallocating memory for outer array
    m = NULL;
}
