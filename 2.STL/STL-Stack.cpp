#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    stack<char> s;
    string name = "HELLO";
    
    for (char buffer : name)
    {
        s.push(buffer);
    }
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
    return 0;
}
