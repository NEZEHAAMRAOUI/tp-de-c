#include <stdio.h>
#include <stdlib.h>

int main()
{
   int nbr,somme=0,somme_pos=0,min,min_pos,cmpt=0;
   do{
     printf("entrer un nombre entier:");
     scanf("%d",&nbr);
     if(nbr==999){
        break;
     }
     else{
        cmpt++;
        somme=somme+nbr;
        if(nbr<min){
            min=nbr;
        }
        if(nbr>0){
            somme_pos=somme_pos+nbr;
            if(nbr<min_pos)
                min_pos=nbr;
        }
     }


   }while(nbr!=999);



    printf("\n le nombre total des valeurs de la suite est:%d",cmpt);
    printf("\n la somme des valeurs lues est:%d",somme);
    printf("\n le minimum est:%d",min);
    printf("\n la somme des valeurs strictement positives est:%d",somme_pos);
    printf("\n le minimum des valeurs strictement positives est:%d",min_pos);
    return 0;
}
