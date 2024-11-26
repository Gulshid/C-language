#include<iostream>
using namespace std;
main()
{
	int per;
	cout<<"ENTER YOUR PERSENTAGE= ";
	cin>>per;
	{
		if(per>=90)
		cout<<"A+ Grade"<<endl;
		else
		if(per>=80)
		cout<<"A Grade"<<endl;
		else
		if(per>=70)
		cout<<"B Grade"<<endl;
		else
		if(per>=60)
		cout<<"C Grade"<<endl;
		else
		if(per>=50)
		cout<<"D Grade"<<endl;
		else
		if(per>=40)
		cout<<"E Grade"<<endl;
		else
		if(per<40)
		cout<<"FAILED"<<endl;
		cout<<"THANK YOU";
	}
}
