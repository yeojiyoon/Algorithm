#include <stdio.h>

typedef long long int ll;

int func(int a, int b, int c)
{
	if(b > 1)
	{
		ll result = func(a, b / 2, c);
		if (b % 2) return ((result * result) % c * a) % c;
		else return (result * result) % c;
	}
	else return a;
}

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	int result = func(a % c, b, c);
	printf("%d\n", result);
	return 0;
}