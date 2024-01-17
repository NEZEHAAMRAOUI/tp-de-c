#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    int sex;
    printf("entrez votre age\n:");
    scanf("%d",&age);
    printf("entrez votre sex(feminin=1,masculin=0)\n:");
    scanf(" %d",&sex);
    if((sex=0 && age>20)||(sex=1 && age<=35 && age>=18)){
        printf("vous etes imposables");
    }
    else{
        printf("vous n'etes pas imposables");
    }
    return 0;
}
