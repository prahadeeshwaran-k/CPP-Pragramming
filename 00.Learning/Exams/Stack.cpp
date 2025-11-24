//
// Created by prahadeesh on 11/24/25.
//

#include<iostream>
template <class type>
class node{
	public:
		type data;
		node<type> *next;
		
		node(){
			next = nullptr;
		}
};

template <class type>
class mystack{
	public:
		node<type> *head;

		mystack(){
			head =nullptr;
		}

		void push(type data){
			node<type>*temp = new node<type>;
			temp->data = data;
			temp->next = head;
			head = temp;
		}

		void pop(){
			if(head == nullptr){
				cout<<"underflow"<<endl;
				return;
			}
			node<type> *temp = head;
			head = head->next;
			delete temp;
		}
		void display(){
			node<type>*temp = head;
			while(temp != nullptr){
				cout << temp->data <<endl;
				temp = temp->next;
			}
		}
}
