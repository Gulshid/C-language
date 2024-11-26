#include<iostream>
using namespace std;

class A
{
	private:
	int x;
	public:
	void d(int a)
	{
		x=a;
		for(int i=0; i<=10; i++)
		cout<<a<<"x"<<i<<"="<<a*i<<endl;
	}
};

main()
{
	A A1;
	A1.d(10);
}

