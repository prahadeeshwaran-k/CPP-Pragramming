#include <iostream>
#include <stack>
using namespace std;
// * https://www.geeksforgeeks.org/stack-in-cpp-stl/
// * also used std::stack

/*
In C++, stack container follows LIFO (Last In First Out) order of insertion and deletion. It means that most recently inserted element is removed first and the first inserted element will be removed last. This is done by inserting and deleting elements at only one end of the stack which is generally called the top of the stack.
*/


int main(){
    stack<int> st;

    st.push(1);//{1}
    st.push(2);//{2,1}
    st.push(3);//{3,2,1}
    st.push(4);//{4,3,2,1}
    st.push(5);//{5,4,3,2,1}

    cout << st.top()<<"\n";//print 5 ,//!st[2] is invalid

    st.pop();//st look like {4,3,2,1}

    st.size();//4

    st.empty();//if empty return true

    //swap a stack
    stack<int> st1,st2;
    st1.swap(st2);


    
}