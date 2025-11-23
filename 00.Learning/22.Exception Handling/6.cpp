//Exception  handling 
//Generic catch block
#include<iostream>
using namespace std;

int main()
{
    int op;
    try
    {
        cout << "enter the 1) int 2)char 3)float  4) double  5) string" << endl;
        cin >> op;
        switch (op)
        {
        case 1: throw 10;
            break;
        case 2: throw 'A';
            break;
        case 3: throw 22.5f;
            break;
        case 4: throw 3.5;
            break;
        case 5: throw "vector";
            break;
        default: cout << "invalid option" << endl;
        }
    }
    catch (...)
    {
        cout << "default catch block" << endl;
    }
}
