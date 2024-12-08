#include<iostream>
using namespace std;

class Insertion{
    public:
        void  insertion(){
        int arr[10];
        cout<<"Enter the Element for Array:";
        for(int a=0; a<=9; a++){
            cin>>arr[a];
        }

        cout<<"The Array Element is Displaying..."<<endl;
        for(int b=0; b<=9; b++){
            cout<<arr[b]<<" ";
        }
    }

        void Insertion_2(){
            int array[5];
            cout<<"Enter the array value:"<<endl;
           for(int a=0; a<=4; a++){
            cin>>array[a];
        }
        cout<<"Before Insertion..."<<endl;
        cout<<"The Array Element is Displaying..."<<endl;
        for(int b=0; b<=4; b++){
            cout<<array[b]<<" ";
        }

         int size,value,pos;
        cout<<"Enter the size of array:";
        cin>>size;

        cout<<"Enter the pos :";
        cin>>pos;

        cout<<"Enter the value to insert:";
        cin>>value;

        if(pos<0 || pos>size){
            cout<<"Invalid value entered...";
        }
        else {
            for(int i=size; i>pos; i--){
                array[i]=array[i-1];
            }
            array[pos]=value;
            size++;
            cout<<"After Insertion in specific value is :";
            for(int a=0; a<=size; a++){
                cout<<array[a]<<" ";
            }
        }

        }

};

main(){
    Insertion inser;
    inser.insertion();
    inser.Insertion_2();
}