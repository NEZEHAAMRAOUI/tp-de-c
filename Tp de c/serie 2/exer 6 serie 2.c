#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 1000

int main() {
    char ligne[MAX_LENGTH];
    int chiffres = 0, espaces = 0, autres = 0;

    printf("Entrez une phrase:\n");

    if (fgets(ligne, sizeof(ligne), stdin) != NULL) {
        for (int i = 0; ligne[i] != '\0'; i++) {
            char caractere = ligne[i];

            if (isdigit(caractere)) {
                chiffres++;
            } else if (isspace(caractere)) {
                espaces++;
            } else {
                autres++;
            }
        }

        printf("Nombre de chiffres : %d\n", chiffres);
        printf("Nombre de caractères d'espacement : %d\n", espaces);
        printf("Nombre d'autres caractères : %d\n", autres);
    } else {
        printf("Erreur de lecture de l'entrée.\n");
    }

    return 0;
}
