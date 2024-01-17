#include <stdio.h>
#include <stdlib.h>
int i,j;
int iMat[5][5]={
				{2,-9,0,6,8},
				{7,11,-8,8,9},
				{2,2,-20,4,709},
				{12,7,90,7,-3},
				{3,76,9,4,7}
				};
void Afficher_matrice(int iMat[5][5]){
    for(i=0; i<5; i++){
        printf("___________\n");
        for(j=0; j<5; j++)
                printf("|%d",iMat[i][j]);
        printf("|\n");
    }
        printf("___________\n");
}

void main()
{
    for(i=0;i<5;i++)
        for(j=0;j<5;j++){
            printf("iMat[%d][%d]=",i,j);
            scanf("%d",&iMat[i][j]);
        }

     Afficher_matrice(iMat);

}
