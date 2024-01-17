#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, resultat=0;
    char operateur;
    printf("entrez un nombre a:");
    scanf("%f",&a);
    printf("entrez un nombre b:");
    scanf("%f",&b);
    printf("entrez l'operateur:");
    scanf(" %c",operateur);
    switch(operateur){
        case '+' : printf("resultat=%f",a+b); break ;
        case '-' : printf("resultat=%f",a-b); break ;
        case '*' : printf("resultat=%f",a*b); break ;
        case '/' : if (b!=0){
                      printf("resultat=%f",a/b); break ;
                    }
                    else{
                        printf("impossible de diviser sur un nombre nul!");break;
                    }
    }
    printf("le resultat=%f",resultat);




    return 0;
}
