#include <stdio.h>
#include <cstdio>
#include <algorithm>
#define MAX 405
#define MOD 1000000000

using namespace std;

int main(void)
{
	int n, k;
	int i, j;
	int dp[MAX][MAX];
	
	dp[0][0] = 1;
	dp[1][0] = 1;
	dp[1][1] = 1;
	
	scanf("%d %d", &n, &k);
	
	for(i = 2 ; i < n + k ; i++)
	{
		for(j = 0 ; j <= i ; j++)
		{
			if(j == 0)
			{
				dp[i][j] = dp[i - 1][j]%MOD;
			}
			
			else if(j == i)
			{
				dp[i][j] = dp[i - 1][j - 1]%MOD;
			}
			
			else
			{
				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j])%MOD;
			}
		}
	}
	
	printf("%d", dp[n + k - 1][n]);
}