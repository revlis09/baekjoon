#include <stdio.h>

int main() {
	int n, m, s;
	scanf("%d %d %d", &n, &m, &s);
	int a = 1, b = 1, c = 1;
	int count=0;
	while(1) {
		count ++;
		if(n == a && m == b && s == c)
			break;
		a++;
		b++;
		c++;
		
		if(a == 16)
			a = 1;
		if(b == 29)
			b = 1;
		if(c == 20)
			c = 1;
	}
	printf("%d\n", count);
}