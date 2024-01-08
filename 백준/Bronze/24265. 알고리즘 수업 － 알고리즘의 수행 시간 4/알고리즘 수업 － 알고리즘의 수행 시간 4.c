#include <stdio.h>
#include <stdlib.h>

long long int MenOfPassion(long long int n)
{
	long long int i, j, sum = 0;
	i = n/2;
	
	for (i = 1; i < n; i++)
	{
		for (j = i + 1; j <= n; j++)
			sum++;
	}
	
	return sum;
}

int main(void)
{
	long long int n;
	
	scanf("%lld", &n);
	
	printf("%lld\n2", MenOfPassion(n));
}