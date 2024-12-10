#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
	Node *prev;
};

Node *first=NULL;

void insert(int x){
	Node *new_node=new Node;
	new_node->data=x;
	new_node->next=first;
	new_node->prev=NULL;
	if(first!=NULL){
		first->prev=new_node;
	}
	
	first=new_node;
	
}

void print(){
	cout<<"The doubly linked list :"<<endl;
	Node *tem=first;
	while(tem!=NULL){
		cout<<tem->data<<" ";
		tem=tem->next;
	}
}
main(){
	insert(2);
	insert(3);
	insert(1);
	print();
	
}