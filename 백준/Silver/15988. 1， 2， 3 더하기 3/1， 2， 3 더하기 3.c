#include <stdio.h>
#define MOD 1000000009
#define MAX 1000001

long long dp[MAX] = {-1};

int main()
{
	int T, i, n;
	
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	
	scanf("%d", &T);
	
	for(i = 4; i < MAX; i++)
	{
		dp[i] = (dp[i - 3] + dp[i - 2] + dp[i - 1]) % MOD;
	}
	
	for(i = 0; i < T; i++)
	{
		scanf("%d", &n);
		printf("%d\n", dp[n]);
	}
}