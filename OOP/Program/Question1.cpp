#include<iostream>
using namespace std;

main()
{
	//10 Student marks of mathematics and their grade 
	// Student marks=80,72,93,87,90,55,66,74,69,56
	int Student_marks[10]={80,72,93,87,90,55,66,74,69,56};
	cout<<"\t\t  10 Student Marks of Mathematics Displaying..."<<endl;
	
	for (int a=0; a<=10; a++)
	{
		if(Student_marks[a]>=90)
		{
			cout<<"\t\t\t\tGrade is A"<<endl;
			cout<<"\t\t\t\t*******************"<<endl;
		}
		else
		if(Student_marks[a]<90&&Student_marks[a]>81)
		{
			cout<<"\t\t\t\tGrade is B+"<<endl;
			cout<<"\t\t\t\t*******************"<<endl;
		}
		
		else
		if(Student_marks[a]<82&&Student_marks[a]>71)
		{
			cout<<"\t\t\t\tGrade is B"<<endl;
			cout<<"\t\t\t\t*******************"<<endl;
		}
		
		else
		if(Student_marks[a]<72&&Student_marks[a]>66)
		{
			cout<<"\t\t\t\tGrade is C"<<endl;
			cout<<"\t\t\t\t*******************"<<endl;
		}
		
		else
		if(Student_marks[a]<66&&Student_marks[a]>59)
		{
			cout<<"\t\t\t\tGrade is D"<<endl;
			cout<<"\t\t\t\t*******************"<<endl;
		}
		else
		if(Student_marks[a]<60)
		{
			cout<<"\t\t\t\tGrade is F"<<endl;
			cout<<"\t\t\t\t*******************"<<endl;
			cout<<"\t\t\t\t***The End***"<<endl;
		}
		
	}
	
}
