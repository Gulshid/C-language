#include<iostream>
using namespace std;
main()
{
	int pak[4][5]={{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
	char a[20][50]={"First=","second=","third=","fourth=","fifth=","six=","seven=","eight=","nine=","ten=","eleven=","tweel=","thirteen=","fourteen=","fifteen=","sixteen=","seventeen=","eighteen=","nineteen=","twenty="};
	for(int x=0; x<=3; x++){
		for(int y=0; y<=4; y++){
			cout<<a[x];
			cout<<pak[x][y]<<endl;
		}
	}
}
