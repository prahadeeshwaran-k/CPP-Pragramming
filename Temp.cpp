#include <iostream>

// 1. Standard class with a PUBLIC constructor
class PublicDemo {
public:
    // This public constructor can be called from anywhere
    PublicDemo() {
        std::cout << "PublicDemo created." << std::endl;
    }
};

// ---

// 2. Class with a PRIVATE constructor (Singleton Pattern)
// Only the class itself can create an instance.
class Singleton {
private:
    // The constructor is private
    Singleton() {
        std::cout << "Singleton instance created." << std::endl;
    }

    static Singleton* instance; // A static pointer to hold the one instance

public:
    // Public static method to get the one and only instance
    static Singleton* getInstance() {
        if (instance == nullptr) {
            instance = new Singleton(); // Allowed, because we are *inside* the class
        }
        return instance;
    }

    // Deleted copy constructor and assignment operator to prevent cloning
    Singleton(const Singleton&) = delete;
    void operator=(const Singleton&) = delete;
};

// Initialize the static instance pointer to null
Singleton* Singleton::instance = nullptr;

// ---

// 3. Class with a PROTECTED constructor (Base Class)
// Only this class or its subclasses (children) can call this constructor.
class Base {
protected:
    // Protected constructor
    Base(int val) : value(val) {
        std::cout << "Base protected constructor called with value: " << value << std::endl;
    }
private:
    int value;
};

// Derived class 'inherits from' Base
class Derived : public Base {
public:
    // The Derived class can call the Base class's protected constructor
    Derived(int val) : Base(val) {
        std::cout << "Derived constructor called." << std::endl;
    }
};

// ---

int main() {
    // 1. PUBLIC: Works perfectly fine
    std::cout << "--- Public Example ---" << std::endl;
    PublicDemo demo;
    std::cout << "\n";


    // 2. PRIVATE:
    std::cout << "--- Private Example (Singleton) ---" << std::endl;
    // This line will cause a compile error because the constructor is private:
    // Singleton s1; // ERROR: 'Singleton::Singleton()' is private

    // You MUST use the public static method to get the instance
    Singleton* s1 = Singleton::getInstance();
    Singleton* s2 = Singleton::getInstance(); // This will return the *same* instance

    std::cout << "Address of s1: " << s1 << std::endl;
    std::cout << "Address of s2: " << s2 << std::endl;
    std::cout << "\n";


    // 3. PROTECTED:
    std::cout << "--- Protected Example (Inheritance) ---" << std::endl;
    // This line will cause a compile error because the constructor is protected:
    // Base b(10); // ERROR: 'Base::Base(int)' is protected

    // You can create an instance of the *Derived* class,
    // which then calls the protected Base constructor internally.
    Derived d(20);

    return 0;
}