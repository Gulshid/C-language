#include<iostream>
using namespace std;

class student
{
	private:
		string name;
		int English,urdu,Islamyiat,obt,avg;
		public:
			float student_Result()
			{
				cout<<"Enter the student Name:";
				cin>>name;
				
				cout<<"Enter the English mark:";
				cin>>English;
				
				cout<<"Enter the Urdu mark:";
				cin>>urdu;
				
				cout<<"Enter the Islamyiat mark:";
				cin>>Islamyiat;
				
				obt=English+urdu+Islamyiat;
				avg=((English+urdu+Islamyiat)/3);
				cout<<"......................................"<<endl;
				
				cout<<"Student Name:"<<name<<endl;
				cout<<"English Marks:"<<English<<endl;
				cout<<"Urdu Marks:"<<urdu<<endl;
				cout<<"Islamyiat Marks:"<<Islamyiat<<endl;
				
				cout<<"The Student Obtained mark in Three Subject is:"<<obt<<endl;
				cout<<"The Averge of Student is:"<<avg<<endl;
				
				
				
			}
			
			
};

main()
{
	student s1;
	s1.student_Result();
	
	
	
}
