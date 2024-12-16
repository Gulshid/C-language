#include<iostream>
using namespace std;

int  fiba(int x){
    if(x==0){
        return 0;
    }
    else if(x==1||x==2){
        return 1;
    }
    else {
        return fiba(x-1)+fiba(x-2);
    }
}

main(){
    int x;
    cout<<"Enter the fiba number that you want:";
    cin>>x;

    for(int a=0; a<=x; a++){
        cout<<fiba(a)<<" ";
    }
}