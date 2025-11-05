// Write a program to impliment following operators using member function
// ob3=ob1*ob2/ob4

#include <iostream>
using namespace std;

class a
{
public:
    int x;
    int y;

public:
    a()
    {
        x = y = 0;
    }

    a(int a, int b)
    {
         x = a;
         y = b;
    }

    void print()
    {
        cout << x << ", " << y;
    }

    a operator*(const a &ref)
    {
        a temp;
        if (ref.x != 0 && ref.y != 0)
        {
            temp.x = x*ref.x;
            temp.y = y*ref.y;
        }else
        {
            cout << x << ", " << y;
            cout << " try to multiple with 0 not Possible"<<endl;
            temp.x = 0;
            temp.y = 0;
        }
        return temp;
    }

    a operator/(const a &ref)
    {
        a temp;
        if (ref.x != 0 && ref.y != 0)
        {
            temp.x = x/ref.x;
            temp.y = y/ref.y;
        }else
        {
            cout << x << ", " << y;
            cout << " try to divide with 0 not Possible" <<endl;
            temp.x = 0;
            temp.y = 0;
        }
        return temp;
    }
};

int main()
{
    a ob1(10,20),ob2(30,40),ob3(50,60);
    a ob4 = (ob1*ob2)/ob3;
    ob4.print();
}
