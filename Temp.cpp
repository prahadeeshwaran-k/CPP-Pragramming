#include<iostream>
using namespace std;
class Test
{
    static int count;
public:
    static void get_data()
    {
        count++;
    }
};
int Test::count=1;

int main()
{
    Test t;
    t.get_data();
}