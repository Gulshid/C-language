#include<iostream>
using namespace std;
main()
{
	int marks[5][10]={{1,2,3,4,5,6,7,8,9,0},{2,1,3,4,5,6,7,8,9,5},{2,3,4,5,1,4,6,7,8,9},{1,2,3,4,5,2,2,3,4,5},{2,3,4,5,6,7,8,9,9,0}};
	char z[10][20]={"FIRST=","SECOON=","Third=","Fourth=","Fifth=","Six=","Seven=","Eight=","Nine=","Ten="};
	for(int x=0; x<=4; x++){
		for(int y=0; y<=9; y++){
			cout<<"The Value of "<<z[x]<<endl;
	  		cout<<marks[x][y]<<endl;	

		}
	}
	 
}
