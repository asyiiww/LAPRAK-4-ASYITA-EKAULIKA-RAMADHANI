#include <stdio.h>

int main() {
    int pilihan;
    float a, b, hasil;

    while (1) {
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan Pilihan : ");
        scanf("%d", &pilihan);

        if (pilihan == 5) {
            printf("Terimakasih telah menggunakan kalkulator Asyita\n");
            break;
        } else if (pilihan >= 1 && pilihan <= 4) {
            printf("Masukkan angka pertama : ");
            scanf("%f", &a);
            printf("Masukkan angka kedua : ");
            scanf("%f", &b);

            if (pilihan == 1) {
                hasil = a + b;
                printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n", a, b, hasil);
            } else if (pilihan == 2) {
                hasil = a - b;
                printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n", a, b, hasil);
            } else if (pilihan == 3) {
                hasil = a * b;
                printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n", a, b, hasil);
            } else if (pilihan == 4) {
                hasil = a / b;
                printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n", a, b, hasil);
            }
        } else {
            printf("Input anda salah, silahkan coba lagi\n");
        }
    }
    return 0;
}