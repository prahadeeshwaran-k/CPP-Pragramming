//
// Created by prahadeesh on 11/6/25.
// when you assign the specific memory location to a shared pointer. it increase the no of owners
// weak pointers is not increase the no of owners counts
// means we use weak pointers to observe the object in memory.
// then the weak pointer will not keep alive the object
// shared pointer keep it alive.

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
    weak_ptr<int> Wptr1;
    {
        shared_ptr<int> Sptr1 = make_shared<int>(99);
        Wptr1 = Sptr1; //here it have a strong reference
    }
    //After this line it have weak reference;
}
