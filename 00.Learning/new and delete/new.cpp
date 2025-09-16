//create a two pointer and add
#include<iostream>
using namespace std;

int main(){
    int * ptr1 = new int;
    int * ptr2 = new int;

    *ptr1 = 10;
    *ptr2 = 20;

    cout <<*ptr1<<" + "<<*ptr2<<" = "<<*ptr1 + *ptr2 << endl;
}
