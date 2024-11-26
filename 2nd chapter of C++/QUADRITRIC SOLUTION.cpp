#include<iostream>
#include<cmath>
using namespace std;
main()
{
	float a,b,c,x1,x2;
	cout<<"ENTER VALUE FOR ax ";
	cin>>a;
	
	cout<<"ENTER VALUE FOR b ";
	cin>>b;
	
	cout<<"ENTER VALUE FOR c ";
	cin>>c;
	{
	x1=(-b+sqrt(b*b-4*a*c))/(2*a);
	x2=(-b-sqrt(b*b-4*a*c))/(2*a);
	}

	cout<<"THE VALUE OF X1 "<<x1<<endl;
	cout<<"THE VALUE OF X2 "<<x2<<endl;
}
