// Lazy Singleton: Instance created only when needed
#include <iostream>
using namespace std;

class LazySingleton
{
private:
    LazySingleton() { cout << "Lazy Singleton Created\n"; }

    // Pointer created lazily
    static LazySingleton* instance;

public:
    int data;

    static LazySingleton* get_instance()
    {
        if (instance == nullptr)
        {
            instance = new LazySingleton(); // created only once
        }
        return instance;
    }

    // Disable copying
    LazySingleton(const LazySingleton &) = delete;
    LazySingleton(LazySingleton &&) = delete;
    LazySingleton& operator=(const LazySingleton &) = delete;
    LazySingleton& operator=(LazySingleton &&) = delete;
};

// Define static pointer and initialize to NULL
LazySingleton* LazySingleton::instance = nullptr;

int main()
{
    LazySingleton* l1 = LazySingleton::get_instance();
    l1->data = 42;

    LazySingleton* l2 = LazySingleton::get_instance();
    cout << l2->data << endl; // Prints 42

    return 0;
}
