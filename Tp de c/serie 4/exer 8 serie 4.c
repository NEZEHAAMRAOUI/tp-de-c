#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int nb_elem;
    int *tab;
} TypeTableau;

TypeTableau CreationTableau(int n) {
    TypeTableau T;
    T.nb_elem = n;
    T.tab = (int *)malloc(n * sizeof(int));

    if (T.tab == NULL) {
        printf("Erreur d'allocation mémoire\n");
        exit(EXIT_FAILURE);
    }

    return T;
}
void DestructionTableau(TypeTableau T) {
    free(T.tab);
}

void SimpleLectureTableau(TypeTableau T) {
    printf("Saisie des elements du tableau :\n");
    for (int i = 0; i < T.nb_elem; ++i) {
        printf("Element %d : ", i + 1);
        scanf("%d", &(T.tab[i]));
    }
}

void Affichage(TypeTableau T) {
    printf("Contenu du tableau :\n");
    for (int i = 0; i < T.nb_elem; ++i) {
        printf("%d ", T.tab[i]);
    }
    printf("\n");
}

TypeTableau DoubleTableau(TypeTableau T) {
    TypeTableau nouveauT;
    nouveauT.nb_elem = T.nb_elem;
    nouveauT.tab = (int *)malloc(T.nb_elem * sizeof(int));

    if (nouveauT.tab == NULL) {
        printf("Erreur d'allocation mémoire\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < T.nb_elem; ++i) {
        nouveauT.tab[i] = 2 * T.tab[i];
    }

    return nouveauT;
}

int main() {
    int n;

    printf("Saisir la taille du tableau : ");
    scanf("%d", &n);

    TypeTableau monTableau = CreationTableau(n);

    SimpleLectureTableau(monTableau);

    printf("\nTableau original :\n");
    Affichage(monTableau);

    TypeTableau doubleTableau = DoubleTableau(monTableau);

    printf("\nTableau avec les elements doubles :\n");
    Affichage(doubleTableau);

    DestructionTableau(monTableau);
    DestructionTableau(doubleTableau);

    return 0;
}
