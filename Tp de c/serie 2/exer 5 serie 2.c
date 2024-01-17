#include <stdio.h>
#include <string.h>


void crypter(char *message){
    int i;

    for(i=0; i<strlen(message); i++)
        if( (message[i]>=65 && message[i]<=90) || (message[i]>=97 && message[i]<=122) ) message[i]+=5;
    puts(message);
}
int main(){
    char cMessage[50];
    printf("Donner la chaine de caractere a crypter: ");
    scanf(" %s",cMessage);
    printf("Votre chaine de caractere avant le cryptage est: %s\n",cMessage);
    printf("Votre chaine de caractere apres le cryptage est: ");
    crypter(cMessage);


}
