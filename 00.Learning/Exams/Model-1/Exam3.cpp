//
// Created by prahadeesh on 11/9/25.
//
// Write a program to impliment following operators using member function
// ob3=(ob1+ob2)*ob4

#include<iostream>
using namespace std;
class A{
	public:
		int x;
		
		A(){
			x=0;
		}

		A(int x){
			this->x = x;
		}

		void print(){
			cout<<"X = " << x <<endl;
		}

		A operator*(A &ref){
			A temp;
			temp.x = ref.x *x;
			return temp;
		}

		A operator+(A &ref){
			A temp;
			temp.x = ref.x + x;
			return temp;
		}
};

int main(){
	A obj1(10),obj2(20),obj3(30),obj4;
	obj4 = (obj1 + obj2) * obj3;
	obj4.print();
}

