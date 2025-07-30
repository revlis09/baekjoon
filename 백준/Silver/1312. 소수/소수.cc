#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    a %= b; 

    for (int i = 0; i < c - 1; i++) {
        a *= 10;
        a %= b;
    }

    a *= 10;
    printf("%d\n", a / b);

    return 0;
}
