#include <stdio.h>

int main() {
    int n, kelipatan;
    long long total_keseluruhan = 0;

    scanf("%d %d", &n, &kelipatan);

    for (int i = 1; i <= n; i++) {
        long long jumlah_baris = 0;
        for (int j = i; j >= 1; j--) {
            printf("(%d * %d)", j, kelipatan);
            jumlah_baris += (long long)j * kelipatan;
            if (j > 1) {
                printf(" + ");
            }
        }
        printf(" = %lld\n", jumlah_baris);
        total_keseluruhan += jumlah_baris;
    }
    printf("%lld\n", total_keseluruhan);
    return 0;
}