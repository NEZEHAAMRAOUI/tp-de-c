#include <stdio.h>

struct Panneau {
    int largeur;
    int longueur;
    int epaisseur;
    int typeBois;
};

void saisirPanneau(struct Panneau *panneau) {
    printf("Saisie d'un panneau :\n");
    printf("Largeur (en mm): ");
    scanf("%d", &(panneau->largeur));
    printf("Longueur (en mm): ");
    scanf("%d", &(panneau->longueur));
    printf("Épaisseur (en mm): ");
    scanf("%d", &(panneau->epaisseur));
    printf("Type de bois (0: Pin, 1: Chêne, 2: Hêtre): ");
    scanf("%d", &(panneau->typeBois));
}

void afficherPanneau(const struct Panneau *panneau) {
    printf("Panneau :\n");
    printf("Largeur: %d mm\n", panneau->largeur);
    printf("Longueur: %d mm\n", panneau->longueur);
    printf("Épaisseur: %d mm\n", panneau->epaisseur);

    switch (panneau->typeBois) {
        case 0:
            printf("Type de bois: Pin\n");
            break;
        case 1:
            printf("Type de bois: Chêne\n");
            break;
        case 2:
            printf("Type de bois: Hêtre\n");
            break;
        default:
            printf("Type de bois: Inconnu\n");
            break;
    }
}

float calculerVolume(const struct Panneau *panneau) {
    float largeurMetre = panneau->largeur / 1000.0;
    float longueurMetre = panneau->longueur / 1000.0;
    float epaisseurMetre = panneau->epaisseur / 1000.0;

    float volume = largeurMetre * longueurMetre * epaisseurMetre;

    return volume;
}

int main() {
    struct Panneau monPanneau;

    saisirPanneau(&monPanneau);
    afficherPanneau(&monPanneau);


    float volume = calculerVolume(&monPanneau);
    printf("Volume du panneau: %.3f m^3\n", volume);

    return 0;
}
