#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("question 1:\n");
    int i,n,m,j;
    float t[3][4],somme=0;
    printf("donner le nombre des lignes: ");
    scanf("%d",&n);
    printf("donner le nombre des colonnes: ");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    for(j=0;j<m;j++){
            printf("\n t[%d][%d]= ",i,j);
            scanf("%f",&t[i][j]);
            somme+=t[i][j];
    }
    printf("\n les elements de tableaux sont: ");
    for(i=0;i<n;i++){
       for(j=0;j<m;j++){
            printf("%.2f, ",t[i][j]);
       }
    }
    printf("\n la somme est: %.2f ",somme);

    printf("\n question 2:\n");
    float *M;
    M=t;
    somme=0;
    for(i=0;i<=n*m;i++){
        if(i%4==0)
            printf("\n");
        printf("%.2f\t",*(M+i));
        somme+=*(M+i);
    }
    printf("\n la somme est: %.2f",somme);
    return 0;
}
