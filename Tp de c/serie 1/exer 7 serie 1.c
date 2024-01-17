#include <stdio.h>
#include <stdlib.h>
int main()
{
  //question 1
  int tab[20];
  int i;
  printf("tappez la liste des nombres:\n");
  for(i=0;i<20;i++){
    scanf("%d",&tab[i]);
  }
  printf("la liste des carres des nombres pairs est\n:");
  for(i=0;i<20;i++){
    if(tab[i]%2==0)
        printf("%d\n ",tab[i]*tab[i]);
  }
  //question 2
  int taille,tab2[taille];
  int cmpt1=0,cmpt2=0;

  printf("entrez le nombre des elements:\n");
  scanf("%d",&taille);
  printf("tappez la liste des nombres:\n");
  for(i=0;i<taille;i++){
     if(tab2[i]==100)
        break;
     else{
        scanf("%d",&tab2[i]);
        cmpt1++;
     }
  }
  printf("la liste des carres des nombres pairs est\n:");
  for(i=0;i<taille;i++){
        if(tab[i]%2==0){
            printf("%d\n ",tab2[i]*tab2[i]);
            cmpt2++;
        }

    }
  printf("le nombre total des entrees est:%d\n",cmpt1);
  printf("le nombre  des entrees pairs est:%d\n",cmpt2);



  return 0;
}


