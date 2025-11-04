//Real Time Example
//friend class
#include<iostream>
using namespace std;
class Bank; // forward declaration
class ATM
{
public:
    void cash(Bank& ob4);
    void deposit(Bank& ob5);
};

class Bank
{
protected:
    char name[20], accno[20];
    int amount;

public:
    void setdata()
    {
        cout << "----------------------------" << endl;
        cout << "welcome to Axis bank" << endl;
        cout << "enter the name.." << endl;
        cin >> name;
        cout << "enter the accno.." << endl;
        cin >> accno;
        cout << "enter the amount.." << endl;
        cin >> amount;
        cout << "-----------------------------" << endl;
    }

    void print()
    {
        cout << "---------------------------------" << endl;
        cout << "Axis bank account holder" << endl;
        cout << "name=" << name << endl;
        cout << "accno=" << accno << endl;
        cout << "amount=" << amount << endl;
        cout << "---------------------------------" << endl;
    }

    friend class ATM; // given permission for ATM
};

void ATM::cash(Bank& ob4) //define member function outside the class
{
    int w;
    cout << "cash function is called" << endl;
    cout << "enter the cash withdraw amount" << endl;
    cin >> w;
    ob4.amount = ob4.amount - w;
    cout << "ob4.amount=" << ob4.amount << endl;
}

void ATM::deposit(Bank& ob5)
{
    int d;
    cout << "deposit function is called" << endl;
    cout << "enter the deposit amount" << endl;
    cin >> d;
    ob5.amount = ob5.amount + d;
    cout << "ob5.amount=" << ob5.amount << endl;
}

int main() //non-member function
{
    Bank ob1;
    ATM ob2;
    cout << "enter the ob1 data" << endl;
    ob1.setdata();
    cout << "display the ob1 data" << endl;
    ob1.print();
    cout << "cash" << endl;
    ob2.cash(ob1);
    cout << "deposit" << endl;
    ob2.deposit(ob1);
}
