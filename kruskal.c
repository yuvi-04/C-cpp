struct Edge
{
    int src,dest;
};
struct Graph
{
    int V,E;
    struct Edge* edge;
};
struct Graph* createGraph(int V,int E)
{
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->V = V;
    graph->E = E;
    graph->edge = (struct Edge*)malloc(graph->E * sizeof(struct Edge));

    return graph;
};
int find(int parent[],int i)
{
    if(parent[i] == -1)
        return i;
    return find(parent,parent[i]);
}
void Union(int parent[],int x,int y)
{
    parent[x] = y;
}
void isCycle(struct Graph* graph)
{
    int i,x,y;
    int *parent = (int*)malloc(graph->V * sizeof(int));
    memset(parent,-1,sizeof(int)*graph->V);
    printf("\n");
    for(i=0; i<graph->E; i++)
    {
        x = find(parent,graph->edge[i].src);
        y = find(parent,graph->edge[i].dest);
        if(x == y){}
        else Union(parent,x,y);
    }
    for(i=0; i<graph->E; i++)
    {
        printf("%d ",parent[i]);
    }
}
void kruskal(struct Graph *graph)
{
    isCycle(graph);
}
int main()
{
    int V,E,x,y,i;
    scanf("%d%d",&V,&E);
    struct Graph *graph = createGraph(V,E);
    for(i=0; i<E; i++)
    {
        scanf("%d",&x);
        graph->edge[i].src = x;
        scanf("%d",&y);
        graph->edge[i].dest = y;
    }
    kruskal(graph);
}
