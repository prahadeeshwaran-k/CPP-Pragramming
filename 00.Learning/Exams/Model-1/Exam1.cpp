//
// Created by prahadeesh on 11/5/25.
//
//write a program in C++ to swap two member using friend function
/* example
 input: a = 6   b = 9
 input: a = 9   b = 6
 */

#include <iostream>
using namespace std;

class Plot{
private:
    int x,y;
    friend void swap(Plot &ref);

public:
    Plot()
    {
        x=y=0;
    }
    Plot(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    void print()
    {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

void swap(Plot &ref)
{
    int temp = ref.x;
    ref.x = ref.y;
    ref.y = temp;
}

int main()
{
    int x,y;
    cout << "Enter x and y" << endl;
    cin>> x >> y;
    Plot a(x,y);
    a.print();
    swap(a);
    a.print();
}