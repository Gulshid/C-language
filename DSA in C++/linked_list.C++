#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
		
};

Node *first_data=NULL;

void insert(int x){
	
	Node *new_node=new Node;
	new_node->data=x;
	new_node->next=first_data;
	first_data=new_node;
	
}


void print(){
	cout<<"Singly Linked list Element is :";
	Node *temp=first_data;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}


main(){
	insert(10);
	insert(8);
	insert(6);
	insert(4);
	insert(2);
	print();
}