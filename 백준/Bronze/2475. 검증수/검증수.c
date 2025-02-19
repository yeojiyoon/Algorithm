#include <stdio.h>

int main(void)
{
	int a, b, c, d, e;
	int sum;
	
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	
	sum = (a*a + b*b + c*c + d*d + e*e)%10;
	
	printf("%d", sum);
}