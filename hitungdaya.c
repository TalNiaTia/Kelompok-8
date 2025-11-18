#include <stdio.h>

int main() {
    double V, I, P;

    printf("Kalkulator Daya Listrik (P = V × I)\n\n");
    printf("Masukkan Tegangan (Volt): ");
    scanf("%lf", &V);

    printf("Masukkan Arus (Ampere): ");
    scanf("%lf", &I);

    P = V * I;
    printf("\nDaya Listrik (P) = %.4lf Watt\n", P);

    return 0;

}