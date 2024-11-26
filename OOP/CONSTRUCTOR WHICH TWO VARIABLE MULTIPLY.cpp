#include<iostream>
using namespace std;

class construct
{
	private:
		int x,y,z;
		public:
			construct()
			{
				cout<<"Enter the value for x:";
				cin>>x;
				cout<<"Enter the value for y:";
				cin>>y;
				z=x*y;
				cout<<"The multiplication of two variable is:"<<z;
			
				
			}
		
};

main()
{
	construct();
	
}
