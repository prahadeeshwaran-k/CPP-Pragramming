//Exception Handling
#include<iostream>
using namespace std;

int main()
{
    int x, y, z;
    cout << "enter the x and  y value.." << endl;
    cin >> x >> y;
    try
    {
        if (y == 0)
        {
            throw "Floating point exception";
        }
        else
        {
            z = x / y;
            cout << "z=" << z << endl;
        }
    }
    //cout<<"welcome"<<endl;//invalid
    catch (const char* p)
    {
        cout << "error solved" << endl;
    }
}
