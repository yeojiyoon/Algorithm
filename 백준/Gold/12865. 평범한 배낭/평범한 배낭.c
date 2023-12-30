#include <stdio.h>
#include <stdlib.h>
#define MAX 100001

int max(int a, int b)
{
	if(a > b) return a;
	else return b;
}

int main(void)
{
	int value[101];
	int weight[101];
	int dp[101][MAX];
	
	int i, j, N, K;
	
	scanf("%d %d", &N, &K);
	
	for(i = 1; i <= N; i++)
	{
		scanf("%d %d", &weight[i], &value[i]);
		dp[0][0] = 0;
		dp[i][0] = 0;
	}
	
	for(i = 1; i <= N; i++)
	{
		for(j = 0; j <= K; j++)
		{
			if (weight[i] > j) dp[i][j] = dp[i-1][j];
			else
			{
				dp[i][j] = max(dp[i-1][j], dp[i-1][j-weight[i]]+value[i]);
			} 
		}
	}
	
	printf("%d", dp[N][K]);
}