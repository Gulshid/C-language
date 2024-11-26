#include<iostream>
using namespace std;

int binary_Search(int);
const int Listsize=20;
int List[Listsize]={101,142,147,189,199,207,222,234,289,296,310,319,388,394,417,429,447,521,536,600};
int num_Element=20; 

int binary_Search(int value)
{
	int First=0,last=num_Element-1,middle,position=-1;
	bool Found=false;
	while(!Found && First<=last)
	{
		middle=First+last/2;
		if(List[middle]==value)
		{
			Found=true;
			position=middle;
		}
		else
		if(List[middle]>value)
		{
			last=middle-1;
			
		}
		else
		{
			First=middle+1;
		}
	}
	return position;
}

int main()
{
	int result,key;
	cout<<"Enter the element to be Search:";
	cin>>key;
	result=binary_Search(key);
	if(result==-1)
	{
		cout<<"Element Not Found:";
	}
	else
	{
		cout<<"Element Found at:"<<result+1<<" in the List"<<endl;
	}
}
	

