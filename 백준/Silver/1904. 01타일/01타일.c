#include <stdio.h>
#define MAX 1000001

int dp[MAX];

int main(void)
{
	int n, i;
	
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;
	
	scanf("%d", &n);
	
	for(i = 3; i <= n; i++)
	{
		dp[i] = (dp[i - 1] + dp[i - 2])%15746;
	}
	
	printf("%d", dp[n]);
}