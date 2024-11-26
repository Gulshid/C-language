#include<iostream>
using namespace std;

int linear_search_list(int);
const int Listsize=5;
int List[Listsize]={87,75,98,100,82};
int num_element=5;


int linear_search_List(int value)
{
	int index=0;
	int position=-1;
	bool found =false;
	while(index<num_element && !found)
	{
		if(List[index]==value)
		{
			found=true;
			position=index;
		}
		index++;
		
	}
	
	return position;
}


int main (void)
{
	int result,key;
	cout<<"Enter the element to be search:";
	cin>>key;
	
	result=linear_search_list(key);
	if(result==-1)
	{
		cout<<"Element Not found:";
		
	}
	else
	{
		cout<<"Element found at positiom :"<<(result+1)<<endl;
	}
	return 0;
}
