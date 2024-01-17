#include <stdio.h>

struct Produit {
    int reference;
    int code;
    float prix;
    int quantiteDisponible;
};

void saisirProduit(struct Produit *produit) {
    printf("Saisie d'un produit :\n");
    printf("Reference: ");
    scanf("%d", &(produit->reference));
    printf("Code (1: Carte mere, 2: Processeur, 3: Barrette memoire, 4: Carte graphique): ");
    scanf("%d", &(produit->code));
    printf("Prix (en DH): ");
    scanf("%f", &(produit->prix));
    printf("Quantite disponible: ");
    scanf("%d", &(produit->quantiteDisponible));
}

void afficherProduit(const struct Produit *produit) {
    printf("Produit :\n");
    printf("Reference: %d\n", produit->reference);
    printf("Code: %d\n", produit->code);
    printf("Prix: %.2f DH\n", produit->prix);
    printf("Quantite disponible: %d\n", produit->quantiteDisponible);
}

void saisirCommande(struct Produit *produit) {
    int quantiteCommandee;

    printf("Saisie d'une commande :\n");
    printf("Quantite commandée: ");
    scanf("%d", &quantiteCommandee);

    if (quantiteCommandee > 0 && quantiteCommandee <= produit->quantiteDisponible) {
        float prixTotal = quantiteCommandee * produit->prix;
        printf("Commande :\n");
        printf("Reference: %d\n", produit->reference);
        printf("Code: %d\n", produit->code);
        printf("Prix unitaire: %.2f DH\n", produit->prix);
        printf("Quantite commandee: %d\n", quantiteCommandee);
        printf("Prix total: %.2f DH\n", prixTotal);

        produit->quantiteDisponible -= quantiteCommandee;
    } else {
        printf("Quantite invalide ou insuffisante.\n");
    }
}

int main() {
    struct Produit monProduit;
    saisirProduit(&monProduit);
    afficherProduit(&monProduit);

    saisirCommande(&monProduit);

    return 0;
}
