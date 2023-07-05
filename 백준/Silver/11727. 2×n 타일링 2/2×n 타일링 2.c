#include <stdio.h>

int main(void)
{
	long long int i, n;
	long long int dp[1001];
	
	scanf("%lld", &n);
	
	dp[1] = 1;
	dp[2] = 3;
	
	for (i = 3; i <= n; i++)
	{
		dp[i] = (dp[i - 1] + 2*dp[i - 2])%10007;
	}
	
	printf("%lld", dp[n]);
}