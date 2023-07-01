#include <stdio.h>
#include <stdlib.h>
#define MAX 100000

int BS(int ary[], int num, int first, int last);
int compare(const void *a, const void *b);

int main(void)
{
    int n, m, i, j, temp;
	
    scanf("%d", &n);
    int *A = (int*)malloc(n * sizeof(int));
    for(i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    scanf("%d", &m);  
    int *B = (int*)malloc(m * sizeof(int));
    for(i = 0; i < m; i++)
    {
        scanf("%d", &B[i]);
    }

    qsort(A, n, sizeof(int), compare);
    
    //binary search
    for (i = 0; i < m; i++){
    	printf("%d\n", BS(A, B[i], 0, n - 1));
	}
}

int compare(const void *a, const void *b)
{
    return *(int*)a > *(int*)b ? 1 : (*(int*)a < *(int*)b ? -1 : 0);
}


int BS(int ary[], int num, int first, int last)
{
	int mid;

	if(first >= last) return 0;
	else mid = (first + last) / 2;
	
	if(ary[first] == num) return 1;
	if(ary[last] == num) return 1;
	if(ary[mid] == num) return 1;
	
	if (ary[mid] > num)
	{
		BS(ary, num, first, mid - 1); 
	}
	else BS(ary, num, mid + 1, last);
}