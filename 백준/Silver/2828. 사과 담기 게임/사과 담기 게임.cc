#include <stdio.h>

int main() {
    int a, b, c;  
    scanf("%d %d", &a, &b); 
    scanf("%d", &c);         

    int i = 1, j = b, n = 0;

    while (c--) {
        int x;
        scanf("%d", &x);

        if (x < i) {              
            n += i - x;
            j -= i - x;
            i = x;
        } else if (x > j) {
            n += x - j;
            i += x - j;
            j = x;
        }
    }

    printf("%d\n", n);
    return 0;
}
