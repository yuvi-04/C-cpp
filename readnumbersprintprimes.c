int prime(int n)
{
    int found=0;
    int i;
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            found=1;
            break;
        }
    }
    if(found==1)
    {
        return 0;
    }
    else
        return 1;
}
int main()
{
    int i;
    int a[17];
    for(i=1; i<=17; i++)
    {
        scanf("%d",&a[i]);
        if(prime(i)==1)
        {
            printf("%d ",i);
        }
    }
}
