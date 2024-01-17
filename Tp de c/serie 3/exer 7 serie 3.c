#include<stdio.h>
int i;
int search(float T[], int t, float a){
    int cmp=0;
    for(i=0; i<t; i++)
        if(T[i] == a){
            cmp++;
        return i;
    }
    if(cmp==0) return(-1);
}
int main(){
    int n;
    float m;
    printf("Donner le nombre des elements que vous pouvez l'entrer: ");
    scanf("%d",&n);
    float A[n];
    printf("\nVeuillez remplir les elements du tableau: \n");
    for(i=0; i<n; i++){
        printf("A[%d] = ",i);
        scanf("%f",&A[i]);
    }
    printf("\nDonner la valeur a rechercher: ");
    scanf("%f",&m);
    printf("\n %d", search(A,n,m));
}
