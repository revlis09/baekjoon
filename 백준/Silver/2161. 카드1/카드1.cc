#include <stdio.h>

int main() {
    int a; 
    scanf("%d", &a);

    int b[10000];
    int c = 0, d = a; 

    for (int i = 0; i < a; i++) {
        b[i] = i + 1;
    }

    while (c < d) {
        printf("%d ", b[c++]);   
        if (c < d) {             
            b[d++] = b[c++];      
        }
    }

    return 0;
}
