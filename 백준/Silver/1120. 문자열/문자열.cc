#include <stdio.h>
#include <string.h>

int main() {
    char a[51], b[51];
    scanf("%s %s", a, b);

    int n = strlen(a);
    int m = strlen(b);
    int c = n;

    for (int i = 0; i <= m - n; i++) {
        int d = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] != b[i + j]) d++;
        }
        if (d < c) {
            c = d;
        }
    }

    printf("%d\n", c);

    return 0;
}
