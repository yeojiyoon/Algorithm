#include <stdio.h>
#define MAX 91

long long int memo[MAX] = {-1};

long long int fibbonachi(int n);

int main(void)
{
	int n;
	
	scanf("%d", &n);
	
	printf("%lld", fibbonachi(n));
}

long long int fibbonachi(int n)
{
	if(n == 0 || n == 1) {
		memo[n] = n;
		return n;
	}
	else{	
		if(memo[n] > 0) return memo[n];
		else memo[n] = fibbonachi(n - 1) + fibbonachi(n - 2);
		
		return memo[n];
	}
}