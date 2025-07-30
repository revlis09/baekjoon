#include <stdio.h>

int main()
{
    int a = 64, b, c = 0;
    scanf("%d", &b);
    
    while (b > 0)
    {
        if (a > b)
            a /= 2;
        else
        {
            c++;
            b -= a;
        }
    }
    
    printf("%d", c);
    return 0;
}
