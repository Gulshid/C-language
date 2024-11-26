#include<iostream>
using namespace std;

class school
{
	private:
	int eng,urdu;
	public:
	school(int a,int b)
	{
		eng=a;
		urdu=b;
	}
	
	school()
	{
		cout<<"the english and urdu marks will be "<<(eng+urdu)<<endl;
	}
};

main()
{
	school s1;
	s1.school(70,80);
	
}
