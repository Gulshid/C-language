#include<iostream>
using namespace std;
	
int add(int a,int b)
{
	return(a*b);
}

float add (double c,double d)
{
	return(c*d);
}
main()
{
	cout<<"THE INT VALUE IS="<<add(1,2)<<endl;
	cout<<"THE FLOAT VALUE IS="<<add(3.2,4.6)<<endl;
}
