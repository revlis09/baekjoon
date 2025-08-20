#include <stdio.h>
#include <string.h>

int main() {
    char a[150];

    while (1) {
        if (!fgets(a, sizeof(a), stdin)) {
            break;
        }

        if (a[0] == '.' && a[1] == '\n') {
            break;
        }

        char b[150];
        int i, m = 0, result = 1;

        for (i = 0; a[i]; i++) {
            if (a[i] == '(' || a[i] == '[') {
                b[m++] = a[i];
            } 
            else if (a[i] == ')') {
                if (m == 0 || b[m - 1] != '(') {
                    result = 0;
                    break;
                }
                m--;
            } 
            else if (a[i] == ']') {
                if (m == 0 || b[m - 1] != '[') {
                    result = 0;
                    break;
                }
                m--;
            }
        }

        if (m == 0 && result) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }

    return 0;
}


