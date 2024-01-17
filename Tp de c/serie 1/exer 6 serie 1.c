#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i;
    do{
        printf("entrez un nombre entier:");
        scanf("%d",&a);

    }while(a%2!=0);
    for(i=1; i<a; i++){
        printf("%d\n",i);
    }
    return 0;
}
