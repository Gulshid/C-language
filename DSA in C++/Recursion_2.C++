#include<iostream>
using namespace std;

int  fact(int fac){
	if(fac==0){
		return 1;
	}
	else{
		return fac*fact(fac-1);
	}
}

main(){
	int factorial;
	cout<<"Enter the number to find the factorial of that number:";
	cin>>factorial;
	cout<<"The factorial of "<<factorial<<" is "<<fact(factorial);
}