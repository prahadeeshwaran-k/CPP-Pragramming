//Exception  handling 
#include<iostream>
using namespace std;

int main()
{
    int op;
    try
    {
        cout << "enter the 1) int 2)char " << endl;
        cin >> op;
        switch (op)
        {
        case 1: throw 10;
            break;
        case 2: throw 'A';
            break;
        default: cout << "invalid option" << endl;
        }
    }
    catch (int x)
    {
        cout << "x=" << x << endl;
    }
    catch (char ch)
    {
        cout << "ch=" << ch << endl;
    }
}
