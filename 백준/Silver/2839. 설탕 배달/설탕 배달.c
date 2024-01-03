#include <stdio.h>
#include <stdlib.h>

int min(int a, int b)
{
	if(a < b)
		return a;
	return b;
}

int main(void)
{
	int dp[5001] = {-1};
	int n, i;
	
	scanf("%d", &n);
	
	for(i = 0; i <= n; i++)
	{
		dp[i] = -1;
	}
	
	dp[3] = 1;
	dp[5] = 1;
	
	for(i = 6; i <= n; i++)
	{
		if(dp[i-3] != -1) dp[i] = dp[i-3] + 1;
		if(dp[i-5] != -1) 
		{
			if(dp[i] != -1)
			{
				dp[i] = min(dp[i], dp[i - 5] + 1);
			}
			else dp[i] = dp[i - 5] + 1;
		}
	}
	
	printf("%d", dp[n]);
	
	return 0;
}