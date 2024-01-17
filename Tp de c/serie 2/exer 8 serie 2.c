#include <stdio.h>
#include <string.h>

#define MAX_NOM_LENGTH 20
#define MAX_NOMS 100


int comparerChaines(const char *s, const char *t) {
    return strcmp(s, t);
}

int plusDeDixCaracteres(const char *nom) {
    return strlen(nom) > 10;
}

int main() {
    char noms[MAX_NOMS][MAX_NOM_LENGTH];
    int nombreDeNomsPlusDeDixCaracteres = 0;

    printf("Saisissez des noms (tapez 'fin' pour terminer):\n");

    for (int i = 0; i < MAX_NOMS; i++) {
        printf("Nom %d : ", i + 1);


        scanf("%s", noms[i]);

        if (strcmp(noms[i], "fin") == 0) {
            break;
        }

        if (plusDeDixCaracteres(noms[i])) {
            nombreDeNomsPlusDeDixCaracteres++;
        }
    }

    printf("Nombre de noms ayant plus de dix caractères : %d\n", nombreDeNomsPlusDeDixCaracteres);

    return 0;
}
