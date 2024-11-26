#include<iostream>
using namespace std;

class A{
	private:
		int x;
		public:
			A(int x)
			{
				this->x=x;
			}
			
			void show()
			{
				cout<<"The value of x is::"<<x<<endl;
			}
};

main()
{
	A a1(2);
	a1.show();
}
