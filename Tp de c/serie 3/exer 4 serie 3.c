#include<stdio.h>
int i,j;
void afficher(int A[3][5]){
    for(i=0; i<3; i++){
     for(j=0; j<5; j++)
            printf("%d\t",A[i][j]);
     printf("\n");
    }
    printf("\n");
}
int main(){
    int b[3][5];
    int *a=*b;
    for(i=0; i<15; *a++ = i++);
    afficher(b);
    **b=15;
    afficher(b);
    **(b+1)=16;
    afficher(b);
    *(b[0]+1)=17;
    afficher(b);
    *(*b+8)=18;
    afficher(b);
    *(b[1]+2)=19;
    afficher(b);
    *(*(b+1)+5)=20;
    afficher(b);
    *(b[2]+3)=21;
    afficher(b);
    *(*(b+2)+2)=22;
    afficher(b);
}
