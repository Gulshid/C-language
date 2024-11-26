#include<iostream>
using namespace std;

int fun(int x,int y)
{
	int z=z+y;
	return z;
}

float  fun(float x,float y)
{
	float z=x-y;
	return z;
}

string fun(string x,string y)
{
	string z=x+y;
	return z;
}
main()
{
	cout<<"The 1st function is "<<fun(2,3)<<endl;
	cout<<"The 2nd function is "<<fun(5,2)<<endl;
	cout<<"The 3rd function is "<<fun("Hello ","World")<<endl;

}
