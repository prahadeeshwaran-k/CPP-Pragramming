#include <iostream>
#include <queue>
using namespace std;
// * https://www.geeksforgeeks.org/queue-cpp-stl/
// * also used std::priority_queue

/*
In C++, priority queue is a type of queue in which there is some priority assigned to the elements. According to this priority, elements are removed from the queue. By default, the value of the element being inserted is considered as priority. Higher its value, higher its priority. But this can be changed to any desired priority scheme as per requirement
*/

int main(){
    priority_queue<int> pq;
    pq.push(5);//{5}
    pq.push(2);//{5,2}
    pq.push(8);//{8,5,2}
    pq.emplace(10);//{10,8,5,2}

    cout <<pq.top()<<" \n";//print 10
    
    pq.pop();//{8,5,2}
    cout <<pq.top()<<" \n";//print 8
    //size,swap,empty are same as other

    //minimum heap
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(5);//{5}
    pq.push(2);//{2,5}
    pq.push(8);//{2,5,8}
    pq.emplace(10);//{2,5,8,10}
}