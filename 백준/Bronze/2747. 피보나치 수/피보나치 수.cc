#include <stdio.h>
#define MAX 46

int main(void)
{
	int n, i;
	int fibo[MAX];
	
	scanf("%d", &n);
	
	fibo[0] = 0;
	fibo[1] = 1;
	
	for(i = 2; i <= n; i++)
	{
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
	
	printf("%d", fibo[n]);
}