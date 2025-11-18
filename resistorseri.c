#include <stdio.h>

int main() {
    int n, i;
    double R, total = 0;

    printf("Kalkulator Resistor Seri\n\n");
    printf("Masukkan jumlah resistor: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Masukkan nilai resistor %d (Ohm): ", i);
        scanf("%lf", &R);
        total += R;
    }

    printf("\nTotal Hambatan Seri = %.4lf Ohm\n", total);

    return 0;
}