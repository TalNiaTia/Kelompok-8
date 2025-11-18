#include <stdio.h>
int main() {
    int n, i;
    double R, total_kebalikan = 0, R_total;
    
    printf("kalkulator Resistor Paralel\n\n");
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
    
    return 0;
}