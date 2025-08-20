#include <stdio.h>
#include <string.h>

int main() {
    char a[150];
    
    while (1) {
        if (!fgets(a, sizeof(a), stdin)) break; // 입력 없으면 종료
        if (a[0] == '.' && a[1] == '\n') break; // 종료 조건

        char stack[150];
        int top = 0, result = 1;

        for (int i = 0; a[i]; i++) {
            if (a[i] == '(' || a[i] == '[') {
                stack[top++] = a[i];
            }
            else if (a[i] == ')') {
                if (top == 0 || stack[top - 1] != '(') {
                    result = 0;
                    break;
                }
                top--;
            }
            else if (a[i] == ']') {
                if (top == 0 || stack[top - 1] != '[') {
                    result = 0;
                    break;
                }
                top--;
            }
        }

        if (result && top == 0) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }

    return 0;
}
