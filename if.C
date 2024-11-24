#include<stdio.h>
using namespace std;
main(){
int number;
printf("Enter the number:");
scanf("%d",&number);
if(number>0){
    printf("The number is greater than Zero ");
}
if(number==0){
    printf("The number is equal than Zero");
}
if(number<0){
    printf("The number is less than Zero");
}


}