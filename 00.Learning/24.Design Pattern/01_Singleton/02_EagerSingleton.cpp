//
// Created by prahadeesh on 12/9/25.
//
// Eager Singleton: Instance created at load time
#include <iostream>
using namespace std;

class EagerSingleton
{
private:
    // Constructor is private to block external object creation
    // means I can't access the function outside the class
    EagerSingleton() { cout << "Eager Singleton Created\n"; }

    // Static instance created eagerly
    // but here we only create the inside the class only.
    static EagerSingleton instance;

public:
    int data;

    // Public accessor
    static EagerSingleton* get_instance()
    {
        return &instance;
    }

    // Disable copy/move operations
    EagerSingleton(const EagerSingleton &) = delete;
    EagerSingleton(EagerSingleton &&) = delete;
    EagerSingleton& operator=(const EagerSingleton &) = delete;
    EagerSingleton& operator=(EagerSingleton &&) = delete;
};

// Definition of static instance (created before main)
EagerSingleton EagerSingleton::instance;

int main()
{
    EagerSingleton* e1 = EagerSingleton::get_instance();
    e1->data = 100;

    EagerSingleton* e2 = EagerSingleton::get_instance();
    cout << e2->data << endl; // Prints 100

    return 0;
}
