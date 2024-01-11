#include <stdio.h>
#include <stdlib.h>

void star(int i, int j, int n)
{
	if((i / n) % 3 == 1 && (j / n) % 3 == 1)
	{
		printf(" ");
	}
	else
	{
		if(n / 3 == 0) printf("*");
		else star(i, j, n / 3);
	}
}

int main(void)
{
	int n, i, j;
	scanf("%d", &n);
	i = 0;
	
	while(i < n)
	{
		j = 0;
		
		while(j < n)
		{
			star(i, j, n);
			j++;
		}
		printf("\n");
		i++;
	}
}