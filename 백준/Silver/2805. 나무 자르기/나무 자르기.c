#include <stdio.h>
#include <stdlib.h>
#define MAX 1000001

long long int max, n;
long long HIGH = 1000000000;

void BS(long long int ary[], long long int num, long long int front, long long int rear);

int main(void)
{
	long long int m, i;
	long long int ary[MAX];
	
	max = 0;
	
	scanf("%lld %lld", &n, &m);
	
	for(i = 0; i < n; i++)
	{
		scanf("%lld", &ary[i]);
	}
	
	BS(ary, m, 0, HIGH);
	
	printf("%lld", max);
}

void BS(long long int ary[], long long int num, long long int front, long long int rear)
{	
	if (front>rear) {
		return;
	}
	
	long long int i, sum = 0;
	long long int mid = (front + rear) / 2;
	
	for(i = 0; i < n; i++)
	{
		if(ary[i] > mid)
		{
			sum += ary[i] - mid;
		}
	}
	
	if(sum >= num)
	{
		if(max < mid) max = mid;
		BS(ary, num, mid + 1, rear);
	}
	
	if(sum < num)
	{
		BS(ary, num, front, mid - 1);
	}
}