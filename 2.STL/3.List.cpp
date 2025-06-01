#include <iostream>
#include <list>
using namespace std;
// * https://www.geeksforgeeks.org/list-cpp-stl/
// * list is used doubly linked list 
// * also used std::list
// * array size can't be change
// * list can change its size and its dynamic in nature
// * list also give front operation as well

int main(){
    list<int> ls;

    ls.push_back(2);//{2}
    ls.emplace_back(4);//{2,4}
    ls.push_front(5);//{5,2,4}
    ls.emplace_front(6);//{6,5,2,4}

    //rest of the function is same as vector
    //begin,end,rbegin,rend,clear,insert,size,swap

}