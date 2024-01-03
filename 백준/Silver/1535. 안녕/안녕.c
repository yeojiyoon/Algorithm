#include <stdio.h>
#include <stdlib.h>

int max(int a, int b)
{
	if(a > b) return a;
	return b;
}

int main(void)
{
	int dp[21][101]; //기쁨 
	int L[21]; //체력 
	int J[21]; //기쁨  
	int N, i, j;
	
	scanf("%d", &N);
	
	for(i = 1; i <= N; i++)
	{
		scanf("%d", &L[i]);
	}
	
	for(i = 1; i <= N; i++)
	{
		scanf("%d", &J[i]);
	}
	
	for(i = 0; i <= N; i++)
	{
		for(j = 0; j <= 100; j++)
		{
			dp[i][j] = 0;
		}
	}
	
	for(i = 1; i <= N; i++)
	{
		for(j = 1; j <= 100; j++)
		{
			if(j <= L[i]) dp[i][j] = dp[i-1][j]; //체력때문에 말 안 거는 경우 
			else
			{
				dp[i][j] = max(dp[i-1][j], dp[i-1][j-L[i]] + J[i]);
			}
		}
	}
	
	printf("%d", dp[N][100]);
}