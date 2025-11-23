//Real Time Example
#include<iostream>
using namespace std;

//base class
class RBI // Abstract class
{
public:
    char name[20], accno[20];
    double sal, IR, tot_bal;
    int yr;

public:
    virtual void setdata() =0; // pure virtual function
    virtual void fd() =0; //pure virtual function
    virtual void print() =0; // pure virtual function
};

//derived 1 class
class AXIS : public RBI
{
    //internally
    //public:
    //char name[20],accno[20];
    //double sal,IR,tot_bal;
    //int yr;
public:
    void setdata()
    {
        cout << "--------------------------------" << endl;
        cout << "Welcome to AXIS Bank" << endl;
        cout << "enter the name.." << endl;
        cin >> name;
        cout << "enter the account number" << endl;
        cin >> accno;
        cout << "enter the salary...." << endl;
        cin >> sal;
        cout << "enter the no of years for Fixed deposit" << endl;
        cin >> yr;
        cout << "-----------------------------------------" << endl;
    }

    void fd()
    {
        IR = (sal * yr * 8.5) / 100;
        tot_bal = sal + IR;
    }

    void print()
    {
        cout << "------------------------------" << endl;
        cout << "Display the AXIS BANK ACCOUNT HOLDER" << endl;
        cout << "name=" << name << endl;
        cout << "accno=" << accno << endl;
        cout << "sal=" << sal << endl;
        cout << "yr=" << yr << endl;
        cout << "IR=" << IR << endl;
        cout << "total amount=" << tot_bal << endl;
        cout << "--------------------------------------" << endl;
    }
};


//derived 2 class
class HDFC : public RBI
{
    ////internally
    //public:
    //char name[20],accno[20];
    //double sal,IR,tot_bal;
    //int yr;
public:
    void setdata()
    {
        cout << "--------------------------------" << endl;
        cout << "Welcome to HDFC Bank" << endl;
        cout << "enter the name.." << endl;
        cin >> name;
        cout << "enter the account number" << endl;
        cin >> accno;
        cout << "enter the salary...." << endl;
        cin >> sal;
        cout << "enter the no of years for Fixed deposit" << endl;
        cin >> yr;
        cout << "-----------------------------------------" << endl;
    }

    void fd()
    {
        IR = (sal * yr * 9.5) / 100;
        tot_bal = sal + IR;
    }

    void print()
    {
        cout << "------------------------------" << endl;
        cout << "Display the HDFC BANK ACCOUNT HOLDER" << endl;
        cout << "name=" << name << endl;
        cout << "accno=" << accno << endl;
        cout << "sal=" << sal << endl;
        cout << "yr=" << yr << endl;
        cout << "IR=" << IR << endl;
        cout << "total amount=" << tot_bal << endl;
        cout << "--------------------------------------" << endl;
    }
};


//derived 3 class
class SBI : public RBI
{
    //////internally
    //public:
    //char name[20],accno[20];
    //double sal,IR,tot_bal;
    //int yr;

public:
    void setdata()
    {
        cout << "--------------------------------" << endl;
        cout << "Welcome to SBI Bank" << endl;
        cout << "enter the name.." << endl;
        cin >> name;
        cout << "enter the account number" << endl;
        cin >> accno;
        cout << "enter the salary...." << endl;
        cin >> sal;
        cout << "enter the no of years for Fixed deposit" << endl;
        cin >> yr;
        cout << "-----------------------------------------" << endl;
    }


    void fd()
    {
        IR = (sal * yr * 10.5) / 100;
        tot_bal = sal + IR;
    }

    void print()
    {
        cout << "------------------------------" << endl;
        cout << "Display the SBI BANK ACCOUNT HOLDER" << endl;
        cout << "name=" << name << endl;
        cout << "accno=" << accno << endl;
        cout << "sal=" << sal << endl;
        cout << "yr=" << yr << endl;
        cout << "IR=" << IR << endl;
        cout << "total amount=" << tot_bal << endl;
        cout << "--------------------------------------" << endl;
    }
};

int main()
{
    //RBI r1;//invalid
    RBI* ptr;
    int op;
    cout << "enter the option 1) Axis bank 2) HDFC bank 3) SBI Bank 4) EXIT" << endl;
    cin >> op;
    switch (op)
    {
    case 1:
        {
            AXIS a1;
            ptr = &a1;
            break;
        }
    case 2:
        {
            HDFC h1;
            ptr = &h1;
            break;
        }
    case 3:
        {
            SBI s1;
            ptr = &s1;
            break;
        }
    case 4: cout << "EXIT" << endl;
        return 0;
    default: cout << "invalid option" << endl;
        return 0;
    }
    ptr->setdata();
    ptr->fd();
    ptr->print();
}
