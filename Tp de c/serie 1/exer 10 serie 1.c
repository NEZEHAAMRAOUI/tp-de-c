#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,k,N;
    printf("tapez le nombre des lignes: ");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(k=1;k<2*N;k++){
            if(k==N-(i-1)|| k==N+(i-1)|| i==N)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}




