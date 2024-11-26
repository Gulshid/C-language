#include<iostream>
using namespace std;

struct person
{
	int Roll_No;
	float marks;
	char name[20];
	string Univer;
		
};
main()
{
	person p;
	
	
	cout<<"Enter Your Roll_No:";
	cin>>p.Roll_No;
	cout<<"Enter Your Marks:";
	cin>>p.marks;
	cout<<"Enter Your University name:";
	cin>>p.Univer;
	cout<<"Enter Your Name:";
	cin>>p.name;
	
	cout<<"**********************"<<endl;
	cout<<"Name:"<<p.name<<endl;
	cout<<"Roll_No:"<<p.Roll_No<<endl;
	cout<<"Marks:"<<p.marks<<endl;
	cout<<"University:"<<p.Univer<<endl;
	cout<<"**********************"<<endl;
	
}
