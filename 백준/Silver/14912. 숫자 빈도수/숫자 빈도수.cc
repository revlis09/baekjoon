#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int count = 0;

    for (int i = 1; i <= a; i++) {
        int num = i;
        while (num > 0) {
            if (num % 10 == b) {
                count++;
            }
            num /= 10;
        }
        if (i == 0 && b == 0) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
