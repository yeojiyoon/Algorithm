#include <stdio.h>
#define MAX 101

long long int dp[MAX];

int main(void)
{
	int n, k, i;
	
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 1;
	dp[3] = 1;
	dp[4] = 2;
	dp[5] = 2;
	
	for(i = 6; i < MAX; i++)
	{
		dp[i] = (dp[i - 2] + dp[i - 3]);
	}
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	{
		scanf("%d", &k);
		printf("%lld\n", dp[k]);
	}
}