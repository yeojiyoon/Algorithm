#include <stdio.h>

int max[43];

int main()
{
	int cnt = 0, i, j, tmp;
	int flag = 1;
	
	for(i = 0; i < 10; i++)
	{
		max[i] = -1;
	}
	
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &tmp);
		
		for(j = 0 ; j <= cnt ; j++)
		{
			if(max[j] == tmp%42)
			{
				flag = 0;
				break;
			}
		}
		
		if (flag)
		{
			max[cnt++] = tmp%42;
		}
		
		flag = 1;
	}
	
	printf("%d", cnt);
}