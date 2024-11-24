#include<stdio.h>
using namespace std;
main(){
    //Relational Operator
    int a,b;
    printf("Program Start...");
    printf("\n");
    printf("Enter the two value to check Relational Operator...");
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>b){
        printf("The greater value is %d",a);
    }
    else if(b>a){
        printf("The greater value %d",b);
    }
    else if(a==b){
        printf("The value of a is equal to b");
    }
    else if(a>=b){
        printf("The value of a is greater  or equal to b");
    }
    else if(a<=b){
        printf("The value og a is less or equal to b");
    }
    else if(a!=b){
        printf("The value of a is not equal to b");
    }
    
    printf("\n");
}