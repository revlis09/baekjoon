#include <stdio.h>

int main() {
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);

    int c = 0;
    while (a != b) {
        a = (a + 1) / 2;
        b = (b + 1) / 2;
        c++;
    }

    printf("%d\n", c);

    return 0;
}
