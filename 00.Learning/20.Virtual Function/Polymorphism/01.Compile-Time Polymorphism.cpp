//
// Created by prahadeesh on 11/23/25.
// Function Overloading Example
// Same function name add() but different parameter types.

/*
Polymorphism = one interface, many forms
Supports flexibility and code reusability
Two types:
    Compile-Time → Overloading
    Run-Time → Overriding using virtual
*/
#include <iostream>
using namespace std;

class Math {
public:
    int add(int a, int b) {
        return a + b;
    }

    float add(float a, float b) {
        return a + b;
    }
};

int main() {
    Math m;
    cout << m.add(5, 10) << endl;
    cout << m.add(2.5f, 3.7f) << endl;
}
