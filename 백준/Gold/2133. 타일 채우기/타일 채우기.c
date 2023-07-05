#include <stdio.h>

int main(void)
{
	long long int i, j, n;
	long long int dp[1001];
	
	scanf("%lld", &n);
	
	dp[0] = 1;
	dp[1] = 0;
	dp[2] = 3;
	
	for (i = 4; i <= n; i = i+2)
	{
		if((n%2)==1) {
			dp[n] = 0;
			break;	
		}
		else{
			dp[i] = dp[i - 2] * 3;
		
			for (j = 4; i - j >= 0; j = j + 2)
			{
				dp[i] += dp[i - j] * 2;
			}
		}
	}
	
	printf("%lld", dp[n]);
}