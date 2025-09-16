//create a two pointer and add
#include<iostream>
using namespace std;

int main(){
    int * ptr1 = new int;
    int * ptr2 = new int;
    
    if (!ptr1 && !ptr2) {
        cout << "allocation of memory failed";
        exit(0);
    }

    *ptr1 = 10;
    *ptr2 = 20;

    cout <<*ptr1<<" + "<<*ptr2<<" = "<<*ptr1 + *ptr2 << endl;
    delete ptr1,ptr2;
    ptr1 = ptr2 = nullptr;//use to avoid the dangling pointer
}
