#include <stdio.h>
#define MAX 101

int main(void)
{
	int n, i, j;
	int maze[MAX][MAX];
	long long int cnt[MAX][MAX];
	long long int flag[MAX][MAX];
	
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= n; j++)
		{
			scanf("%d", &maze[i][j]);
			cnt[i][j] = 0;
			flag[i][j] = 0;
		}
	}

	flag[1][1] = 1;
	
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= n; j++)
		{
			if(flag[i][j] > 0)
			{
				cnt[i][j] += flag[i][j];
				flag[i][j] = 0;
				
				if(i + maze[i][j] <= n) 
				{
					flag[i + maze[i][j]][j] += cnt[i][j];
				}
				if(j + maze[i][j] <= n)
				{
					flag[i][j + maze[i][j]] += cnt[i][j];
				} 
			}
		}
	}
	
	printf("%lld", cnt[n][n]);
}