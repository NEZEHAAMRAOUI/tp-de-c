#include <stdio.h>


typedef struct {
    double real;
    double imag;
} Complex;

double imag(Complex z) {
    return z.imag;
}

double real(Complex z) {
    return z.real;
}

Complex mul(Complex z1, Complex z2) {
    Complex result;
    result.real = z1.real * z2.real - z1.imag * z2.imag;
    result.imag = z1.real * z2.imag + z1.imag * z2.real;
    return result;
}


double imag_by_ref(Complex *z) {
    return z->imag;
}

double real_by_ref(Complex *z) {
    return z->real;
}

void mul_by_ref(Complex *z1, Complex *z2, Complex *result) {
    result->real = z1->real * z2->real - z1->imag * z2->imag;
    result->imag = z1->real * z2->imag + z1->imag * z2->real;
}

int main() {

    Complex complex1 = {3.0, 4.0};
    Complex complex2 = {1.0, -2.0};
    Complex result;

    printf("Partie réelle de complex1: %lf\n", real(complex1));
    printf("Partie imaginaire de complex1: %lf\n", imag(complex1));

    result = mul(complex1, complex2);
    printf("Multiplication (par valeur) : %lf + %lfi\n", result.real, result.imag);

    printf("Partie réelle de complex1 (par adresse): %lf\n", real_by_ref(&complex1));
    printf("Partie imaginaire de complex1 (par adresse): %lf\n", imag_by_ref(&complex1));

    mul_by_ref(&complex1, &complex2, &result);
    printf("Multiplication (par adresse) : %lf + %lfi\n", result.real, result.imag);

    return 0;
}
