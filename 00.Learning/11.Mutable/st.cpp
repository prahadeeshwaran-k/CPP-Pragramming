#include<iostream>
using namespace std;

struct st
{
    mutable int x;
};

int main()
{
    const struct st s1 = {10};
    cout << "using dot operator" << endl;
    cout << "s1.x=" << s1.x << endl;

    s1.x = 20;
    cout << "after modify" << endl;
    cout << "s1.x=" << s1.x << endl;
}
