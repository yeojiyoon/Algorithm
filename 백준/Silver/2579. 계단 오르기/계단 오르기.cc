#include <stdio.h>
#include <cstdio>
#include <algorithm>
#define MAX 301

using namespace std;

int main(void)
{
	int n, i;
	int arr[MAX];
	int dp[MAX];
	
	scanf("%d", &n);
	
	for(i = 1 ; i <= n ; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	dp[0] = 0;
	dp[1] = arr[1];
	dp[2] = arr[1] + arr[2];
	dp[3] = max(arr[1] + arr[3], arr[2] + arr[3]);
	
	for(i = 4 ; i <= n; i++)
	{
		dp[i] = max(dp[i - 3] + arr[i - 1] + arr[i], dp[i - 2] + arr[i]);
	}
	
	printf("%d", dp[n]);
}