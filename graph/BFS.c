// Breadth First Search
#include<stdio.h>
#include<stdlib.h>
#define max 100

int visitedNode[max];
int graph[max][max];
int queue[max];
int frount = 0;
int rear = 0;
int n;

void enQueue(int node){
    return queue[rear++] = node;
}

int dqueue(){
    return queue[frount++];
}

int isEmpty(){
    return frount == rear;
}

void bfs(int node){

    enQueue(node);
    visitedNode[node] = 1;
    while (!isEmpty()){
        int node = dqueue();
        printf("%d\n",node);
        for (int i = 1 ; i <= n ; i++){
            if (graph[node][i] == 1 && !visitedNode[i]){
                enQueue(i);
                visitedNode[i] = 1;
            }   
        }
    }
    
}

int main(){

    int edges;
    printf("Enter number of nodes : ");
    scanf("%d",&n);

    printf("Enter number of edges : ");
    scanf("%d",&edges);

    for (int i = 1 ; i <= n ; i++){
        visitedNode[i] = 0;
        for (int j = 1 ; j <= n ; j++){
            graph[i][j]=0;
        }
    }

    int a,b;
    printf("Enter Nodes : \n");
    for (int i = 1 ; i <= n ; i++){
        scanf("%d %d",&a,&b);
        graph[a][b] = 1;
        graph[b][a] = 1;
    }
    printf("BFS traversal : \n");
    bfs(1);
}