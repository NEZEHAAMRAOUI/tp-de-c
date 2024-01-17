#include <stdio.h>
#include <stdlib.h>
char cTab1[]={"bonjour"},cTab2[]={"hi"};
void longueur_chaine1(char chaine[]){
    int i=0,longueur=0;
    while(chaine[i]!='\0'){
        longueur++;
        i++;
    }
    printf("\n la longueur de la chaine est: %d",longueur);
}
int main()
{
    longueur_chaine1(cTab1);
    longueur_chaine1(cTab2);
    return 0;
}
