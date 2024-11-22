#include<stdio.h>
using namespace std;

main()
{
    int num=6;                                      //integer data_type value
    float decimal_value=2.3;                        //Float data_type value
    char character='A';                             //Char data_type value
    char string_value[20]="Hello World";            //String data_type value
    printf("The integer value of num is :%d",num);  //if we display a int value we must putt first %d and then int variable
    printf("\n");                                    //Escape Sequence(special character )\n used for new line
    printf("The float value of decimal_value is :%f",decimal_value);//if we display a float value we must putt first %f and then float variable
    printf("\n");
    printf("The char value of character is:%c",character);//if we display a char value we must putt first %c and then char variable
    printf("\n");
    printf("The string value of string_value is:%s",string_value);//if we display a String value we must putt first %s and then String variabl
    printf("\n");
    printf("*********");

}