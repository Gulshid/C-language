#include<stdio.h>
using namespace std;
main(){
//All Logicall operator
printf("Program start...");
printf("\n");
printf("Enter two value two to check by comparision and logical operator...");
int s,t;
scanf("%d",&s);
scanf("%d",&t);
if(s>t && s==t){
    printf("The value of s is greater or equal to t");
}
else if(s<t && s==t){
    printf("The value of s is less or equal to t ");
}
if(s>t || s==t){
    printf("The value of s is greater or equal to t ");
}
else if(s<t || s==t){
    printf("The value of s is less or equal to t ");
}
if( s!=t){
    printf("The value of s is not  equal to t ");
}
printf("\n");
printf("program End...");

}