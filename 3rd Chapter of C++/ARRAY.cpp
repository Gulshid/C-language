#include<iostream>
using namespace std;
main()
{
	 int a[10]={1,2,3,4,5,6,7,8,9,10};
	 char b[10][20]={"First=","Second=","Third=","Fourth=","Fifth=","SIX=","SEVEN=","EIGHT=","NINE=","TEN="};
	
	  for(int x=0; x<=9; x++)
	  cout<<b[x]<<a[x]<<endl;
}
