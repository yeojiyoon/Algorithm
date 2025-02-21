#include <stdio.h>
#define MAX 91

using namespace std;

int main(void)
{
	int n, i;
	long long int dp[MAX];
	
	scanf("%d", &n);
	
	dp[1] = 1;
	dp[2] = 1;
		
	for(i = 3 ; i <= n ; i++)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	
	printf("%lld", dp[n]);
}