#include<iostream>
using namespace std;
class wife; // forward declaration
// it informs to the compiler that class wife specifications will be appear later
class husband
{
private:
    char name[20]; //data member
    int sal; // data member
public:
    void setdata() //member function,it is part of class
    {
        cout << "--------------------------" << endl;
        cout << "enter the husband details" << endl;
        cout << "enter the name.." << endl;
        cin >> name;
        cout << "enter the salary..." << endl;
        cin >> sal;
        cout << "--------------------------" << endl;
    }

    void print()
    {
        cout << "-----------------------------------" << endl;
        cout << "display the husband details" << endl;
        cout << "name=" << name << endl;
        cout << "sal=" << sal << endl;
    }

    friend void add(husband& ob4, wife& ob5);
};

class wife
{
private:
    char name[20]; //data member
    int sal; //data member
public:
    void setdata()
    {
        cout << "-------------------------" << endl;
        cout << "enter the wife details" << endl;
        cout << "enter the name.." << endl;
        cin >> name;
        cout << "enter the sal.." << endl;
        cin >> sal;
        cout << "-------------------------" << endl;
    }

    void print()
    {
        cout << "--------------------------" << endl;
        cout << "display the wife details" << endl;
        cout << "name=" << name << endl;
        cout << "sal=" << sal << endl;
        cout << "-------------------------" << endl;
    }

    friend void add(husband& ob4, wife& ob5);
};

void add(husband& ob4, wife& ob5) //non-member function,it is not part of class
{
    cout << "add function is called" << endl;
    int tot;
    tot = ob4.sal + ob5.sal;

    cout << "tot=" << tot << endl;
}


int main() //non-member function,it is not part of class
{
    husband ob1;
    cout << "enter the ob1 data" << endl;
    ob1.setdata();
    cout << "display the ob1 data" << endl;
    ob1.print();
    wife ob2;
    cout << "enter the ob2 data" << endl;
    ob2.setdata();
    cout << "display the ob2 data" << endl;
    ob2.print();
    cout << "add function" << endl;
    add(ob1, ob2); //two objects data passed to the non-member function explicitly
}
