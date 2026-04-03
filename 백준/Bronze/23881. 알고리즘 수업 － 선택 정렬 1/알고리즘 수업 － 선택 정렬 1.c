#include <stdio.h>
#define MAX 10000

void selection_sort(int* array, int size, int limit)
{
	int i, j, temp;
	int index = 0;
	int max;
	int cnt = 0;
	
	for(i = size - 1 ; i > 0 ; i--)
	{
		index = i;
		max = array[i];
		
		for(j = i - 1 ; j >= 0 ; j--)
		{
			if(array[j] > max)
			{
				max = array[j];
				index = j;
			}
		}
		
		if(index != i)
		{
			cnt++;
			
			temp = array[i];
			array[i] = array[index];
			array[index] = temp;

			if(cnt == limit) 
			{
				printf("%d %d\n", array[index], array[i]);
				break;
			}
		}
	}
	
	if(cnt != limit) printf("-1");
}

int main(void)
{
	int n, m; //m=교환횟수
	int i, j;
	int ary[MAX];
	
	scanf("%d %d", &n, &m);
	
	for (i = 0 ; i < n ; i++)
	{
		scanf("%d", &ary[i]);
	}
	
	selection_sort(ary, n, m);
}