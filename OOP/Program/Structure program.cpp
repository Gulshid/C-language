#include<iostream>
using namespace std;

struct student
{
	int x;
	string a;
	char b;
	float c;
	
};

main()
{
	student s1;
	cout<<"Enter the value for integer:::";
	cin>>s1.x;
	
	
	cout<<"Enter the value for String:::";
	cin>>s1.a;
	
	cout<<"Enter the value for floating:::";
	cin>>s1.c;
	
	cout<<"Enter the value for character:::";
	cin>>s1.b;
	
	cout<<"*******************************"<<endl;
	cout<<"The String value is :"<<s1.a<<endl;
	cout<<"The Character value is:"<<s1.b<<endl;
	cout<<"The integer value is :"<<s1.b<<endl;
	cout<<"The fllloating value is :"<<s1.c<<endl;
	cout<<"***End of program***"<<endl;
}
