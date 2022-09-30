struct point
{
    int x;
    int y;
};
int main()
{
    int i;
    struct point ar[5];
    for(i=0; i<5; i++)
    {
        scanf("%d%d",&ar[i].x,&ar[i].y);
        printf("%d,%d ",ar[i].x,ar[i].y);
    }
}

