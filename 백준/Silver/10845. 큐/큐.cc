#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    int q[10000];
    int f = 0, b = 0;
    char c[10];
    int x;

    for (int i = 0; i < n; i++) {
        scanf("%s", c);

        if (strcmp(c, "push") == 0) {
            scanf("%d", &x);
            q[b++] = x;
        }
        else if (strcmp(c, "pop") == 0) {
            if (f == b) printf("-1\n");
            else printf("%d\n", q[f++]);
        }
        else if (strcmp(c, "size") == 0) {
            printf("%d\n", b - f);
        }
        else if (strcmp(c, "empty") == 0) {
            printf("%d\n", (f == b) ? 1 : 0);
        }
        else if (strcmp(c, "front") == 0) {
            if (f == b) printf("-1\n");
            else printf("%d\n", q[f]);
        }
        else if (strcmp(c, "back") == 0) {
            if (f == b) printf("-1\n");
            else printf("%d\n", q[b - 1]);
        }
    }
    return 0;
}
