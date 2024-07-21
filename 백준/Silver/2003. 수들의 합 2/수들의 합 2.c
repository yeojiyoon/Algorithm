#include <stdio.h>
#define MAX 100000

int seq[MAX];

int max(int a, int b)
{
	if(a > b) return a;
	return b;
}

int main(void)
{
	int n, m;
	int i, j, sum = 0;
	int cnt = 0;
	
	scanf("%d %d", &n, &m);
	
	for(i = 0; i < n; i++)
	{
		scanf("%d", &seq[i]);
	}
	
	sum = seq[0];
	
	for(i = 0; i < n; i++)
	{
		sum = 0;
		for(j = i; j < n; j++)
		{
			sum += seq[j];
			if(sum == m)
			{
				cnt++;
				break;
			}
		}
	}
	
	printf("%d", cnt);
}