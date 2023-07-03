#include <stdio.h>

int add[12];
void DP(void);

int main(void)
{
	int n, i;
	int k;
	
	scanf("%d", &n);
	DP();
	
	for( i = 0 ; i < n ; i++ )
	{
		scanf("%d", &k);
		printf("%d\n", add[k]);
	}
}

void DP(void)
{
	int i;
	
	add[1] = 1;
	add[2] = 2;
	add[3] = 4;
	
	for(i = 4; i < 12; i++)
	{
		add[i] = add[i - 1] + add[i - 2] + add[i - 3];
	}
	
	return;
}