#include <stdio.h>

struct date {
    int jour;
    char mois[10];
    int annee;
};

struct employe {
    char nom[15];
    char prenom[15];
    struct date date_naissance;
    struct date date_embauche;
};

void afficherEmploye(struct employe e) {
    printf("Nom: %s\n", e.nom);
    printf("Prenom: %s\n", e.prenom);
    printf("Date de naissance: %d %s %d\n", e.date_naissance.jour, e.date_naissance.mois, e.date_naissance.annee);
    printf("Date d'embauche: %d %s %d\n", e.date_embauche.jour, e.date_embauche.mois, e.date_embauche.annee);
    printf("\n");
}

int main() {
    struct employe employes[4];

    for (int i = 0; i < 4; i++) {
        printf("Entrez les informations pour l'employe %d :\n", i + 1);

        printf("Nom : ");
        scanf("%s", employes[i].nom);

        printf("Prenom : ");
        scanf("%s", employes[i].prenom);

        printf("Date de naissance (jour mois annee) : ");
        scanf("%d %s %d", &employes[i].date_naissance.jour, employes[i].date_naissance.mois, &employes[i].date_naissance.annee);

        printf("Date d'embauche (jour mois annee) : ");
        scanf("%d %s %d", &employes[i].date_embauche.jour, employes[i].date_embauche.mois, &employes[i].date_embauche.annee);

        printf("\n");
    }

    printf("Informations des employes :\n");
    for (int i = 0; i < 4; i++) {
        afficherEmploye(employes[i]);
    }

    return 0;
}
