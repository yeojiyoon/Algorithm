#include <stdio.h>
#include <string.h>

int main()
{
	long long S = 0;
	int N = 0;
	
	scanf("%lld", &S);
	
	while(S > 0)
	{
		N++;
		S = S - N;
	}
	
	if(S < 0)
	{
		N--;
	}
	
	printf("%d\n", N);
	return 0;
}