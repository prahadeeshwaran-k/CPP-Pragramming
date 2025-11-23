//
// Created by prahadeesh on 11/23/25.
//
// This example uses inheritance, method overriding, and virtual functions.
#include <iostream>
#include <vector>
#include <memory>

using namespace std;

// 1. Base Class: Defines the common interface
class Animal {
public:
    // The 'virtual' keyword enables Run-Time Polymorphism
    virtual void makeSound() const {
        cout << "The animal makes a generic sound." << endl;
    }

    // Virtual destructor is good practice when using virtual methods
    virtual ~Animal() = default;
};

// 2. Derived Class 1: Overrides the method
class Dog : public Animal {
public:
    void makeSound() const override {
        cout << "The dog barks: Woof! Woof!" << endl;
    }
};

// 3. Derived Class 2: Overrides the method
class Cat : public Animal {
public:
    void makeSound() const override {
        cout << "The cat meows: Meow!" << endl;
    }
};

// Main function to demonstrate Polymorphism
int main() {
    // 4. Using Base Class Pointers/References

    // We create a vector that holds Pointers to the Base Class (Animal)
    vector<unique_ptr<Animal>> farm;

    // We store objects of Derived Classes in the Base Class Pointers
    farm.push_back(make_unique<Dog>());
    farm.push_back(make_unique<Cat>());
    farm.push_back(make_unique<Animal>()); // Can also store a base class object

    cout << "--- Polymorphism in Action ---" << endl;

    // 5. The Polymorphic Call
    // Loop through the list of Animal pointers.
    // The *exact* function that is called is determined at RUNTIME.
    for (const auto& animalPtr : farm) {
        animalPtr->makeSound(); // This is the single, polymorphic call
    }

    return 0;
}

/*
*Explanation

    The virtual Keyword: In the Animal base class, declaring virtual void makeSound() const is the key.
    It tells the compiler: "Don't hard-code the function call now; when you see a call to makeSound() through
    a pointer or reference, check the actual type of the object at runtime and call its specific version."

    The Single Interface: The code uses a loop and a single line of code, animalPtr->makeSound(),
    to interact with three different object types (Dog, Cat, and Animal).

    Run-Time Resolution:
        For the first element (Dog), the program correctly executes the Dog::makeSound() function.
        For the second element (Cat), it correctly executes the Cat::makeSound() function.
        The code handles many forms of objects through one uniform call, demonstrating polymorphism.

This makes the code highly flexible and easy to extend.
If you add a new class, say Cow, you just add it to the farm vector,
and the existing loop automatically knows how to call the Cow's specific makeSound().
 */