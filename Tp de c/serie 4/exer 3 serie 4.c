#include <stdio.h>
struct etudiant {
    char nom[15];
    char prenom[15];
    int CNE;
    float notes[4];
    float moyenne;
};


void lireInformations(struct etudiant *e) {
    printf("Nom : ");
    scanf("%s", e->nom);

    printf("Prenom : ");
    scanf("%s", e->prenom);

    printf("CNE : ");
    scanf("%d", &e->CNE);

    printf("Notes (séparées par des espaces) : ");
    for (int i = 0; i < 4; i++) {
        scanf("%f", &e->notes[i]);
    }

    e->moyenne = 0;
    for (int i = 0; i < 4; i++) {
        e->moyenne += e->notes[i];
    }
    e->moyenne /= 4;
}

void afficherInformations(struct etudiant e) {
    printf("Nom : %s\n", e.nom);
    printf("Prenom : %s\n", e.prenom);
    printf("CNE : %d\n", e.CNE);
    printf("Moyenne : %.2f\n", e.moyenne);
    printf("\n");
}

struct etudiant trouverMaxMoyenne(struct etudiant tableau[], int taille) {
    struct etudiant maxEtudiant = tableau[0];

    for (int i = 1; i < taille; i++) {
        if (tableau[i].moyenne > maxEtudiant.moyenne) {
            maxEtudiant = tableau[i];
        }
    }

    return maxEtudiant;
}

int comparerDecroissant(const void *a, const void *b) {
    return ((struct etudiant *)b)->moyenne - ((struct etudiant *)a)->moyenne;
}

int main() {
    struct etudiant T[5];

    for (int i = 0; i < 5; i++) {
        printf("Entrez les informations pour l'etudiant %d :\n", i + 1);
        lireInformations(&T[i]);
    }


    struct etudiant maxEtudiant = trouverMaxMoyenne(T, 5);
    printf("Etudiant avec la plus grande moyenne :\n");
    afficherInformations(maxEtudiant);

    qsort(T, 5, sizeof(struct etudiant), comparerDecroissant);

    printf("Tableau trié en ordre décroissant selon la moyenne :\n");
    for (int i = 0; i < 5; i++) {
        afficherInformations(T[i]);
    }

    return 0;
}
