#include <stdio.h>                                         
using namespace std;

main(){
    int num;
    float decimal;
    char character;
    char string_value[20];
    bool istrue_false;
                

    printf("Input value from the user:");
    printf("\n");
    printf("Enter the Integer value:");
    scanf("%d",&num);
    printf("Enter the Float value:");
    scanf("%f",&decimal);
    printf("Enter the char value:");
    scanf("%c",&character);
    printf("Enter the String value:");
    scanf("%s",&string_value);
    printf("Enter the boolean value:");
    scanf("%d",&istrue_false);
                 printf("*********");  
    printf("The integer value of num is :%d",num);  
    printf("\n");             
    printf("The float value of decimal_value is :%f",decimal);
    printf("\n");
    printf("The char value of character is:%c",character);
    printf("\n");
    printf("The string value of string_value is:%s",string_value);
    printf("\n");
    printf("The integer value of num is :%d",istrue_false);   

   
    printf("*********");
}