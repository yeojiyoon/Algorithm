#include <stdio.h>
#include <string.h>

int main()
{
	char s[101];
	int len, i, flag;
	flag = 1;
	
	scanf("%s", s);
	len = strlen(s);
	
	for (i = 0; i <= len / 2; i++)
	{
		if(s[i] != s[len-i-1])
		{
			flag = 0;
			break;
		}
	}
	
	printf("%d\n", flag);
}