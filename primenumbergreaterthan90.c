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
    int i,found;
    printf("enter i");
    scanf("%d",&i);
    for(;i>1;i++)
    {
        if(prime(i)==1)
        {
            found=1;
            break;
        }
    }
    printf("%d ",i);
}
