#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 10002
#define MAXC 22

using namespace std;

int main(void)
{
	int N, n, I, i, j, m;
	int dp[MAX];
	int coin[MAXC];
	
	scanf("%d", &N);
	
	for(I = 0; I < N; I++)
	{
		
		for(i = 0; i < MAX; i++)
		{
			dp[i] = 0;
		}
		
		for(i = 0; i < MAXC; i++)
		{
			coin[i] = 0;
		}
		
		scanf("%d", &n);
	
		for(i = 0; i < n; i++)
		{
			scanf("%d", &coin[i]);
		}
		
		scanf("%d", &m);
		
		dp[0] = 1;
		for(i = 0; i < n; i++)
		{
			for(j = coin[i]; j <= m; j++)
			{
				dp[j] += dp[j - coin[i]];
			}
		}
		
		printf("%d\n", dp[m]);
	}
}