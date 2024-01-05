#include <stdio.h>
#include <stdlib.h>

#define MAX 101

int DFSvisit[MAX];
int cnt = 0;
int com[MAX][MAX];

void DFS(int cur, int c)
{
	int i;
	
	if(DFSvisit[cur] == 0) //방문x 
	{
		DFSvisit[cur] = 1;
		if(cur != 1) cnt++;
		
		for(i = 0; i <= c; i++)
		{
			if(com[cur][i] == 1)
			{
				DFS(i, c);
				
			}
		}
	}
	else return;
}

int main(void)
{
	int c, n;
	int a, b, i;
	
	scanf("%d", &c); //컴퓨터 수 
	scanf("%d", &n); //네트워크 수 
	
	for(i = 0; i < c; i++)
	{
		DFSvisit[i] = 0;
	}
	
	for(i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);
		
		com[a][b] = 1;
		com[b][a] = 1;
	}
	
	DFS(1, c);
	printf("%d", cnt);
}