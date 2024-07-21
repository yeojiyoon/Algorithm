#include <stdio.h>

int main(void)
{
	int c;
	int n, m;
	int i, j;
	int dam;
	
	scanf("%d", &c);
	
	for(i = 0; i < c; i++)
	{
		dam = 1;
		
		scanf("%d %d", &n, &m);
		
		for(j = 0; j < n; j++)
		{
			
			dam *= m - j;
			dam /= 1 + j;
		}
		printf("%d\n", dam);	
	}
}