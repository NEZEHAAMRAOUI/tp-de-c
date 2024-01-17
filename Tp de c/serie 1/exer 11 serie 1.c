#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbr,option,resultat;
    printf("entrer un nombre entier:\n");
    scanf("%d",&nbr);
    do{
        printf("Menu:\n\n");
        printf("1 pour Ajouter 2 \n");
        printf("2 pour Multiplier par 3 \n");
        printf("3 pour Soustraire 5 \n");
        printf("4 pour Quiter \n\n");
        printf("taper un nombre entre 1 et 4 :\n");
        scanf("%d",&option);
        switch(option){
            case 1 :
                resultat=nbr+2;break;
            case 2 :
                resultat=nbr*3;break;
            case 3 :
                resultat=nbr-5;break;
            case 4 :
                break;
        }
        printf("la nouvelle valeur est: %d\n",resultat);
    }while(option!=4);

    return 0;
}
