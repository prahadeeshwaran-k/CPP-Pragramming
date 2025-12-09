//
// Created by prahadeesh on 12/9/25.
//
#include <iostream>
using namespace std;

class singleton
{
private:
    singleton() = default; // this is default specifier

public:
    int data;

    static singleton *get_instance()
    {
        // A object created in the static member.
        // static local variables is good for singleton because
        // if multiple threads use our  singleton it won't allow multiple singleton object set created.
        static singleton instance; // because of this static variable the life-time of the object is end of the program
        return &instance; //return the address of static instance
    }

    singleton(const singleton &) = delete; //explicitly delete the copy constructor.
    singleton(singleton &&) = delete;      //delete move constructor/
    singleton& operator=(const singleton &) = delete; //delete assignment operator.
    singleton& operator=(singleton &&) = delete; //delete move assignment operator.
};

int main()
{
    //singleton bad_singleton; //singleton cant create a object with in a scope it must be in global pointer
    singleton* singleton1 = singleton::get_instance();
    singleton1->data = 10;
    cout << singleton1->data << endl;

    singleton* singleton2 = singleton::get_instance();
    cout << singleton2->data << endl;

    singleton::get_instance()->data = 50; //get the pointer an and deference it.

    cout << singleton1->data << endl;
    cout << singleton2->data << endl;

    //after delete the copy constructor it won't work
    //singleton singletonN = singleton1; // THIS IS COPY CONSTRUCTOR
    //singletonN->data = 100; //
    // cout << singleton1->data << endl;
   // cout << singletonN->data << endl;


}