#include <stdio.h>

int main() {
    int b;
    scanf("%d", &b);
    char a[1000][1000];   // 방 상태
    
    for (int i = 0; i < b; i++) {
        scanf("%s", a[i]);
    }

    int c = 0, d = 0;  // c = 가로 자리 수, d = 세로 자리 수

    // 가로 검사
    for (int i = 0; i < b; i++) {
        int k = 0;  // 연속된 빈칸 수
        for (int j = 0; j < b; j++) {
            if (a[i][j] == '.') {
                k++;
            } 
            else {
                if (k >= 2) {
                    c++;
                }
                k = 0;
            }
        }
        if (k >= 2) {
            c++;
        }
    }

    // 세로 검사
    for (int j = 0; j < b; j++) {
        int k = 0;
        for (int i = 0; i < b; i++) {
            if (a[i][j] == '.') {
                k++;
            } 
            else {
                if (k >= 2) {
                    d++;
                }
                k = 0;
            }
        }
        if (k >= 2) {
            d++;
        }
    }

    printf("%d %d\n", c, d);
    return 0;
}
