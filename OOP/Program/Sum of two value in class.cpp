#include<iostream>
using namespace std;

class sum
{
	private:
		int x,y,s;
		public:
			void add()
			{
				cout<<"Enter the value for x:";
				cin>>x;
				
				cout<<"Enter the value for y:";
				cin>>y;
				
				s=x+y;
				cout<<"The Sum of x and y is :"<<s<<endl;
			}
};

main()
{
	sum s1;
	s1.add();
}
