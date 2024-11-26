#include<iostream>
using namespace std;
main()
{
	int var=5;
	int *pointvalue=&var;
	cout<<"Var="<<var<<endl;
	cout<<"Adress of variable is:"<<&var<<endl;
	cout<<"***********"<<endl;
	cout<<"Point value is :"<<pointvalue<<endl;
	cout<<"Again the value of variable is:"<<*pointvalue<<endl;
}
