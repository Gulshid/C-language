#include<iostream>
using namespace std;
main()
{
	int *intptr=new  int;
	float *floatptr= new float;
	
	*intptr=20;
	*floatptr=3.2;
	
	cout<<"The value of integer value is "<<*intptr<<endl;
	cout<<"the value of float value is "<<*floatptr<<endl;
	
	delete intptr;
	delete floatptr;
}
