#include<iostream>
using namespace std;
main()
{
	int A[3][3],B[3][3],C[3][3];
	cout<<"ENTER THE FIRST MATRIX VALUE "<<endl;
	
	 for(int r=0; r<=2; r++)
	{
		for(int v=0; v<=2; v++)
			cin>>A[r][v];
	}
	
	
	  cout<<"ENTER THE SECOND MATRIX VALUE "<<endl;
	  for(int r=0; r<=2; r++)
	{
		for(int v=0; v<=2; v++)
		cin>>B[r][v];
	}
		
				
	cout<<"THE ADDITION OF TWO MATRIX IS "<<endl;
	for(int r=0; r<=2; r++)
	{
		for(int v=0; v<=2; v++)
		C[r][v]=A[r][v]+B[r][v];
	}
	
	
	for(int r=0; r<=2; r++)
	{
		for(int v=0; v<=2; v++)
		cout<<C[v][r]<<endl;
	}
}
