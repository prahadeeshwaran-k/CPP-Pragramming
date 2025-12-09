//
// Created by prahadeesh on 11/6/25.
//
// A unique_ptr cannot be Shared.
//


#include <iostream>
#include <memory>
using namespace std;

class A
{
public:
    A()
    {
        cout << "Constructor Invoked " << endl;
    }

    ~A()
    {
        cout << "Destructor Invoked " << endl;
    }
};

int main()
{
    {
        unique_ptr<A> ptr1 = make_unique<A>();
    }//after this scope the unique ptr is deleted automatically
}
