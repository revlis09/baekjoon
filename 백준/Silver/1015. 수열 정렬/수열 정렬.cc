#include <stdio.h>

int main() {
    int n, i, j;
    int a[50];
    int c[50] = {0};

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        for (j = 0; j < i; j++) {
            if (a[j] > a[i]) {
                c[j]++;
            } else {
                c[i]++;
            }
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}
