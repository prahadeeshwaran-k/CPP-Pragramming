//
// Created by prahadeesh on 11/23/25.
// Achieved using inheritance + virtual functions.
// Function Overriding Example

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

// !! note if the derived have not the implementation of its own virtual function definition.
// !! it takes the base class function.
class Dog : public Animal {
public:
    //void sound() override {
    //    cout << "Dog barks" << endl;
    //}
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows" << endl;
    }
};
// note here the pointer is pointing the base class type
int main() {
    Animal* a;

    a = new Dog();
    a->sound(); // Dog barks

    a = new Cat();
    a->sound(); // Cat meows
}
