#include <stdio.h>
#include <string.h>

int main()
{
	int n, m, i, k, l;
	int a[1000002], b[1000002];
	int sum[2000002];
	
	k = 0;
	l = 0;
	
	scanf("%d %d", &n, &m);
	
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(i = 0; i < m; i++)
	{
		scanf("%d", &b[i]);
	}
	
	while((k < n) && (l < m))
	{
		if(a[k] <= b[l])
		{
			sum[k+l] = a[k];
			k++;
		}
		else
		{
			sum[k+l] = b[l];
			l++;
		}
	} 
	
	if(k < n)
	{
		while(k < n)
		{
			sum[k+l] = a[k];
			k++;
		}
	}
	else
	{
		while(l < m)
		{
			sum[k+l] = b[l];
			l++;
		}
	}
	
	for(i = 0; i < n + m; i++)
	{
		printf("%d ", sum[i]);
	}
}