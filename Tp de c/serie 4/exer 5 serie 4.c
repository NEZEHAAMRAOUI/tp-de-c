#include <stdio.h>

struct Personne {
    char nom[50];
    char prenom[50];
    char telephone[15];
};

void saisieDonnees(struct Personne *personne) {
    printf("Nom: ");
    scanf("%s", personne->nom);

    printf("Prenom: ");
    scanf("%s", personne->prenom);

    printf("Telephone: ");
    scanf("%s", personne->telephone);
}
void afficherDonnees(struct Personne *personne) {
    printf("Nom: %s\n", personne->nom);
    printf("Prenom: %s\n", personne->prenom);
    printf("Telephone: %s\n", personne->telephone);
}

int nb_occurrence(char T[], int n, char c, int *p_occ, int *d_occ) {
    int occurences = 0;
    *p_occ = -1;
    *d_occ = -1;

    for (int i = 0; i < n; i++) {
        if (T[i] == c) {
            if (*p_occ == -1) {
                *p_occ = i;
            }
            *d_occ = i;
            occurences++;
        }
    }

    return occurences;
}

int main() {
    struct Personne repertoire[10];
    int nombrePersonnes;
    printf("donner le nombre des personnes: ");
    scanf("%d",&nombrePersonnes);

    for (int i = 0; i < nombrePersonnes; i++) {
        printf("\nSaisie des donnees pour la personne %d:\n", i + 1);
        saisieDonnees(&repertoire[i]);
    }

    printf("\nAffichage des donnees pour toutes les personnes:\n");
    for (int i = 0; i < nombrePersonnes; i++) {
        afficherDonnees(&repertoire[i]);
    }
    char c;
    char T[40];
    printf("donner un caractere: ");
    scanf(" %c",&c);
    int p_occ, d_occ;
    int occurrences = nb_occurrence(T, sizeof(T) - 1, c, &p_occ, &d_occ);

    printf("\nLe caractere '%c' apparait %d fois dans le tableau.\n", c, occurrences);
    printf("Premiere occurrence à l'indice %d, derniere occurrence à l'indice %d.\n", p_occ, d_occ);

    return 0;
}
