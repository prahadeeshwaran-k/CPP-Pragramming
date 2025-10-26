//using directive
#include<iostream>
using namespace std;

namespace A
{
    int x = 10, y = 20; //global variable
}

namespace B
{
    int x = 30, y = 40; //global variable
}

int main()
{
    int x = 69 ; // local variable
    using namespace A;
    cout << "x=" << x << endl; //50
}
