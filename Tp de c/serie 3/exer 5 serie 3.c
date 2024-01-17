#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int nbr_occurrence(char *phrase, char *mot){
    int resultat;
    char *p=phrase;
    while( (p=strstr(p,mot)) != NULL){
    resultat++;
    p += strlen(mot);
    }
    return resultat;
}
int main(){
    char *phrase, *mot;
    int resultat;
    phrase = (char*)malloc(250*sizeof(char));
    mot = (char*)malloc(15*sizeof(char));
    printf("Donner une phrase: ");
    gets(phrase);
    printf("Donner un mot: ");
    gets(mot);
    resultat = nbr_occurrence(phrase,mot);
    printf("\nLe nombre d'occurence de (%s) dans la phrase est: %d",mot,resultat);
}
