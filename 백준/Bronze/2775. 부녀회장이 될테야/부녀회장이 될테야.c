#include <stdio.h>

void DP();
int ap[15][15];

int main(void)
{
	int T, k, n, i;
	
	scanf("%d", &T);
	
	DP();
	
	for(i = 0; i < T; i++)
	{
		scanf("%d", &k);
		scanf("%d", &n);
		printf("%d\n", ap[k][n]);
	}
}

void DP()
{
	int i, j;
	for (i = 0; i < 15; i++)
	{
		ap[0][i] = i;
	}
	
	for (i = 1; i < 15; i++)
	{
		ap[i][1] = ap[i-1][1];
		for (j = 2; j < 15; j++)
		{
			ap[i][j] = ap[i][j-1] + ap[i-1][j];
		}
	}
}