// depth first search
#include <stdio.h>
#include <stdlib.h>
#define max 100

int graph[max][max];
int visitedNodes[max];
int n;

void dfs(int node)
{
    printf("%d\n", node);
    visitedNodes[node] = 1;
    for (int i = 1 ; i <= n; i++){
        if (graph[node][i] == 1 && !visitedNodes[i]){
            dfs(i);
        }
    }
}

int main()
{

    int edges;
    printf("Enter number of nodes : ");
    scanf("%d", &n);

    printf("Enter number of Edges : ");
    scanf("%d", &edges);

    for (int i = 1; i <= n; i++){
        visitedNodes[i] = 0;
        for (int j = 1; j <= n; j++){
            graph[i][j] = 0;
        }
    }
    int a, b;
    printf("Enter Nodes : ");
    for (int i = 0; i < edges; i++)
    {
        scanf("%d %d", &a, &b);
        graph[a][b] = 1;
        graph[b][a] = 1;
    }

    // jo aapde starting node aapvo hoi to...

    // int start;
    // printf("Enter starting Node : ");
    // scanf("%d",&start);
    // dfs(start);

    printf("DFS Travarsel : ");
    dfs(1);

    return 0;
}