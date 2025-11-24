#include <stdio.h>

int main() {
    char angka[100];
    int basis;
    long long desimal = 0;
    int panjang = 0, posisi = 0;

    printf("=== Konversi Bilangan ke Desimal (Basis 2 / 8 / 16) ===\n\n");

    printf("Masukkan bilangan (biner / oktal / heksadesimal): ");
    scanf("%s", angka);

    printf("Masukkan basis bilangan (2, 8, 16): ");
    scanf("%d", &basis);

    while (angka[panjang] != '\0') {
        panjang++;
    }

    for (int i = panjang - 1; i >= 0; i--) {
        char c = angka[i];
        int nilaiDigit;

        if (c >= '0' && c <= '9') {
            nilaiDigit = c - '0';
        } else if (c >= 'A' && c <= 'F') {
            nilaiDigit = 10 + (c - 'A');
        } else if (c >= 'a' && c <= 'f') {
            nilaiDigit = 10 + (c - 'a');
        } else {
            printf("Digit tidak valid!\n");
            return 0;
        }

        long long pangkat = 1;
        for (int j = 0; j < posisi; j++) {
            pangkat *= basis;
        }

        desimal += nilaiDigit * pangkat;
        posisi++;
    }

    printf("\nHasil dalam desimal = %lld\n", desimal);
    return 0;
}