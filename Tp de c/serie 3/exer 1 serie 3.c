#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Allouer dynamiquement une cha�ne de 30 caract�res
    char *nom = (char *)malloc(30 * sizeof(char));

    if (nom == NULL) {
        printf("Allocation de m�moire �chou�e.\n");
        return 1;
    }

    // Demander � l'utilisateur de saisir un nom
    printf("Entrez un nom : ");
    scanf("%s", nom);

    // Initialiser les pointeurs de d�but et de fin
    char *debut = nom;
    char *fin = nom + strlen(nom) - 1;

    // Inverser les caract�res tant que les deux pointeurs ne se sont pas rencontr�s
    while (debut < fin) {
        // �changer les caract�res point�s par les pointeurs
        char temp = *debut;
        *debut = *fin;
        *fin = temp;

        // D�placer les pointeurs
        debut++;
        fin--;
    }

    // Afficher le nom invers�
    printf("Nom invers� : %s\n", nom);

    // Lib�rer la m�moire allou�e dynamiquement
    free(nom);

    return 0;
}
