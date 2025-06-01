#include <iostream>
#include <unordered_set>
using namespace std;
// * https://www.geeksforgeeks.org/unordered_set-in-cpp-stl/
// * also used std::unordered_set
// ! store every thing in the UNIQUE
// ! store every thing in the NOT-SORTED ORDER
// ! store in a randomized order time complexity 0(1)

/*
In C++, unordered_set is an unordered associative container that stores unique elements. Unlike set, it stores its elements using hashing. This provides average constant-time O(1) search, insert, and delete operations but the elements are not sorted in any particular order.
*/

int main(){
    unordered_set<int> st;
    //lower bound and upper_bound function
    // does not works, rest all functions are same
    // as above, it does not stores in any
    // particular order it has a better complexity
    // than set in most cases, except some when collision happens

}