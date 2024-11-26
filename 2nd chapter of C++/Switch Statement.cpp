#include<iostream>
using namespace std;
main()
{
	char alph;
	cout<<"ENTER YOU ALPHABET:";
	cin>>alph;
	
	  switch(alph)
	  {
		  case 'A':
		  case 'a':
		  case 'E':
		  case 'e':
		  case 'I':
	   	  case 'i':
		  case 'O':
		  case 'o':
		  case 'U':
		  case 'u':
		           cout<<"YOU ENTERED ALPHABET IS VOWEL:";
	               break;
		default:   cout<<"ENTER ALPHABET IS CANSONENET:";	
	}
}
