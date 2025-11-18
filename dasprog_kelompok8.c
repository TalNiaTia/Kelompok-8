#include <stdio.h>

int main() {
    char pilihan;
    double V, I, R;

    printf("Kalkulator Hukum Ohm (V = I × R)\n\n");

    printf("Pilih besaran (V/I/R): ");
    scanf(" %c", &pilihan);

    if (pilihan == 'V') {
        printf("Masukkan I (Ampere): ");
        scanf("%lf", &I);
        printf("Masukkan R (Ohm): ");
        scanf("%lf", &R);

        V = I * R;
        printf("Tegangan (V) = %.4lf Volt\n", V);
    }
    else if (pilihan == 'I') {
        printf("Masukkan V (Volt): ");
        scanf("%lf", &V);
        printf("Masukkan R (Ohm): ");
        scanf("%lf", &R);

        I = V / R;
        printf("Arus (I) = %.4lf Ampere\n", I);
    }
    else if (pilihan == 'R') {
        printf("Masukkan V (Volt): ");
        scanf("%lf", &V);
        printf("Masukkan I (Ampere): ");
        scanf("%lf", &I);

        R = V / I;
        printf("Hambatan (R) = %.4lf Ohm\n", R);
    }
    else {
        printf("Input tidak valid! Gunakan huruf besar: V / I / R.\n");
    }

    return 0;
}