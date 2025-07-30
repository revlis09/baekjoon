#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    int s[10000];
    int t = -1;
    char c[10];
    int x;

    for (int i = 0; i < n; i++) {
        scanf("%s", c);

        if (strcmp(c, "push") == 0) {
            scanf("%d", &x);
            s[++t] = x;
        }
        else if (strcmp(c, "pop") == 0) {
            if (t == -1) printf("-1\n");
            else printf("%d\n", s[t--]);
        }
        else if (strcmp(c, "size") == 0) {
            printf("%d\n", t + 1);
        }
        else if (strcmp(c, "empty") == 0) {
            printf("%d\n", t == -1 ? 1 : 0);
        }
        else if (strcmp(c, "top") == 0) {
            if (t == -1) printf("-1\n");
            else printf("%d\n", s[t]);
        }
    }
    return 0;
}
