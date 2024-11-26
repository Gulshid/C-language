#include<iostream>
using namespace std;

class Animals
{
	public:
		int dog()
		{
			cout<<"This is a dog and this is barking"<<endl;
			cout<<"************************************"<<endl;
		}
		
		int cat()
		{
			cout<<"This is a cat and this is produce sound meow"<<endl;;
			cout<<"************************************"<<endl;
		}
		
		int donkey()
		{
			cout<<"This is Donkey and this is produce their own sound"<<endl;;
			cout<<"*******The End of Animal Family******"<<endl;
		}
	
};

main()
{
	Animals a1,a2,a3;
	a1.dog();
	a2.cat();
	a3.donkey();
}
