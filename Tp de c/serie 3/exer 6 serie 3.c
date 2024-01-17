#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* suprimer_blanc(char *ph, char *p){
    while(*p==' ') p++;
    return p;
}
int main(){
    char *ph;
    ph = (char*)malloc(250*sizeof(char));
    printf("Donner une phrase: ");
    gets(ph);
    char *q=ph;
    printf("%s",suprimer_blanc(ph,q) );
}
