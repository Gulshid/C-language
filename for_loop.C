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

    printf("\n");
    //Even number
    for(int o=0; o<=10; o++){
        if(o%2==0){
            printf("%d\t",o);
        }
    }

    printf("\n");
    //Odd number
    for(int p=0; p<=10; p++){
        if(p%2==1){
            printf("%d\t",p);
        }
    }

    printf("\n");
    //sum of Even Number
    int sum=0;
    for(int u=1; u<=20; u++){
        sum=sum+u;
    }
    printf("the sum of value is:%d ",sum);
    printf("\n");
    //sum of Odd Number
    int sum_2=0;

    for (int t=0; t<=20; t++){
        if(t%2==0){
            sum_2+=t;
        }

    }
    printf("The sum of Even number is %d",sum_2);
    printf("\n");
     for (int t=0; t<=20; t++){
        if(t%2==1){
            sum+=t;
        }

    }
    printf("The sum of Odd number is %d",sum_2);
    printf("\n");


}