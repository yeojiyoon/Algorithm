#include <stdio.h>
#define MAX 10001

int fib(int n);
int fibonacci(int n);

int f[MAX];
int cnt = 0;

int main(void)
{
	int n;
	
	scanf("%d", &n);
	
	fib(n);
	
	printf("%d ", cnt);
	
	fibonacci(n);
}

int fib(int n) {
    if (n == 1 || n == 2)
    {
    	cnt++;
    	return 1;  
	}
    else {
    	return (fib(n - 1) + fib(n - 2));
	}
}

int fibonacci(int n) {
	f[2] = 1;
	f[1] = f[2];
	
	int i;
	int j = 0;
	
    for (i = 3; i <= n ; i++)
    {
    	f[i] = f[i - 1] + f[i - 2];
    	j++;
	}
	
	printf("%d", j);
	
    return f[n];
}