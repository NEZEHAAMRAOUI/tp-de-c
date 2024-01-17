#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Allouer dynamiquement une chaîne de 30 caractères
    char *nom = (char *)malloc(30 * sizeof(char));

    if (nom == NULL) {
        printf("Allocation de mémoire échouée.\n");
        return 1;
    }

    // Demander à l'utilisateur de saisir un nom
    printf("Entrez un nom : ");
    scanf("%s", nom);

    // Initialiser les pointeurs de début et de fin
    char *debut = nom;
    char *fin = nom + strlen(nom) - 1;

    // Inverser les caractères tant que les deux pointeurs ne se sont pas rencontrés
    while (debut < fin) {
        // Échanger les caractères pointés par les pointeurs
        char temp = *debut;
        *debut = *fin;
        *fin = temp;

        // Déplacer les pointeurs
        debut++;
        fin--;
    }

    // Afficher le nom inversé
    printf("Nom inversé : %s\n", nom);

    // Libérer la mémoire allouée dynamiquement
    free(nom);

    return 0;
}
