//
// Created by prahadeesh on 11/6/25.
//
//what is the shared pointer?
//it is a shared pointer ac shared with multiple pointer,unlike unique pointer.

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
    shared_ptr<A> ptr1 = make_shared<A>();// it has the count of all the owners is refered
    cout << "shared count : " << ptr1.use_count() << endl;
    {
        //create another owner.
        shared_ptr<A> ptr2 = ptr1;
        cout << "shared count : " << ptr1.use_count() << endl;
    }
    cout << "shared count : " << ptr1.use_count() << endl;

}