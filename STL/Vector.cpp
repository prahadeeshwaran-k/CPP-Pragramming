#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> v;
    v[0] =10;
    v.push_back(20);
    v.push_back(21);
    v.emplace_back(31); 
    v.emplace_back(32);

    vector<int> v1(5,100);//{100,100,100,100,100}
    vector<int> v2(5,20);//{20,20,20,20,20}
    vector<int> v3(v2);//{v2 fully create a copy}


}