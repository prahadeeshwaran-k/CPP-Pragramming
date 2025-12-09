//
// Created by prahadeesh on 11/6/25.
//
//what is the smart pointer?
//it is a continter or a rapper for a raw pointer

#include <iostream>
#include <memory>
using namespace std;

int main()
{
    unique_ptr<int> ptr1 = make_unique<int>(69);
    cout << "Address of prt1 is : " << ptr1.get() << endl;
    cout << "value at unique    : " << *ptr1 << endl;
}