#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p_initial, remise, p_final ;
    printf("entrez le prix initial du produit en DH:");
    scanf("%f",&p_initial);
    if(p_initial<100){
    	remise=(p_initial * 30)/100;
    	printf("\n la remise est: %.3f DH", remise);
    	p_final= p_initial - remise;
        printf("\n le prix final est:%.3f DH",p_final);
    }
    else{
        if(p_initial>=100 && p_initial<=200){
        	remise=(p_initial * 40)/100;
            printf("\n la remise est: %.3f DH", remise);
            p_final= p_initial - remise;
            printf("\n le prix final est:%.3f DH",p_final);
    	}
        else
            if(p_initial>200){
                remise=(p_initial * 50)/100;
                printf("\n la remise est: %.3f DH", remise);
                p_final= p_initial - remise;
                printf("\n le prix final est:%.3f DH",p_final);
            }

    }
    return 0;
}
