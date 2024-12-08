#include<iostream>
using namespace std;

class Traverse{
    private:
    //Encapsulation
    int arra[3];
    public:
    Traverse(){
        arra[9];
        cout<<"Enter the array element to be stored:";
        for(int a=0; a<=3; a++){
            cin>>arra[a];
        }

        cout<<"Traversing the Array Element:"<<endl;
        for(int b=0; b<=3; b++){
            cout<<arra[b]<<" ";
        }
    }
    
};

main(){
    Traverse();
}