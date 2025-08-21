#include <stdio.h>

int main() {
    int n, a = 0;
    scanf("%d", &n);

    for (int i = n; i > 0; i--) {
        for (int j = 0; j < a; j++) {
            printf(" ");
        }

        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");

        a++;
    }

    return 0;
}