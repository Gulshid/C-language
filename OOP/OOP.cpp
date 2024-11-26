#include<iostream>
using namespace std;

class student 
{
	private:
		string depart;
		string name;
		int Roll_No;
		int semester;
		
	public:
		string fun_student()
		{
			cout<<"Enter Your department:";
			cin>>depart;
			
			cout<<"Enter Your Name:";
			cin>>name;
			
			cout<<"Enter Your Roll No:";
			cin>>Roll_No;
			
			cout<<"Enter Your Semester:";
			cin>>semester;
			
			
			cout<<"                       DEPARTMENT:"<<depart<<endl;
			cout<<"                       NAME:"<<name<<endl;
			cout<<"                       ROLL NO:"<<Roll_No<<endl;
			cout<<"                       SEMESTER:"<<semester<<endl;
		}
		
};

main()
{
	student s2;
	s2.fun_student();
	
}
