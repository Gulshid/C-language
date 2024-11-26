#include<iostream>
using namespace std;

class shape
{
	protected:
	float dimension;
	
	public:
	void getdimension()
	{
		cin>>dimension;
	}
	
	virtual float calculatearea()=0;	
};


class Square: public shape
{
		public:
			float calculatearea()
			{
				return dimension * dimension;
			}
};


class Circle: public shape
{
	public:
	float calculatearea()
	{
		return 3.14* dimension * dimension;
	}	
};

main()
{
	Square s;
	Circle c;
	cout<<"Enter the length:";
	s.getdimension();
	cout<<"the area of square is:"<<s.calculatearea()<<endl;
	
	cout<<"Enter the radius of circle:";
	c.getdimension();
	cout<<"The area of circle is :"<<c.calculatearea();
}
