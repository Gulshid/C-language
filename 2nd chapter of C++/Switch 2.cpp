#include<iostream>
using namespace std;
main()
{
	int firstvalue,secandvalue;
	char opr;
	
	  cout<<"ENTERED YOUR FIRST VALUE:";
	  cin>>firstvalue;
	
	   cout<<"ENTERED YOU SECAND VALUE:";
       cin>>secandvalue;
	
	    cout<<"USE ANY OPERATOR TO CALCLATE:";
	    cin>>opr;
	
	    	switch(opr)
		    {
			  case '+':cout<<"YOUR ADDITION VALUE IS:"<<firstvalue+secandvalue;
			           break;
			  case '-':cout<<"YOUR SUBTRICTION VALUE IS:"<<firstvalue-secandvalue;
					   break;
			  case '*':cout<<"YOUR MULTIPLICTION VALUE IS:"<<firstvalue*secandvalue;
					   break;
			  case '/':cout<<"YOUR DIVISION VALUE IS:"<<firstvalue/secandvalue;
					   break;
		   }
}
