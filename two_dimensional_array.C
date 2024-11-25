#include<stdio.h>
using namespace std;
main(){
    int a[2][2]={{1,2},{3,4}};
    printf("%d\t",a[0][0]);
    printf("%d\t",a[0][1]);
    printf("%d\t",a[1][0]);
    printf("%d\t",a[1][1]);

    printf("\n");
    int b[2][3]={{1,2,3},{4,5,6}};
    for(int i=0; i<=1; i++){
        for(int j=0; j<=2; j++){
            printf("%d \t",b[i][j]);
        }
    }

    
}
