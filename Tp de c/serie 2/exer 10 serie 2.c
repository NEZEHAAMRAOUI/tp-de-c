#include <stdio.h>
#include <string.h>

// 1. La distance de Hamming entre deux chaînes de caractères
int distanceH(const char *S1, const char *S2) {
    int distance = 0;

    while (*S1 && *S2) {
        if (*S1 != *S2) {
            distance++;
        }
        S1++;
        S2++;
    }

    return distance;
}

// 2. La distance de Hamming d'un langage
int distanceH_langage(const char *langage[], int taille) {
    if (taille <= 1) {
        return 0; // Distance de Hamming d'un langage vide ou d'une seule chaîne est 0
    }

    int min_distance = __INT_MAX__;

    for (int i = 0; i < taille; i++) {
        for (int j = i + 1; j < taille; j++) {
            int current_distance = distanceH(langage[i], langage[j]);
            min_distance = (current_distance < min_distance) ? current_distance : min_distance;
        }
    }

    return min_distance;
}

// 3. La distance de Hamming entre deux nombres entiers positifs
int distanceH_entiers(int n1, int n2) {
    int distance = 0;

    while (n1 > 0 || n2 > 0) {
        if ((n1 & 1) != (n2 & 1)) {
            distance++;
        }
        n1 >>= 1;
        n2 >>= 1;
    }

    return distance;
}

int main() {
    // Exemples d'utilisation
    printf("Distance de Hamming entre 'sure' et 'cure' : %d\n", distanceH("sure", "cure")); // Sortie attendue: 1

    const char *langage_exemple[] = {"aabb", "xayy", "tghy", "xgyy"};
    int taille_langage = sizeof(langage_exemple) / sizeof(langage_exemple[0]);
    printf("Distance de Hamming du langage : %d\n", distanceH_langage(langage_exemple, taille_langage)); // Sortie attendue: 1

    printf("Distance de Hamming entre les entiers 7 et 10 : %d\n", distanceH_entiers(7, 10)); // Sortie attendue: 3

    return 0;
}
