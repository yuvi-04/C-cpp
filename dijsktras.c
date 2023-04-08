#include<limits.h>
#include<stdbool.h>
#define V 9
int minDistance(int dist[],bool sptSet[])
{
    int min = INT_MAX, min_index;
    for(int v = 0; v<V; v++)
    {
        if(sptSet[v] == false && dist[v] <= min)
        {
            min = dist[v];
            min_index = v;
        }
    }
    return min_index;
}
void printSolution(int dist[])
{
    printf("vertex \t distance from source\n");
    for(int i=0; i<V; i++)
    {
        printf("%d\t\t%d\n",i,dist[i]);
    }
}
void dijsktra(int graph[V][V],int src)
{
    int dist[V];
    bool sptSet[V];
    int via[V];
    for(int i=0; i<V; i++)
    {
        dist[i] = INT_MAX;
        sptSet[i] = false;
    }
    dist[src] = 0;
    via[src] = src;
    for(int count = 0; count<V-1; count++)
    {
        int u = minDistance(dist,sptSet);
        sptSet[u] = true;


        for(int v = 0; v<V; v++)
        {
            //v is not in set and u->v != 0 && new addition gives some short route
            //stpSet[v] == 0  graph[u][v] !=0
            if(!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && (dist[u] + graph[u][v]) < dist[v])
            {
                via[v] = u;
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }
    printSolution(dist);
    printf("\n");
    for(int i = 0; i<V; i++)
    {
        printf("%d ",i);
    }
    printf("\n");
    for(int i = 0; i<V; i++)
    {
        printf("%d ",via[i]);
    }
}
int main()
{
    int graph[V][V] = { {0,4,0,0,0,0,0,8,0},
                        {4,0,8,0,0,0,0,11,0},
                        {0,8,0,7,0,4,0,0,2},
                        {0,0,7,0,9,14,0,0,0},
                        {0,0,0,9,0,10,0,0,0},
                        {0,0,4,14,10,0,2,0,0},
                        {0,0,0,0,0,2,0,1,6},
                        {8,11,0,0,0,0,1,0,7},
                        {0,0,2,0,0,0,6,7,0} };
    dijsktra(graph,1);
}
