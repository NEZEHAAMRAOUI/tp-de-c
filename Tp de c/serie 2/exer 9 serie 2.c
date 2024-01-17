#include <stdio.h>
#include <string.h>

#define MAX_STRING_LENGTH 100

void saisir(char *chaine) {
    printf("Entrez une cha�ne de caract�res : ");
    scanf("%s", chaine);
}

void afficher(const char *chaine) {
    printf("La cha�ne est : %s\n", chaine);
}

void inverse(char *chaine) {
    int longueur = strlen(chaine);
    for (int i = 0, j = longueur - 1; i < j; i++, j--) {
        char temp = chaine[i];
        chaine[i] = chaine[j];
        chaine[j] = temp;
    }
}

int compterMots(const char *chaine) {
    int nombreMots = 0;
    int enMot = 0;

    for (int i = 0; chaine[i] != '\0'; i++) {
        if (chaine[i] == ' ' || chaine[i] == '\t' || chaine[i] == '\n') {
            enMot = 0;
        } else if (!enMot) {

            enMot = 1;
            nombreMots++;
        }
    }

    return nombreMots;
}

int main() {
    char chaine[MAX_STRING_LENGTH];
    int choix;

    do {
        printf("\nMenu :\n");
        printf("1. Saisir une cha�ne\n");
        printf("2. Afficher la cha�ne\n");
        printf("3. Inverser la cha�ne\n");
        printf("4. Compter le nombre de mots\n");
        printf("5. Quitter\n");
        printf("Choisissez une op�ration (1-5) : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                saisir(chaine);
                break;
            case 2:
                afficher(chaine);
                break;
            case 3:
                inverse(chaine);
                printf("La cha�ne invers�e est : %s\n", chaine);
                break;
            case 4:
                printf("Le nombre de mots dans la cha�ne est : %d\n", compterMots(chaine));
                break;
            case 5:
                printf("Programme termin�.\n");
                break;
            default:
                printf("Choix invalide. Veuillez choisir une option entre 1 et 5.\n");
        }

        printf("Frapper une touche pour revenir au menu...\n");
        getchar();
        getchar();
    } while (choix != 5);

    return 0;
}
