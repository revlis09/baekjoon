#include <stdio.h>
#include <string.h>

int main() {
    char num[1000001]; 
    int count = 0;

    scanf("%s", num); 

    while (strlen(num) > 1) {
        int sum = 0;
        for (int i = 0; num[i] != '\0'; i++) {
            sum += num[i] - '0';
        }

        sprintf(num, "%d", sum);

        count++;
    }

    printf("%d\n", count);
    if ((num[0] - '0') % 3 == 0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

