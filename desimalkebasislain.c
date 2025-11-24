#include <stdio.h>

void konversi(int desimal, int basis) {
    int sisa, hasil[50], i = 0;

    // Jika desimal 0, langsung tampilkan 0
    if (desimal == 0) {
        printf("0");
        return;
    }

    // Algoritma sisa bagi
    while (desimal > 0) {
        sisa = desimal % basis;
        hasil[i] = sisa;
        desimal = desimal / basis;
        i++;
    }

    // Cetak hasil dari belakang
    for (int j = i - 1; j >= 0; j--) {
        if (basis == 16 && hasil[j] >= 10) {
            // Ubah 10–15 menjadi A–F
            printf("%c", 'A' + (hasil[j] - 10));
        } else {
            printf("%d", hasil[j]);
        }
    }
}

int main() {
    int desimal;

    printf("Masukkan bilangan desimal: ");
    scanf("%d", &desimal);

    printf("\nHasil konversi:\n");

    printf("Biner (basis 2)        : ");
    konversi(desimal, 2);

    printf("\nOktal (basis 8)        : ");
    konversi(desimal, 8);

    printf("\nHeksadesimal (basis 16): ");
    konversi(desimal, 16);

    printf("\n");

    return 0;
}
