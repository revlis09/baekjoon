#include <stdio.h>

int main(void) {
    int t, n, m; 
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d %d", &n, &m);

        long long result = 1;

      
        if (n > m / 2) {
            n = m - n;
        }

        for (int j = 0; j < n; j++) {
            result = result * (m - j) / (j + 1);
        }
        printf("%lld\n", result);
    }

    return 0;
}

