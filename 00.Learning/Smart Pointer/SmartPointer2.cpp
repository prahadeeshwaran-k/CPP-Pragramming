//
// Created by prahadeesh on 11/6/25.
//
// A unique_ptr cannot be copied or shared. It can only be moved.
// This is because unique_ptr enforces *unique ownership*.
//

#include <iostream>
#include <memory>
using namespace std;

int main()
{
    unique_ptr<int> ptr1 = make_unique<int>(69);

    // unique_ptr<int> ptr2 = ptr1;  // Error: copy is not allowed
    // To transfer ownership, we must use std::move()

    unique_ptr<int> ptr2 = move(ptr1);
    // Now ptr2 becomes the sole owner.
    // ptr1 becomes nullptr after move.

    cout << "Address stored in ptr2 : " << ptr2.get() << endl;
    cout << "Value pointed by ptr2  : " << *ptr2 << endl;

    // ptr1 is now empty (nullptr)
    cout << "ptr1 after move        : " << ptr1.get() << endl;
}
