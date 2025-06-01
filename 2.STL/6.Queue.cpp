#include <iostream>
#include <queue>
using namespace std;
// * https://www.geeksforgeeks.org/queue-cpp-stl/
// * also used std::stack

/*
In C++, queue container follows the FIFO (First In First Out) order of insertion and deletion. According to it, the elements that are inserted first should be removed first. This is possible by inserting elements at one end (called back) and deleting them from the other end (called front) of the data structure.
*/


int main(){
    queue<int> q;
    q.push(1);//{1}
    q.push(2);//{1,2}
    q.push(3);//{1,2,3}
    q.emplace(4);//{1,2,3,4}

    q.back() += 5;

    cout << q.back() <<" \n";//print 9
    //{1,2,3,4}
    cout << q.front() <<"\n";//print 1

    q.pop();//{2,3,9}
    cout << q.front() <<"\n";//print 2

}