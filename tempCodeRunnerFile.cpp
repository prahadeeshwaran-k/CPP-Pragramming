#include<iostream>
#include <stack>
using namespace std;
char str[256] = "hello    vector   india";

int main(){
    stack<int> buf;
    int i = 0;
    int real = 0;
    int size = 1;
    cout << "Before : " << str <<"\n";

    while (str[i])
    {
        size++; i++;
    }
    i = 0;

    while (size>=0)// up to the \0
    {   
        if(str[i] == ' ' || str[i]=='\0'){
            while (!buf.empty())
            {
                str[real] = buf.top();
                buf.pop();
                real++;
            }
            
        }
        buf.push(str[i]);
        i++;
        size--;
    }
    cout<<"After  :"<<str;
}
