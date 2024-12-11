#include<iostream>
using namespace std;

class Stack{
	public:
			int stack[5],n=5,top=-1;
		void push(int x){
		if(top==-1){
			cout<<"Stack is Full..."<<endl;
		}
		else
		{
			top++;
			stack[top]=x;
		}	
		
		
	}
	
		void pop(){
			if(top==-1){
				cout<<"Stack is empty..."<<endl;
			}
			else
			{
				cout<<"The Popped Element is..."<<stack[top];
				top--;
			}
		}
		
		int peak(){
			return stack[top];
		}
		
		void display(){
			if(top>0){
				cout<<"Stack Element are:"<<endl;
				for(int i=top; i>=0;i--){
					cout<<stack[i]<<endl;
				}
			}
			else{
				cout<<"Stack is empty..."<<endl;
			}
		}		
		
};

main(){
 Stack s1;
 s1.push(2);
 s1.push(2);
	s1.push(2);
	s1.push(2);
	s1.push(2);
	
	int x=s1.peak();
	cout<<x;
	
}