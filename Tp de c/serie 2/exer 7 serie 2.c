#include <stdio.h>

int addition(int A, int B);
int soustraction(int A, int B);
int multiplication(int A, int B);
int division(int A, int B);
int modulo(int A, int B);

int main() {
    char choix;
    do {

        printf("Entrez une expression (ex: 2+5) : ");
        int operand1, operand2;
        char operateur;
        scanf("%d %c %d", &operand1, &operateur, &operand2);

        int resultat;
        switch (operateur) {
            case '+':
                resultat = addition(operand1, operand2);
                break;
            case '-':
                resultat = soustraction(operand1, operand2);
                break;
            case '*':
                resultat = multiplication(operand1, operand2);
                break;
            case '/':
                resultat = division(operand1, operand2);
                break;
            case '%':
                resultat = modulo(operand1, operand2);
                break;
            default:
                printf("Opérateur non valide.\n");
                return 1;
        }

        printf("Résultat : %d\n", resultat);


        printf("Voulez-vous recommencer ? (O/N) : ");
        scanf(" %c", &choix);
    } while (choix == 'O' || choix == 'o');

    return 0;
}



int addition(int A, int B) {
    return A + B;
}

int soustraction(int A, int B) {
    return A - B;
}

int multiplication(int A, int B) {
    return A * B;
}

int division(int A, int B) {
    if (B != 0) {
        return A / B;
    } else {
        printf("Division par zéro.\n");
        return 0;
    }
}

int modulo(int A, int B) {
    if (B != 0) {
        return A % B;
    } else {
        printf("Division par zéro.\n");
        return 0;
    }
}
