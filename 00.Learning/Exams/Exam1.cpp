/*
Write a program to create a class called student with the following members

Data members:
a) Integer variable roll no
b) string variable name
c) float variable m1,m2,m3,tot   (summation of m1,m2,m3)

Member functions:
a) define  default or parameterized constructors for initializing the data members
b) Define a member function to display the data members.
c) Define a function  called compare to compare the total marks of two objects and display the complete object details whose tot is highest
*/

#include <iostream>
using namespace std;

class Student{
    private:
        int rollno;
        string name;
        float m1,m2,m3,tot;
    
    public:
        Student(){
            m1 = m2 = m3 = tot =  0;
            name = "";
            rollno = 0;
        }

        Student(
            int _rollno, string _name, int _m1, int _m2, int _m3){
                rollno = _rollno;
                m1 = _m1;
                m2 = _m2;
                m3 = _m3;
                tot = _m1 + _m2 + _m3;
                name = _name;
        }

        void print(void){
            cout<<"Roll NO:"<<rollno<<endl;
            cout<<"Name:"<<name<<endl;
            cout<<"M1:"<<m1<<endl;
            cout<<"M2:"<<m2<<endl;
            cout<<"M3:"<<m3<<endl;
            cout<<"Total:"<<tot<<endl<<endl;
        }

    friend void compare(Student &A, Student&B);
};

void compare(Student &A, Student&B){
        if(A.tot == B.tot)
            cout<<"Both "<<A.name<<" & "<<B.name<<" Are Same Marks"<<endl;
        else if(A.tot > B.tot)
            cout<<A.name<<" Got More Marks then "<<B.name <<endl;
        else
            cout<<B.name<<" Got More Marks then "<<A.name <<endl;
    }

int main(){
    Student st1(1,"Bala",89,83,99),
            st2(2,"Sunder",90,97,99);
    
    st1.print();
    st2.print();

    compare(st1,st2);
}