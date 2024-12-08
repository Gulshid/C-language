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

};

main(){
    Insertion inser;
    inser.insertion();
}