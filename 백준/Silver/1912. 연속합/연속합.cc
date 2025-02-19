#include <stdio.h>
#include <cstdio>
#include <algorithm>
#define MAX 100001

using namespace std;

int main(void)
{
	int n, i, temp;
	int arr[MAX];
	int dp[MAX];
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	temp = arr[0];
	dp[0] = arr[0];
	
	for(i = 0; i < n; i++)
	{
		dp[i] = max(dp[i - 1] + arr[i], arr[i]);
		temp = max(dp[i], temp);
	}
	
	printf("%d", temp);
}