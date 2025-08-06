#include <stdio.h>

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);

    long long min = a < b ? a : b;
    long long g= 1;

    for (long long i = min; i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            g = i;
            break;
        }
    }

    printf("%lld\n", a * b / g);
    return 0;
}
