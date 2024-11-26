#include<iostream>
using namespace std;

class student
{
	private:
	int roll;
	string name;
	
	public:
		student()
		{
			name="unknown";
			roll=0;
		}
		
		student(string n)
		{
			name=n;
			roll=0;
		}
		
		student(string n , int r)
		{
			name=n;
			roll=r;
		}
		
		
		void display()
		{
			cout<<"Name :"<<name<<endl;
			cout<<"Roll No :"<<roll<<endl;
		}
		
		
};

main()
{
	student s1,s2("Muhammad"),s3("Qasim",3);
	
	s1.display();
	s2.display();
	s3.display();
}
