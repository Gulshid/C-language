#include<iostream>
using namespace std;

int fact(int x){
	if(x==0||x==1){
		return 1;
	}
	else {
		return x*fact(x-1);
	}
}
main(){
	int var;
	cout<<"Enter the number for factorial:";
	cin>>var;
	int result=fact(var);
	cout<<"The factorial of "<<var<< " is "<<result;
}