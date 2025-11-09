//Assignment operator overloading function 
//shallow copy
#include<iostream>
#include<string.h>
using namespace std;

class A
{
public:
    char* ptr; // data member
public:
    A()
    {
        cout << "default constructor" << endl;
        cout << "ptr=" << ptr << endl;
    }

    A(char* p)
    {
        //6+1 = 7 bytes
        ptr = new char[strlen(p) + 1];
        cout << "parameterized constructor" << endl;
        strcpy(ptr, p);
    }

    void modify()
    {
        ptr[0] = 'S';
    }

    void print()
    {
        cout << "ptr=" << ptr << endl;
    }
};

int main()
{
    A ob1("vector");
    cout << "display the ob1 data" << endl;
    ob1.print();
    A ob2;
    cout << "display the ob2 data" << endl;
    ob2.print();
    ob2 = ob1; //ob2.operator=(ob1)
    // ob2 going to invoke Assignment operator function
    cout << "display the ob2 data" << endl;
    ob2.print();
    cout << "after modify" << endl;
    ob1.modify();
    cout << "display the ob1 data" << endl;
    ob1.print();
    cout << "display the ob2 data" << endl;
    ob2.print();
}
