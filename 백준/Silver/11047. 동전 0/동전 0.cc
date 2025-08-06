#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)b) - (*(int*)a);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int coins[n];
    for(int i=0; i<n; i++) scanf("%d", &coins[i]);

    qsort(coins, n, sizeof(int), compare);

    int count = 0;
    for(int i=0; i<n && k>0; i++) {
        count += k / coins[i];
        k %= coins[i];
    }

    printf("%d\n", count);
    return 0;
}
