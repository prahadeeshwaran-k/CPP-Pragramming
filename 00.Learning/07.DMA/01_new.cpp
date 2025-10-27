//create a two pointer and add
#include<iostream>
using namespace std;

int main()
{
    int* ptr1 = new int;
    int* ptr2 = new int;

    if (!ptr1 && !ptr2)
    {
        cout << "allocation of memory failed";
        exit(0);
    }

    *ptr1 = 10;
    *ptr2 = 20;
    cout << *ptr1 << " + " << *ptr2 << " = " << *ptr1 + *ptr2 << endl;

    ptr1 = ptr2 = nullptr; //use to avoid the dangling pointer
    delete ptr1, ptr2;

    //interesting in c++ we and allocate and assign at the same line 
    int* ptr3 = new int(70); //like this
    int* ptr4 = new int(30);
    cout << *ptr3 << " + " << *ptr4 << " = " << *ptr3 + *ptr4 << endl;
}
