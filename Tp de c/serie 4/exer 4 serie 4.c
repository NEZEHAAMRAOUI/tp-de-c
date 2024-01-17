#include <stdio.h>
struct Repertoire {
    char nom[30];
    char prenom[30];
    char telephone[15];
};

void afficherRepertoire(struct Repertoire repertoire[], int taille) {
    printf("Répertoire :\n");
    for (int i = 0; i < taille; i++) {
        printf("Nom : %s\n", repertoire[i].nom);
        printf("Prénom : %s\n", repertoire[i].prenom);
        printf("Téléphone : %s\n", repertoire[i].telephone);
        printf("\n");
    }
}

int main() {
    struct Repertoire repertoire[10];

    int nombreEnregistrements;

    printf("Entrez le nombre d'enregistrements dans le répertoire (max 10) : ");
    scanf("%d", &nombreEnregistrements);

    if (nombreEnregistrements <= 10) {
        for (int i = 0; i < nombreEnregistrements; i++) {
            printf("Enregistrement %d :\n", i + 1);

            printf("Nom : ");
            scanf("%s", repertoire[i].nom);

            printf("Prénom : ");
            scanf("%s", repertoire[i].prenom);

            printf("Téléphone : ");
            scanf("%s", repertoire[i].telephone);

            printf("\n");
        }
        afficherRepertoire(repertoire, nombreEnregistrements);
    } else {
        printf("Nombre d'enregistrements invalide. Maximum autorisé : 10.\n");
    }

    return 0;
}
