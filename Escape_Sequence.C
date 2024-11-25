#include<stdio.h>
using namespace std;
main(){
    //Escape Sequence have speciall meaning in Programming language...
    //\n (back_slash n) is used for new line
    printf("C \nprogramming\n Language...\n");
    //\t (back slash t) is used for tap in same line
    printf("C \tprogramming\t Language...\n");
    //\f(back slash f) is used to printer to the next page
    printf("C \fprogramming\f Language...\n");
    //\v(back slash v) is used for verticall
    printf("C \nprogramming\n Language...\n");
    //\b(back slash b) is used for backspace
    printf("C \nprogramming\n Language...\n");
    //\'(back slash ') is used for single quote
    printf("\'C\' \'programming\' \'Language\'...\n");
    //\"(back slash ") is used for double quote
    printf("\"C\" \"programming\" \"Language...\"\n");
    //\a(back slash a) is used for beep sound
    printf("\aC\a \aprogramming\a \aLanguage...\a\n");
    //\r(back slash r) is used which move the cursor  cursor to the beggining of current line
    printf("C \nprogramming\n Language...\n");
    //\\(double back slash) is only used one back slash
    printf("C \\programming\\ Language...\n");
    
}