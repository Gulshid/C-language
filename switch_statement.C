#include<stdio.h>
using namespace std;
main(){
    int value;
    printf("Program Start...\n");
    printf("Enter the value:");
    scanf("%d",&value);

    switch(value){
        case 1:printf("You entered One");
            break;
        case 2:printf("You entered Two");
            break;
        case 3:printf("You enetered Three");
            break;
        default: printf("You neither entered 1,2,3\nthe value you are entered is other than these value... ");
    }
    printf("\nProgram End...");

}