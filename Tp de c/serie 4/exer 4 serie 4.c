#include <stdio.h>
struct Repertoire {
    char nom[30];
    char prenom[30];
    char telephone[15];
};

void afficherRepertoire(struct Repertoire repertoire[], int taille) {
    printf("R�pertoire :\n");
    for (int i = 0; i < taille; i++) {
        printf("Nom : %s\n", repertoire[i].nom);
        printf("Pr�nom : %s\n", repertoire[i].prenom);
        printf("T�l�phone : %s\n", repertoire[i].telephone);
        printf("\n");
    }
}

int main() {
    struct Repertoire repertoire[10];

    int nombreEnregistrements;

    printf("Entrez le nombre d'enregistrements dans le r�pertoire (max 10) : ");
    scanf("%d", &nombreEnregistrements);

    if (nombreEnregistrements <= 10) {
        for (int i = 0; i < nombreEnregistrements; i++) {
            printf("Enregistrement %d :\n", i + 1);

            printf("Nom : ");
            scanf("%s", repertoire[i].nom);

            printf("Pr�nom : ");
            scanf("%s", repertoire[i].prenom);

            printf("T�l�phone : ");
            scanf("%s", repertoire[i].telephone);

            printf("\n");
        }
        afficherRepertoire(repertoire, nombreEnregistrements);
    } else {
        printf("Nombre d'enregistrements invalide. Maximum autoris� : 10.\n");
    }

    return 0;
}
