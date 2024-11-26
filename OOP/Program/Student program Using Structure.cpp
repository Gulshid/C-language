#include<iostream>
using namespace std;

struct student
{
	string name;
	int rollNo;
	float marks;
};

main()
{
	int s;
	student S;
	cout<<"        \tProgram Started..."<<endl;
	cout<<"        \t***********"<<endl;
	cout<<"        \tEnter Your Name...";
	getline(cin,S.name);
	
	cout<<"        \tEnter Your Roll No...";
	cin>>S.rollNo;
	
	cout<<"        \tEnter Your Marks...";
	cin>>S.marks;
	
	cout<<"        \tOutput of program is Displaying..."<<endl;
	cout<<"        \tName of Student..."<<S.name<<endl;
	cout<<"        \tStudent Roll No..."<<S.rollNo<<endl;
	cout<<"        \tStduent MArks..."<<S.marks<<endl;
	
	cout<<"        \tProgram Ended..."<<endl;
	cout<<"        \t***********"<<endl;
	
}
