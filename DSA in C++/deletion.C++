#include<iostream>
using namespace std;

class Deletion{
	public:
	void deletion(){
		int array[10];
		int index,size=5;
		cout<<"Enter the array value:";
		for(int c=0; c<size; c++){
			cin>>array[c];
		}
			
		cout<<"Before Insertion the array value:"<<endl;
		for(int i=0; i<size; i++ ){
			cout<<array[i]<<" ";
		}
		cout<<"Enter the inddex to be delete in array :";
		cin>>index;
		
		if(index<0 || index>size){
			cout<<"Invalid value entered...";
		}
		else{
			for(int i=index; i<size-1; i++){
				array[i]=array[i+1];
			}
			size--;
			
			cout<<"After Insertion the array value:"<<endl;
			for(int c=0; c<size; c++){
				cout<<array[c]<<" ";
			}
		}
	}
};

main(){
	Deletion del;
	del.deletion();
}