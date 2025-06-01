#include <iostream>
#include <set>
using namespace std;
// * https://www.geeksforgeeks.org/multiset-in-cpp-stl/
// * also used std::multiset
// ! store duplicate in the set
// ! store every thing in the NOT UNIQUE
// ! store every thing in the SORTED

/*
In C++, multiset is an associative container similar to the set, but it can store multiple elements with same value. It is sorted in increasing order by default, but it can be changed to any desired order. It provides fast insertion, deletion and search operations.
*/

int main(){
    multiset<int> ms;
    ms.insert(1);//{1}
    ms.emplace(1);//{1,1}
    ms.insert(1);//{1,1,1}
    ms.insert(4);//{1,1,1,4}
    ms.insert(4);//{1,1,1,4,4}

    ms.erase(1);//all the 1's will erased {4,4} //!->like {erase(element)}

    int cnt = ms.count(1);
    ms.erase(ms.find(4));// ->it will find out the first 4 and the erase{4}//! ->like {erase(Address)}

    //ms.erase(ms.find(4),ms.find(1)+2); -> find 4 and go till 2


}