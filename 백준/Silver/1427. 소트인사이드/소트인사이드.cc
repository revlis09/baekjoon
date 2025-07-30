#include <stdio.h>
#include <string.h>

int main() {
    char s[11];
    scanf("%s", s);
    int len = strlen(s);

    for (int i = 0; i < len -1; i++) {
        for (int j = 0; j < len -1 - i; j++) {
            if (s[j] < s[j+1]) {
                char t = s[j];
                s[j] = s[j+1];
                s[j+1] = t;
            }
        }
    }

    printf("%s\n", s);
    return 0;
}
