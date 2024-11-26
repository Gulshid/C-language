#include<iostream>
using namespace std;

int num(int a,int b)
{
	return(a+b);
}


int mark(int e,int r)
{
	return(e+r);
}

main()
{
	int e=2; int r=5;
	cout<<"THE MARK FUNCTION VALUE IS ="<<mark(e,r)<<endl;
	cout<<"THE NUM FUNCTION VALUE IS ="<<num(2,5)<<endl;
}
