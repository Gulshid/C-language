#include<stdio.h>
using namespace std;
//function(data_type,fun_name,and parameter)
int value(int x){
    //body of function
    printf("Enter the value for x:");
    scanf("%d",&x);
    printf("The value of x is %d",x);
}

main(){
    int x;
    //function call
    value(x);
}