#include <stdio.h>

int main() {
    int n;   
    scanf("%d", &n);

    int a[50], b[50];

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a[i], &b[i]);
    }

    for (int i = 0; i < n; i++) {
        int c = 1;

        for (int j = 0; j < n; j++) {
            if (i == j){
                continue;
            }

            if (a[i] < a[j] && b[i] < b[j]) {
                c++;
            }
        }

        printf("%d ", c);
    }

    return 0;
}
