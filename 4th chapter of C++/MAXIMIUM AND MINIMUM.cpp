#include<iostream>
using namespace std;

int max(int a,int b)
{
	int x=a>b?a:b;
	return(x);
}

int min(int c,int d)
{
	int y=c<d?c:d;
	return(y);
}

main()
{
	cout<<"THE MAXIMIUM VALUE IS ="<<max(10,5)<<endl;
	cout<<"THE MINIMIUM VALUE IS ="<<min(10,5)<<endl;
}
