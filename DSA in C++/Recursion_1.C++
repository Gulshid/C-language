#include<iostream>
using namespace std;

void message(int t){
	if(t>0){
		cout<<"This is Recursion function...."<<t<<endl;
		message(t-1);
	}
	return;
}
main(){
	int l;
	cout<<"Enter the number:";
	cin>>l;
	message(l);
}