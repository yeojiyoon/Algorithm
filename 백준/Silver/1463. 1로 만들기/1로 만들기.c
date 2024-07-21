#include <stdio.h>
#define MAX 1000001

int main(void)
{
	int n, i;
	
	scanf("%d", &n);
	
	int arr[MAX];
	
	arr[1] = 0;
	arr[2] = 1;
	arr[3] = 1;
	
	for(i = 4; i <= n; i++)
	{
		arr[i] = arr[i - 1] + 1;
		
		if(i % 2 == 0)
		{
			if (arr[i] > arr[i / 2] + 1)
			{
				arr[i] = arr[i / 2] + 1;
			}
		}
		
		if(i % 3 == 0)
		{
			if (arr[i] > arr[i / 3] + 1)
			{
				arr[i] = arr[i / 3] + 1;
			}
		}
	}
	
	printf("%d", arr[n]);
}