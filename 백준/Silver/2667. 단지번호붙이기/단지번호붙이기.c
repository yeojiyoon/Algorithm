#include <stdio.h>
#include <stdlib.h>
#define MAX 26
#define MAX2 680

int house[MAX][MAX];
int visit[MAX][MAX];
int cnt = 0;
int cnt2 = 0;

int compare(const void *a , const void *b) 
{ 
     if( *(int*)a > *(int*)b )

        return 1;

    else if( *(int*)a < *(int*)b )

        return -1;

    else

        return 0;
}

void DFS(int n, int m, int l) // 위, 오른쪽, 아래, 왼쪽 조사 
{
	if(m < 0) return;
	if(m >= n) return;
	if(l < 0) return;
	if(l >= n) return;
	
	cnt2++;
	if(m - 1 >= 0) //상
	{
		if(house[m - 1][l] == 1 && visit[m - 1][l] == 0)
		{
			visit[m - 1][l] = 1;
			DFS(n, m - 1, l);
		}
	}
	
	if(m + 1 < n) //하 
	{
		if(house[m + 1][l] == 1 && visit[m + 1][l] == 0)
		{
			visit[m + 1][l] = 1;
			DFS(n, m + 1, l);
		}
	}
	
	if(l - 1 >= 0) //좌 
	{
		if(house[m][l - 1] == 1 && visit[m][l - 1] == 0)
		{
			visit[m][l - 1] = 1;
			DFS(n, m, l - 1);
		}
	}
	
	if(l + 1 < n)
	{
		if(house[m][l + 1] == 1 && visit[m][l + 1] == 0)
		{
			visit[m][l + 1] = 1;
			DFS(n, m, l + 1);
		}
	}
}

int main(void)
{
	int i, j, n;
	scanf("%d", &n);
	
	char str[MAX];
	int count[MAX2];
	
	for(i = 0; i < n; i++)
	{
		scanf("%s", str);
		
		for(j = 0; j < n; j++)
		{
			house[i][j] = str[j] - '0';
			visit[i][j] = 0;
		}
	}	
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(house[i][j] == 1 && visit[i][j] == 0)
			{
				visit[i][j] = 1;
				DFS(n, i, j);
				count[cnt] = cnt2;
				cnt++;
				cnt2 = 0;
			}
		}
	}
	
	printf("%d\n", cnt);
	
	
	qsort(count, cnt, sizeof(count[0]), compare);
	
	for(i = 0; i < cnt; i++) 
	{
		printf("%d\n", count[i]);
	}
}