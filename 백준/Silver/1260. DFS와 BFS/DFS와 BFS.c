#include <stdio.h>
#include <stdlib.h>
#define MAX 1001

int DFSvisit[MAX];
int BFSvisit[MAX];
int graph[MAX][MAX];
int queue[1001];

void DFS(int cur, int n) //재귀 
{
	int i;
	
	if(DFSvisit[cur] == 0)
	{
		printf("%d ", cur);
		DFSvisit[cur] = 1;
		for(i = 0; i <= n; i++)
		{
			if(graph[cur][i]) 
			{
				DFS(i, n);
			}
		}
	}
	else return;
}

void BFS(int cur, int n) //큐 
{
	int front = 0, rear = 0, pop, i;
	
	printf("%d ", cur);
	queue[0] = cur;
	rear++;
	BFSvisit[cur] = 1;
	
	while(front < rear)
	{
		pop = queue[front];
		front++;
		
		for(i = 1; i <= n; i++)
		{
			if(graph[pop][i] && BFSvisit[i] == 0)
			{
				printf("%d ", i);
				queue[rear] = i;
				rear++;
				BFSvisit[i] = 1;
			}
		}
	}
}

int main(void)
{
	int N, M, V;
	int i, j;
	int a, b;
	
	scanf("%d %d %d", &N, &M, &V);
	
	for(i = 0; i < M; i++)
	{
		scanf("%d %d", &a, &b);
		
		graph[a][b] = 1;
		graph[b][a] = 1;
	}
	
	for(i = 0; i < N; i++)
	{
		DFSvisit[i] = 0;
		BFSvisit[i] = 0;
	}
	
	DFS(V, N);
	printf("\n");
	BFS(V, N);
}