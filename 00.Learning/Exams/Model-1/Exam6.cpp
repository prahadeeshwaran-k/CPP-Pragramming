//
// Created by prahadeesh on 11/9/25.
//Write a program to insertion operator(<<) and extertion operator(>>) using friend function
#include <iostream>
using namespace std;
class A
{
    public:
        string name;

        friend ostream& operator<<(ostream& os,A& obj);
        friend istream& operator>>(istream& is,A& obj);
};

ostream& operator<<(ostream& print, A& obj)
{
    print << "A: " << obj.name << endl;
    return print;
}

istream& operator>>(istream& scanf,A& obj)
{
    scanf >> obj.name;
    return scanf;
}

int main()
{
    A obj1;
    cout << "Enter the String" << endl;
    cin >> obj1;
    cout << obj1 << endl;
}