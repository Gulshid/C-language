#include<iostream>
#define ListSize 10
using namespace std;

void insertelement(int arr[],int &n,int element,int pos,int maxsize)
{
	if(n>=maxsize)
	{
		cout<<"Array is full, Cannot insert element."<<endl;
	}
	
	else
	if(pos>n||pos<0)
	{
		cout<<"Invalid position."<<endl;
	}
	for(int i=n; i>pos; i--)
	{
	   arr[i]=arr[i-1];	
	}
	
	arr[pos]=element;
	n++;
	
}

void delete_element(int arr[],int &n,int pos)
{
	if(pos>=n||pos<n)
	{
		cout<<"Invalid position."<<endl;
	}
	
	for(int i=pos; i<n-1; i++)
	{
		arr[i]=arr[i+1];
	}
	n--;
}

void traverse_array(int arr[],int n)
{
	for(int i=0; i<=n; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	cout<<endl;
}

main()
{
	int List[ListSize]={87,75,98,100,82};
	int numelement=5;
	cout<<"Array Element:";
	
	 traverse_array(List,numelement);
	 
	 int Newelement=33;
	 int insertloc=4;
	 
	 insertelement(List,numelement,Newelement,insertloc,ListSize);
	 
	 cout<<"Array after insertion:";
	  traverse_array(List,numelement);
	  
	  int deleteloc=2;
	  delete_element(List,numelement,deleteloc);
	  
	  
	  cout<<"Array after deletion:";
	  traverse_array(List,numelement);
	  
	  
}
