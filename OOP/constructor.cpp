#include<iostream>
using namespace  std;

class cons
{
	private:
		int x;
		float  y;
		string z;
		
		public:
			cons()
			{
				cout<<"Enter the value for string value:";
				getline(cin,z); 
				
				cout<<"Enter the value for integer:";
				cin>>x;
				
				cout<<"Enter the value for float value:";
				cin>>y;
				
			
				
				
				cout<<"The integer is:"<<x<<endl;
				cout<<"The floating value is:"<<y<<endl;
				cout<<"The string value is:"<<z<<endl;
			}
};
main()
{
	cons s;
}
