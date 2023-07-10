#include <stdio.h>

int main(void)
{
	int n, i, v;
	int a[101];
	int cnt = 0;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	scanf("%d", &v);
	
	for(i=0; i<n; i++)
	{
		if(a[i] == v) cnt++;
	}
	
	printf("%d", cnt);
}