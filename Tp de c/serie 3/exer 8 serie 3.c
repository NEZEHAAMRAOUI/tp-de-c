#include<stdio.h>
#include<string.h>
int main(){
        char T[50], R[50]="";
        FILE *f=fopen("devoir.txt","w+");
        int i=0, j=0, cmp=0;
        printf("Donner le ligne d'un ecran: ");
        gets(T);
        while( i<strlen(T) ){
            cmp=0;
            while(j<strlen(T) && T[i]==T[j]){
                cmp++;
                j++;
            }
            fprintf(f,"%d%c ",cmp,T[i]);
            i=j;
        }
        rewind(f);
        i=0;
        while(feof(f)==0){
            fscanf(f,"%c",&R[i]);
            i++;
        }
        puts(R);
}
