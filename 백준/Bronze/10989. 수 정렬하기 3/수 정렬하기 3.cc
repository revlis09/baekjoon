#include <stdio.h>

int count[10001];  // 1부터 10000까지 카운팅

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        count[num]++;
    }

    for (int i = 1; i <= 10000; i++) {
        while (count[i] > 0) {
            printf("%d\n", i);
            count[i]--;
        }
    }

    return 0;
}

