#include<stdio.h>
using namespace std;
main(){
    //the loop continue till the loop false
    //the loop increment by one
    for(int i=1; i<=10; i++){
        printf("%d \t",i);
    }

    printf("\n");
    //the loop decrement by one till the loop become false
    for(int j=10; j>0; j-- ){
        printf("%d \t ",j);
    }
}