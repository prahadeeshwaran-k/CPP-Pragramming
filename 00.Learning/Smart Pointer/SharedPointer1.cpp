//
// Created by prahadeesh on 11/6/25.
//
//what is the shared pointer?
//it is a shared pointer ac shared with multiple pointer,unlike unique pointer.

#include <iostream>
#include <memory>
using namespace std;

int main()
{
    shared_ptr<int> ptr1 = make_shared<int>(69);// it has the count of all the owners is refered
    cout << "shared count : " << ptr1.use_count() << endl;
    //create another owner.
    shared_ptr<const int> ptr2 = ptr1;
    cout << "shared count : " << ptr1.use_count() << endl;
}