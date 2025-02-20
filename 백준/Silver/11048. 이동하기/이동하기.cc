#include <stdio.h>
#define MAX 1001

int max(int n, int m)
{
	if(n > m) return n;
	return m;
}

int main(void)
{
	int n, m;
	int i, j;
	int maze[MAX][MAX];
	int dp[MAX][MAX];
	
	scanf("%d %d", &n, &m);
	
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= m; j++)
		{
			scanf("%d", &maze[i][j]);
		}
	}
	
	dp[1][1] = maze[1][1];
	
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= m; j++)
		{
			if(i == 1 && j == 1) continue;
			else if(i == 1) dp[i][j] = dp[i][j - 1] + maze[i][j];
			else if(j == 1) dp[i][j] = dp[i - 1][j] + maze[i][j];
			
			else
			{
				dp[i][j] = max(dp[i - 1][j] + maze[i][j], dp[i][j - 1] + maze[i][j]);
			}
		}
	}
	
	printf("%d", dp[n][m]);
}