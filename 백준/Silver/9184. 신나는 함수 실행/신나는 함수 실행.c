#include <stdio.h>

int dp[21][21][21];

int w(a, b, c)
{
	if( a <= 0 || b <= 0 || c <= 0) return 1;
	if( a > 20 || b > 20 || c > 20) return w(20, 20, 20);
	if(dp[a][b][c]) return dp[a][b][c];
	if( a < b && b < c) 
	{
		dp[a][b][c] = w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c);
		return dp[a][b][c];
	}
	dp[a][b][c] = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);
	return dp[a][b][c];
}

int main(void)
{
	int a, b, c;
	
	while(1)
	{	
		scanf("%d %d %d", &a, &b, &c);
		if(a==-1 && b==-1 && c==-1) break;
		
		printf("w(%d, %d, %d) = %d\n", a, b, c, w(a, b, c));
	}
}