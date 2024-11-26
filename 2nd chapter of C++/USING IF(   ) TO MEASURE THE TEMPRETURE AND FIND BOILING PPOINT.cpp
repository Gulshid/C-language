#include<iostream>
using namespace std;
main()
{
	int temp;
	cout<<"ENTER THE VALUE FOR TEMPRETURE:";
	cin>>temp;
	
	if(temp>=100)
	{
		cout<<"The Water Is boilling in this condition:"<<temp<<endl;
	}
	
	if(temp<100)
	{
		cout<<"The Water is not boilling in this condition:"<<temp<<endl;
	}
}
