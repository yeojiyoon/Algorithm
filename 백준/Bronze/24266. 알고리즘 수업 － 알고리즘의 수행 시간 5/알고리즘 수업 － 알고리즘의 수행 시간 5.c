#include <stdio.h>
#include <stdlib.h>

long long int MenOfPassion(long long int n)
{
	long long int i, j, k, sum = 0;
	
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			for (k = 1; k <= n; k++)
				sum++;
		}			
	}
	
	return sum;
}

int main(void)
{
	long long int n;
	
	scanf("%lld", &n);
	
	printf("%lld\n3", MenOfPassion(n));
}