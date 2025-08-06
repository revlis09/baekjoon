#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int max = a[0];
    int sum = a[0];

    for (int i = 1; i < n; i++) {
        if (sum < 0)
            sum = a[i];
        else
            sum += a[i];

        if (sum > max)
            max = sum;
    }

    printf("%d\n", max);
    return 0;
}
