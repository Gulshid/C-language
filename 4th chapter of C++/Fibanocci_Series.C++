#include<iostream>
using namespace std;

void   Fibanocci(int num){
    int first=0,second=1,next;
    if(num<=0){
        cout<<"Enter a Positive Number:"<<endl;
        return;
    }
    for (int i=0; i<=num; i++){
        if(i==0){
            cout<< first<<" ";
            continue;
        }

        if(i==1){
            cout<<second<<" ";
            continue;
        }
        next=first+second;
        cout<<next<<" ";
        first=second;
        second=next;
        cout<<endl;
    }
}
main(){
    int n;
    cout<<"Enter the value for Fibanocci Series:";
    cin>>n;
    cout<<"Fibanocci Series: "<<n<<" is " ;
    Fibanocci(n);
    
}