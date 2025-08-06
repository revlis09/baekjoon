#include <stdio.h>

int main() {
    char s[101];
    scanf("%s", s);

    int count = 0;
    for (int i = 0; s[i] != '\0'; ) {
        if (s[i] == 'd' && s[i+1] == 'z' && s[i+2] == '=') {
            i += 3;
        } else if ((s[i] == 'c' && (s[i+1] == '=' || s[i+1] == '-')) ||
                   (s[i] == 'd' && s[i+1] == '-') ||
                   (s[i] == 'l' && s[i+1] == 'j') ||
                   (s[i] == 'n' && s[i+1] == 'j') ||
                   (s[i] == 's' && s[i+1] == '=') ||
                   (s[i] == 'z' && s[i+1] == '=')) {
            i += 2;
        } else {
            i++;
        }
        count++;
    }

    printf("%d\n", count);
    return 0;
}
