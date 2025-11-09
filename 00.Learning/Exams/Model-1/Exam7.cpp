//
// Created by prahadeesh on 11/9/25.
//
#include <iostream>
using namespace std;

class Student{
private:
    int rollno;
    string name;
    float m1, m2, m3, tot;

public:
    Student(){
        m1 = m2 = m3 = tot = 0;
        rollno = 0;
        name = "";
    }

    Student(int _rollno, string _name, int _m1, int _m2, int _m3){
        rollno = _rollno;
        name = _name;
        m1 = _m1;
        m2 = _m2;
        m3 = _m3;
        tot = m1 + m2 + m3;
    }

    float getTotal() const {
        return tot;
    }

    void print() const {
        cout << "Roll NO: " << rollno << endl;
        cout << "Name   : " << name << endl;
        cout << "M1     : " << m1 << endl;
        cout << "M2     : " << m2 << endl;
        cout << "M3     : " << m3 << endl;
        cout << "Total  : " << tot << endl;
        cout << "--------------------------\n";
    }
};

int main() {
    Student st[5] = {
        Student(1, "Bala",   89, 83, 99),
        Student(2, "Sunder", 90, 97, 99),
        Student(3, "Kumar",  78, 88, 67),
        Student(4, "Arun",   91, 55, 44),
        Student(5, "Vijay",  88, 90, 92)
    };

    for(int i = 0; i < 5; i++){
        for(int j = i + 1; j < 5; j++){
            if(st[j].getTotal() > st[i].getTotal()){
                Student temp = st[i];
                st[i] = st[j];
                st[j] = temp;
            }
        }
    }

    cout << "\nSorted Students by Total Marks (Highest First):\n";
    cout << "===============================================\n";

    for(int i = 0; i < 5; i++){
        st[i].print();
    }

    return 0;
}
