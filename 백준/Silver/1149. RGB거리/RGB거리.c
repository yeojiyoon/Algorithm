#include <stdio.h>

void DPf(int n);
int min(int a, int b);

int ap[1001][3];
int DP[1001][3];

int main(void)
{
	int n, i, min;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	{
		scanf("%d %d %d", &ap[i][0], &ap[i][1], &ap[i][2]);
	}
	
	DPf(n);
	
	min = DP[n-1][0];
	
	for(i = 1; i < 3; i++)
	{
		if(min > DP[n-1][i])
			min = DP[n-1][i];
	}
	
	printf("%d", min);
}

void DPf(int n)
{
	int i;
	
	DP[0][0] = ap[0][0];
	DP[0][1] = ap[0][1];
	DP[0][2] = ap[0][2];
	
	for(i = 1; i < n; i++)
	{
		DP[i][0] = min(DP[i-1][1], DP[i-1][2]) + ap[i][0];
		DP[i][1] = min(DP[i-1][0], DP[i-1][2]) + ap[i][1];
		DP[i][2] = min(DP[i-1][0], DP[i-1][1]) + ap[i][2];
	}
}

int min(int a, int b)
{
	if (a >= b) return b;
	else return a;
}