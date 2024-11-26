#include<iostream>
using namespace std;

class Animal
{
		public:
		int animalsound()
		{
			cout<<"the animal make a sound\n"<<endl;
		}
		
};

class Pig:public Animal
{
	public:
	int animalsound()
	{
		cout<<"the Pig say wee wee \n"<<endl;
	}	
};

class Dog:public Animal
{
	public:
	int animalsound()
	{
		cout<<"the dog say bow bow"<<endl;
	}	
};
main()

{
	Animal a1;
	Pig p1;
	Dog d1;
	
	a1.animalsound();
	p1.animalsound();
	d1.animalsound();
	
}
