#define MAX 20
void populatemagicsquare(int a[MAX][MAX],int n)
{
    int i=n/2,j=0,count=0,x;
    for(x=1; x<=n*n; x++)
    {
        a[i][j]=x;
        count++;
        if(count==n)
        {
            j=j+1;
            count=0;
            continue;
        }
        if(i+1==n)
        {
            i=i-n+1;
        }
        else
            i=i+1;
        if(j-1<0)
        {
            j=j+n-1;
        }
        else
            j=j-1;

    }

}
int main()
{
    int a[MAX][MAX];
    int n,i,j,count=0;
    scanf("%d",&n);
    if(n>MAX||n%2==0)
    {
        printf("error");
        return 0;
    }
    populatemagicsquare(a,n);
    for(i=0,j=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%6d",a[i][j]);
            count++;
            if(count==n)
            {
                printf("\n");
                count=0;
            }
        }
    }
}
