#include<iostream>
using namespace std;

class A
{
	private:
		int a,b;
		
		public:
			A(int a,int b)
			{
				this -> a=a;
				this ->	b=b;
			}
			
			void show()
			{
				cout<<"The  value of a is "<<a<<endl;
				cout<<"The value of b is "<<b<<endl;
				
				cout<<"The sum of two value is "<<a+b<<endl;
			}
			
			
};

main()
{
	A obj(2,3);
	obj.show();
}
