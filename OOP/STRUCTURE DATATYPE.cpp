#include<iostream>
using namespace std;

struct student
{
	string name;
	int rollno;
	long int ph_no;
	string depart;
};
main()
{
	student s1;
	cout<<"Enter Your Name:";
	cin>>s1.name;
	
	cout<<"Enter Your Roll No:";
	cin>>s1.rollno;
	
	cout<<"Enter Your Ph No:";
	cin>>s1.ph_no;
	
	cout<<"Enter Your depart:";
	cin>>s1.depart;
	
	cout<<"Your Name is:"<<s1.name<<endl;
	cout<<"Your roll Number is:"<<s1.rollno<<endl;
	cout<<"Your Phone Number is:"<<s1.ph_no<<endl;
	cout<<"Your Department is:"<<s1.depart<<endl;
	
	
	
}
