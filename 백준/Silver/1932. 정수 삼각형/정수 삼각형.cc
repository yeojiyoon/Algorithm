#include <stdio.h>
#include <iostream>
#include <algorithm>
#define MAX 501

using namespace std;

int main(void)
{
	int n, i, j;
	int arr[MAX][MAX];
	int dp[MAX][MAX];
	int sum = 0;
	
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= i; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	
	dp[1][1] = arr[1][1];
	
	for(i = 2; i <= n; i++)
	{
		for(j = 1; j <= i; j++)
		{
			if((i - 1) == 1)
			{
				dp[i][j] = dp[1][1] + arr[i][j];
			}
			else if(j == 1)
			{
				dp[i][j] = dp[i - 1][j] + arr[i][j];
			}
			else
			{
				dp[i][j] = max(dp[i - 1][j - 1] + arr[i][j], dp[i - 1][j] + arr[i][j]);
			}
		}
	}
	
	for(i = 1; i <= n; i++)
	{
		if(sum < dp[n][i]) sum = dp[n][i];
	}
	
	printf("%d", sum);
}