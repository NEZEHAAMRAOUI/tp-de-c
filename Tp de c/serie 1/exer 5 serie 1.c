#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,t;
    printf("entrez un nombre entier:");
    scanf("%d",&a);
    
    for(i=2;i<=a/2;i++){
        if(a%i==0){
            t=0;
            break;
        }
        else
            t=1;
    }
    if(t==0)
     printf("le nombre %d n'est premier",a);
    else
     printf("le nombre %d est premier",a);


    return 0;
}
