//   ~~UNIVERSITY STUDENT FORM~~
#include<iostream>
using namespace std;

class University
{
	private:
		string name;
			int rollno,Semester;
			float GPA;
		public:
		University()
		{
			cout<<"                 UNIVERSITY:~  UNIVERSITY  OF AGRICULTURE,PESHAWAR"<<endl;
			cout<<"                 RANK:~  300 OUT OF 1200 UNIVERSITY IN PAKISTAN"<<endl;
			cout<<"                 DEPARTMENT:~  36"<<endl;
			cout<<"                 CLASS ROOMS:~  200"<<endl;
			cout<<"                 MADE DATE:~  1922"<<endl;
			cout<<"                 TOTAL TEACHERS:~  60"<<endl;
			cout<<"**************************************************************************"<<endl;
		}
		
		int Univ()
		{
			
			
			cout<<"                 Enter Student Name:";
			getline(cin,name);
			
			cout<<"                 Enter Student ROLL No:";
			cin>>rollno;
			
			cout<<"                 Enter Student Semester:";
			cin>>Semester;
			
			cout<<"                 Enter Student GPA:";
			cin>>GPA;
		cout<<"****************************************************"<<endl;	
			cout<<"                Student Name:"<<name<<endl;
			cout<<"                Student Roll No:"<<rollno<<endl;
			cout<<"                Student Semester:"<<Semester<<endl;
			cout<<"                Student GPA:"<<GPA<<endl;			
		}	
};





main()
{
	University s1;
	s1.Univ();
}
