#include<stdio.h>
using namespace std;
main()
{
    //while loop
    int i=0;
    while(i<=20){
        printf("Hello!this is while loop...\n");
        i+=1;
    }

    printf("\n");
    //the sum of upto that number
    int that_n;
    int sum=0;
    printf("Enter the number");
    scanf("%d",&that_n);
    int j=0;
    while(j<=that_n){
        sum+=j;
        j+=1;
       
    }
    printf("the sum of number upto that number is %d:",sum);

    printf("\n");
    //factorial of any number
    int fact;
    printf("Enter any number to find the factorial ");
    scanf("%d",&fact);
    int result_fact=1;
    int r=1;
    while(r<=fact){
        result_fact*=r;
    r++;
    }
    printf("The factorial of this number is:%d ",result_fact);

}