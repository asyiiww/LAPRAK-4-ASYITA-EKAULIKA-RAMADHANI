#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    if (a < b) {
        int j = b;
        for (int i = a; i <= b; i++) {
            printf("%d %d", i, j);
            if (i < b) {
                printf(" - ");
            }
            j--;
        }
    } else {
        int j = b;
        for (int i = a; i >= b; i--) { 
            printf("%d %d", i, j);
            if (i > b) {
                printf(" - ");
            }
            j++;
        }
    }
    printf("\n");
    return 0;
}