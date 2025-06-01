#include <iostream>
#include <deque>
using namespace std;
// * https://www.geeksforgeeks.org/deque-cpp-stl/
// * Deque or Double-Ended Queue is sequence containers with the feature of expansion 
// * and contraction on both ends. It means we can add and remove the data to and from both 
// * also used std::deque

/*
In C++, deque container provides fast insertion and deletion at both ends. Stands for Double Ended QUEue, it is a special type of queue where insertion and deletion operations are possible at both the ends in constant time complexity.
*/


int main(){
    deque<int>dq;
    dq.push_back(1);;//{1}
    dq.emplace_back(2);//{1,2}
    dq.push_front(4);//{4,1,2}
    dq.emplace_front(3);//{3,4,1,2}

    dq.pop_back();//{3,4,1}
    dq.pop_front();//{4,1}

    dq.back();
    dq.front();

    //rest of the function is same as vector
    //begin,end,rbegin,rend,clear,insert,size,swap

}