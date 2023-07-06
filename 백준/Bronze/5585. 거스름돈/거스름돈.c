#include <stdio.h>

int coin[] = {500, 100, 50, 10, 5, 1};

int main(void)
{
	int mon, re, i, cnt = 0;
	
	scanf("%d", &mon);
	
	re = 1000 - mon;
	
	for(i = 0; re > 0; i++)
	{
		if(coin[i] > re)
		{
			continue;
		}
		else
		{
			re -= coin[i];
			i--;
			cnt++;
		}
	}
	printf("%d\n", cnt);
	return 0;
}