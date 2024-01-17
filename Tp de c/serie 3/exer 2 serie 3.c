#include<stdio.h>
#include<stdlib.h>
int len(char *p){
    int cmp=0;
    while(*p != '\0'){
        cmp++;
        p++;
    }
    return cmp;
}
char *inverse(char *p){
    char *n;
    int i,j;
    n = (char*)malloc(len(p)*sizeof(char));
    for(i=len(p), j=0; i>0, j<len(p); i--, j++) *(n+j) = *(p+i-1);
      *(n+len(p))='\0';
    return n;
}
int main(){
    char *a, *b;
    a = (char*)malloc(30*sizeof(char));
    printf("Donner un nom: ");
    gets(a);
    b = inverse(a);
    if(*a==*b) printf("Le mot saisis est palindrome");
    else printf("Le mot saisis n'est pas palindroma");
}
