#include <stdio.h>

int main() {
    int n, a;
    scanf("%d", &n);

    a = 0;
    while (1) {
        if (n % 5 == 0) {
            a += n / 5;
            break;
        }
        n -= 3;
        a++;
        if (n < 0) {
            a = -1;
            break;
        }
    }

    printf("%d\n", a);
    return 0;
}
