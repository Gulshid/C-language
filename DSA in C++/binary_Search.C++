#include<iostream>
using namespace std;


int binary_Search(int arr[],int size,int target){
	int start=0; int end=size-1;
	while(start<=end){
		int mid=(start+end)/2;
		
		if(arr[mid]==target){
			return mid;
		}
		
		else if(arr[mid]>target){
			start=mid-1;
		}
		else if(arr[mid]<target){
			start=mid+1;
		}
		
	}
	  return -1;
	
}
main(){
	int arr[]={1,2,3,4,5};
	int size=5;
	int target=3;
	int result=binary_Search(arr,size,target);
	
	if(result!=-1){
		cout<<"The value found in index "<<result<<endl;
	}
	
	else if(result==-1){
		cout<<"result not found:"<<endl;
	}
	
}