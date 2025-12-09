//
// Created by prahadeesh on 12/9/25.
//#include <iostream>
using namespace std;

// Library classes(abstract class)
class Vehicle {
public:
    virtual void printVehicle() = 0; // Pure virtual function
};

class TwoWheeler : public Vehicle {
public:
    void printVehicle() override {
        cout << "I am two wheeler" << endl;
    }
};

class FourWheeler : public Vehicle {
public:
    void printVehicle() override {
        cout << "I am four wheeler" << endl;
    }
};

// Client (or user) class
class Client {
private:
    Vehicle* pVehicle;

public:
    Client(int type) {
        if (type == 1) {
            pVehicle = new TwoWheeler();
        } else if (type == 2) {
            pVehicle = new FourWheeler();
        } else {
            pVehicle = nullptr;
        }
    }

    void cleanup() {
        if (pVehicle != nullptr) {
            delete pVehicle;
            pVehicle = nullptr;
        }
    }

    Vehicle* getVehicle() {
        return pVehicle;
    }
};

// Driver program
int main() {
    Client pClient(1);
    Vehicle* pVehicle = pClient.getVehicle();
    if (pVehicle != nullptr) {
        pVehicle->printVehicle();
    }
    pClient.cleanup();
    return 0;
}