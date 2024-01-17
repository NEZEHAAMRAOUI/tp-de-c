#include<stdio.h>
#include<stdlib.h>
#define Nmax 20
int tab[Nmax];
int NE,i,s,pos,pos_min,pos_max,a ,max,min;
float moy;
char option;
void saisie(){

    do{
        printf("donner le nombre des element de tableau(maximum 20 elements):\n");
        scanf("%d",&NE);
    }while(NE>20);
    for(i=0;i<NE;i++){
        printf("tab[%d]=",i);
        scanf("%d",&tab[i]);
    }
}
void affichage(){
    printf("les elements de tableau sont: ");
    for(i=0;i<NE;i++){
        printf("%d, ",tab[i]);
    }
}
void moyenne(){
     s=0;
     for(i=0;i<NE;i++){
       s=s+tab[i];
     }
     moy=(float)s/NE;
     printf("la moyenne est:%.2f\n",moy);

}
int Max_elem(){
    max=tab[0];
    for(i=0;i<NE;i++){
        if(tab[i]>max){
            max=tab[i];
            pos_max=i;
        }
    }
    return pos_max;
}
void Supprimer(){
    int poss_max=Max_elem;
    for(i=poss_max;i<NE;i++)
    tab[i]=tab[i+1];
    NE--;



}


int Min_elem(){
    min=tab[0];
    for(i=0;i<NE;i++){
        if(tab[i]<min){
            min=tab[i];
            pos_min=i;
        }
    }
    return pos_min;
}
void Supprimer_min(){
   int poss_min=Min_elem;
   for(i=pos_min;i<NE-1;i++)
   tab[i]=tab[i+1];
   NE--;
}
void ajout(){
    printf("entrer l'entier à inserer:\n");
    scanf("%d",&a);
    printf("entrer la position où inserer l'entier:\n");
    scanf("%d",&pos);
    NE++;
    for(i=NE;i>=pos;i--){
        tab[i+1]=tab[i];
    }
    tab[pos]=a;
}
int main()
{
  do{
    printf("\n******MENU*******\n");
    printf(" A- saisie \n B- Moyenne \n C- Suppression du Max et affichage\n D- Suppression du Min et affichage \n E- Ajout d'un entier à une position donnee \n Q- Quitter\n ");
    printf("tapez un option:\n");
    scanf(" %c",&option);
    switch(option){
           case 'A': saisie();affichage();break;
           case 'B': moyenne();break;
           case 'C': Max_elem();Supprimer();affichage();break;
           case 'D': Min_elem();Supprimer_min();affichage();break;
           case 'E': ajout();affichage();break;
           case 'Q': exit(0);

    }
  }while(option!='Q');

    return 0;
}
