#include <stdio.h>
#include <stdlib.h>
#define MAX 100


int main(void)
{
	int n, m;
	int i, j, k;
	int sum = 0, max = 0;
	int ary[MAX];
	
	scanf("%d %d", &n, &m);
	
	for(i = 0 ; i < n; i++)
	{
		scanf("%d", &ary[i]);
	}
	
	for(i = 0 ; i < n - 2 ; i++)
	{
		sum = 0;
		sum += ary[i];
		
		for(j = i + 1 ; j < n - 1 ; j++)
		{
			if (sum + ary[j] <= m) 
			{
				sum += ary[j];
				
				for(k = j + 1 ; k < n ; k++)
				{
					if (sum + ary[k] <= m) 
					{
						sum += ary[k];
						
						if (max < sum) max = sum;
						
						sum -= ary[k];
					}
				}
				
				sum -= ary[j];
				
			}
		}
	}
	printf("%d", max);
}