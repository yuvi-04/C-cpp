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
    int i,count;
    count=0;
    for(i=6; i<=50; i++)
    {
        if(prime(i)==1)
        {
            printf("%d ",i);
            count=count+1;
        }
    }
    printf("\n");
    printf(" numbers of prime numbers between 6 and 50 are %d",count);
}
