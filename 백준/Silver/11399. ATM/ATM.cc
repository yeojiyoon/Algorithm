#include <stdio.h>
#include <iostream>
#include <algorithm>
#define MAX 1001

using namespace std;

int arr[MAX];
int dp[MAX];

int main(void)
{
	int n, i, sum = 0;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	sort(arr, arr+n);
	
	for(i = 0; i < n; i++)
	{
		if(i==0) dp[i] = arr[i];
		else 
		{
			dp[i] = dp[i-1] + arr[i];
		}
	}
	
	for(i = 0; i < n; i++)
	{
		sum += dp[i];
	}
	
	printf("%d", sum);
}