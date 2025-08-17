#include <stdio.h>

int main() {
    int n, win = 0, mx = -1;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int c[5];
        for (int j = 0; j < 5; j++) scanf("%d", &c[j]);

        int best = 0;
        for (int a = 0; a < 5; a++)
            for (int b = a + 1; b < 5; b++)
                for (int d = b + 1; d < 5; d++) {
                    int v = (c[a] + c[b] + c[d]) % 10;
                    if (v > best) best = v;
                }

        if (best >= mx) {
            mx = best;
            win = i;
        }
    }

    printf("%d\n", win);
    return 0;
}
