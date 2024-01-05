#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int t, i;
	char s[101];
	int sum = 0;
	
	scanf("%d %s", &t, s);
	
	for(i = 0; i < t; i++)
	{
		sum += s[i] - '0';
	}
	
	printf("%d", sum);
	
	return 0;
}