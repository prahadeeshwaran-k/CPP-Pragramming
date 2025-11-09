// (extraction operator >>)
#include<iostream>
using namespace std;

class A
{
private:
    int x; // data member
public:
    void print()
    {
        cout << "x=" << x << endl;
    }

    friend istream& operator>>(istream& in, A& ob4);
};

istream& operator>>(istream& in, A& ob4) //non-member function
{
    cout << "extraction operator function  is called" << endl;
    in >> ob4.x;

    return in; // reference object return cin
}

int main()
{
    A ob1, ob2;
    cin >> ob1 >> ob2; //step1:
    // cin>>ob1;
    //operator>>(cin,ob1);
    // it is going to invoke extraction operator function
    // cin
    // step 2:
    // cin>>ob2;
    // operator>>(cin,ob2);

    // cin


    cout << "display the ob1 data" << endl;
    ob1.print();
    cout << "display the ob2 data" << endl;
    ob2.print();
}
