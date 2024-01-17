#include <stdio.h>
int main()
{
    int nbcopie;
    float facture;
    printf("entrez le nombre de copies\n:");
    scanf("%d",&nbcopie);
    if(nbcopie<=10){
        facture=nbcopie;
        printf("la facture est = %.2f\n",facture);
    }
    else{
        if(nbcopie>10 && nbcopie<=20){
            facture=nbcopie*0.6;
            printf("la facture est =%.2f\n",facture);
        }
        else{
            facture=nbcopie*0.4;
            printf("la facture est =%.2f\n",facture);
        }
    }
    return 0;
}
