#include<iostream>
using namespace std;
// friend function

class rafi_ullah;
class faraz
{
	private:
	int money = 200;
	
	friend void Gulshid(faraz,rafi_ullah);	
};


class rafi_ullah
{
	private:
	int money = 300;
	
	friend void Gulshid(faraz,rafi_ullah);		
};

void Gulshid(faraz f1, rafi_ullah r1)
{
	cout<<"The Money of Faraz is:"<<f1.money<<endl;
	cout<<"The Money of Rafi_ullah is:"<<r1.money<<endl;
	cout<<"<*************************************>"<<endl;
	cout<<"The Total money collecting with rafi_ullah and Faraz is:"<<f1.money+r1.money<<endl;
}

main()
{
	faraz F1;
	rafi_ullah R1;
	Gulshid(F1,R1);
}
