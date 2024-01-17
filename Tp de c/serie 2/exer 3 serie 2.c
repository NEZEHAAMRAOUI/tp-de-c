#include <stdio.h>
#include <stdlib.h>
int i;
initialisation(int iNb_jours[12]){
    for(i=1;i<=12;i++){
            if(i==2) iNb_jours[i] = 28;
            else if( (i%2==0 && i<=7) || (i%2!=0 && i>7)) iNb_jours[i] = 30;
                 else iNb_jours[i] = 31;
    }
}
Affichage(int iNb_jours[12]){
    for(i=1;i<=12;i++)
        printf("iNb_jours[%d] = %d\n",i,iNb_jours[i]);
}
mois_donne(int iNb_jours[12]){
    int n;
    do{
        printf("Donner un mois: ");
        scanf("%d",&n);
    }while(n<=0 || n>12);
    printf("iNb_jours[%d] = %d\n",n,iNb_jours[n]);
}
main(){
    int iNb_jours[12];
    initialisation(iNb_jours);
    Affichage(iNb_jours);
    mois_donne(iNb_jours);
}

