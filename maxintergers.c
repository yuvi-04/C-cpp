int max(int a, int b)
{
    if (a>b)
        return a;
    else
        return b;
}
int main()
{
    int x,y,z;
    printf("enter x and y ");
    scanf("%d%d",&x,&y);
    z=max(x,y);
    printf("%d",z);
}
