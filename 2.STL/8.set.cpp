#include <iostream>
#include <set>
using namespace std;
// * https://www.geeksforgeeks.org/set-in-cpp-stl/
// * also used std::set
// ! store every thing in the UNIQUE
// ! store every thing in the SORTED

/*
In C++, sets are associative container which stores unique elements in some sorted order. By default, it is sorted ascending order of the keys, but this can be changed as per requirement. It provides fast insertion, deletion and search operations.
*/

int main(){
    set<int> st;
    st.insert(1);//{1}
    st.emplace(2);//{1,2}
    st.insert(2);//{1,2}
    st.insert(4);//{1,2,4}
    st.insert(4);//{1,2,3,4}

    //functionality of insert in vector
    //can be used also that only increase

    //rest of the function is same as vector
    //begin,end,rbegin,rend,clear,insert,size,swap

    //{1,2,3,4,5}
    auto it= st.find(3);

    //{1,2,3,4,5}
    auto it= st.find(6);// !-> if the element is not in the set it always return set.end()

    st.erase(4);//{1,2,3} take logarithmic time

    //count
    int cnt = st.count(1);
    //if 1 is in the set give -> 1
    //ifnot in the set give -> 0

    //can erase buy element or address
    auto it2 = st.find(3);
    st.erase(it2);

    // !lower bound()
    // !upper bound() 


}