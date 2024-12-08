#include<iostream>
using namespace std;

class linear_Search{
	public:
	linear_Search(){
		int arr[10];
		int size,target;
		cout<<"Enter the target value:";
		cin>>target;
		cout<<"Enter the size for array:";
		cin>>size;
		cout<<"Enter the array element:";
		for(int x=0; x<=size; x++){
			cin>>arr[x];
		}
		
		cout<<"Array value:";
		for(int y=0; y<=size ; y++){
			cout<<arr[y]<<" ";
		}
		
		for(int a=0; a<=size ; a++){
		 if(arr[a]==target){
	     cout<<"The value is found at index "<<a<<endl;
		}
		}
	}
};


main(){
	linear_Search();
}