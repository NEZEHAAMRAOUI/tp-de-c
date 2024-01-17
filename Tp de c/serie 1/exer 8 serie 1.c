#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("pattern a:\n");
    int i,j,k;
    for(j=6;j>=1;j--){
        for(i=j;i>=1;i--){
            printf("%d",i);
        }
        printf("\n");
    }

    printf("pattern b:\n");

    for(i=0;i<=9;i++){
        for(j=0;j<=i;j++){
            printf(" ");
        }
        for(k=9;k>=i;k--){
            printf("%d",i);
        }
        printf("\n");
    }



    return 0;
}
