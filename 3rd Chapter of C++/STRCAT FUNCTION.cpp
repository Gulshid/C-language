#include<iostream>
#include<string.h>
using namespace std;
main()
{
	string a="CLASS ";
	char b[20];
	
	a.copy(b,5,0);
	cout<<"the value of b="<<b;
}
