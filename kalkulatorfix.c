#include <stdio.h>

// Fungsi untuk konversi desimal ke basis lain
void konversi(int desimal, int basis) {
    int sisa, hasil[50], i = 0;

    if (desimal == 0) {
        printf("0");
        return;
    }

    while (desimal > 0) {
        sisa = desimal % basis;
        hasil[i] = sisa;
        desimal = desimal / basis;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        if (basis == 16 && hasil[j] >= 10) {
            printf("%c", 'A' + (hasil[j] - 10));
        } else {
            printf("%d", hasil[j]);
        }
    }
}

// Fungsi 1: Kalkulator Hukum Ohm
void kalkulatorHukumOhm() {
    char pilihan;
    double V, I, R;

    printf("\nKalkulator Hukum Ohm (V = I × R)\n\n");

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
}

// Fungsi 2: Kalkulator Daya Listrik
void hitungDaya() {
    double V, I, P;

    printf("\nKalkulator Daya Listrik (P = V × I)\n\n");
    printf("Masukkan Tegangan (Volt): ");
    scanf("%lf", &V);

    printf("Masukkan Arus (Ampere): ");
    scanf("%lf", &I);

    P = V * I;
    printf("\nDaya Listrik (P) = %.4lf Watt\n", P);
}

// Fungsi 3: Kalkulator Resistor Seri
void resistorSeri() {
    int n, i;
    double R, total = 0;

    printf("\nKalkulator Resistor Seri\n\n");
    printf("Masukkan jumlah resistor: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Masukkan nilai resistor %d (Ohm): ", i);
        scanf("%lf", &R);
        total += R;
    }

    printf("\nTotal Hambatan Seri = %.4lf Ohm\n", total);
}

// Fungsi 4: Kalkulator Resistor Paralel
void resistorParalel() {
    int n, i;
    double R, total_kebalikan = 0, R_total;
    
    printf("\nkalkulator Resistor Paralel\n\n");
    printf("Masukkan jumlah resistor: ");
    scanf("%d", &n);
    
    total_kebalikan = 0;
    for (i = 1; i <= n; i++) {
        printf("Masukkan nilai resistor %d (Ohm): ", i);
        scanf("%lf", &R);

        total_kebalikan += 1.0 / R;
    }
    R_total = 1.0 / total_kebalikan;
    printf("\nTotal Hambatan Paralel = %.4lf Ohm\n", R_total);
}

// Fungsi 5: Desimal ke Biner/Oktal/Heksadesimal
void desimalKeBasisLain() {
    int desimal;

    printf("\nMasukkan bilangan desimal: ");
    scanf("%d", &desimal);

    printf("\nHasil konversi:\n");

    printf("Biner (basis 2)        : ");
    konversi(desimal, 2);

    printf("\nOktal (basis 8)        : ");
    konversi(desimal, 8);

    printf("\nHeksadesimal (basis 16): ");
    konversi(desimal, 16);

    printf("\n");
}

// Fungsi 6: Biner ke Desimal
void binerKeDesimal() {
    char angka[100];
    int basis = 2;
    long long desimal = 0;
    int panjang = 0, posisi = 0;

    printf("\n--- Konversi Biner ke Desimal ---\n\n");

    printf("Masukkan bilangan biner: ");
    scanf("%s", angka);

    while (angka[panjang] != '\0') {
        panjang++;
    }

    for (int i = panjang - 1; i >= 0; i--) {
        char c = angka[i];
        int nilaiDigit;

        if (c >= '0' && c <= '9') {
            nilaiDigit = c - '0';
        } else {
            printf("Digit tidak valid!\n");
            return;
        }

        long long pangkat = 1;
        for (int j = 0; j < posisi; j++) {
            pangkat *= basis;
        }

        desimal += nilaiDigit * pangkat;
        posisi++;
    }

    printf("\nHasil dalam desimal = %lld\n", desimal);
}

// Fungsi 7: Oktal ke Desimal
void oktalKeDesimal() {
    char angka[100];
    int basis = 8;
    long long desimal = 0;
    int panjang = 0, posisi = 0;

    printf("\n--- Konversi Oktal ke Desimal ---\n\n");

    printf("Masukkan bilangan oktal: ");
    scanf("%s", angka);

    while (angka[panjang] != '\0') {
        panjang++;
    }

    for (int i = panjang - 1; i >= 0; i--) {
        char c = angka[i];
        int nilaiDigit;

        if (c >= '0' && c <= '9') {
            nilaiDigit = c - '0';
        } else {
            printf("Digit tidak valid!\n");
            return;
        }

        long long pangkat = 1;
        for (int j = 0; j < posisi; j++) {
            pangkat *= basis;
        }

        desimal += nilaiDigit * pangkat;
        posisi++;
    }

    printf("\nHasil dalam desimal = %lld\n", desimal);
}

// Fungsi 8: Heksadesimal ke Desimal
void heksadesimalKeDesimal() {
    char angka[100];
    int basis = 16;
    long long desimal = 0;
    int panjang = 0, posisi = 0;

    printf("\n--- Konversi Heksadesimal ke Desimal ---\n\n");

    printf("Masukkan bilangan heksadesimal: ");
    scanf("%s", angka);

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
            return;
        }

        long long pangkat = 1;
        for (int j = 0; j < posisi; j++) {
            pangkat *= basis;
        }

        desimal += nilaiDigit * pangkat;
        posisi++;
    }

    printf("\nHasil dalam desimal = %lld\n", desimal);
}

// Fungsi 9: Keluar
void keluar() {
    printf("\nSuwoonnn!\n");
    printf("Program selesai.\n");
}

// Main Program
int main() {
    int pilihan;

    do {
        printf("\n================================================\n");
        printf("|  TOOLKIT LENGKAP ASISTEN LABORATORIUM ELEKTRO |\n");
        printf("================================================\n");
        printf("| --- Verifikasi Rangkaian Elektrik ---        |\n");
        printf("| 1. Kalkulator Hukum Ohm (V = I * R)          |\n");
        printf("| 2. Kalkulator Daya Listrik (P = V * I)       |\n");
        printf("| 3. Kalkulator Resistor Seri                  |\n");
        printf("| 4. Kalkulator Resistor Paralel               |\n");
        printf("|                                              |\n");
        printf("| --- Utilitas Sistem Digital ---              |\n");
        printf("| 5. Desimal -> Biner / Oktal / Heksadesimal   |\n");
        printf("| 6. Biner -> Desimal                          |\n");
        printf("| 7. Oktal -> Desimal                          |\n");
        printf("| 8. Heksadesimal -> Desimal                   |\n");
        printf("|                                              |\n");
        printf("| 9. Keluar                                    |\n");
        printf("================================================\n");

        printf("Masukkan pilihan Anda (1-9): ");
        scanf("%d", &pilihan);

        switch(pilihan) {
            case 1:
                kalkulatorHukumOhm();
                break;
            case 2:
                hitungDaya();
                break;
            case 3:
                resistorSeri();
                break;
            case 4:
                resistorParalel();
                break;
            case 5:
                desimalKeBasisLain();
                break;
            case 6:
                binerKeDesimal();
                break;
            case 7:
                oktalKeDesimal();
                break;
            case 8:
                heksadesimalKeDesimal();
                break;
            case 9:
                keluar();
                break;
            default:
                printf("\nPilihan tidak valid! Silakan pilih 1-9.\n");
        }

        if (pilihan != 9) {
            printf("\nTekan Enter untuk kembali ke menu utama...\n");
            getchar();
            getchar();
        }

    } while(pilihan != 9);

    return 0;
}