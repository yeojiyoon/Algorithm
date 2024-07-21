#include <stdio.h>

int main(void)
{
	long long int n, i;
	scanf("%lld", &n);
	
	for(i = 1; i <= n; i *= 2) ;
	
	if(n==1) {
		printf("1");
	}
	
	else printf("%lld", i/2);
}