#include<stdio.h>
using namespace std;
main(){
    int y=1;
    do{
        printf("Hello:%d\n",y);
        y++;

    }
    while(y<=5);

    printf("\n");
    int a=1;
    do{
        if(a==2){
            printf("The value is Two:%d\n",a);
        }
        else if(a>2){
            printf("the value is above two:%d\n",a);
        }
        else if(a<2){
            printf("the value is below two:%d\n",a);
        }
    a++;
    }
    while(a<=10);
}