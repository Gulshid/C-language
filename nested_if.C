#include<stdio.h>
using namespace std;
main(){
int z;
printf("Program Start...");
printf("\n");
printf("Enter the number to check by nested if statement...");
scanf("%d",&z);

if(z>=0){
    if(z>0){
        printf("the value of z is greater than zero");
    }
    else if(z==0){
        printf("the value of z is equal to zero");
    }
    

}
else if(z<0){
    printf("the value of z is less tha zero");
}

}