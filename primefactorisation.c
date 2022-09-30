int main()
{


    int p[]={2,3,5,7,11,13,17,19,23};
    int size=9;
    int n,i,quotient=0 ;
    printf("enter n");
    scanf("%d",&n);
    while(quotient!=1)
    {
        if(n%p[i]==0)
        {
            quotient=n/p[i];
            n=quotient;
            printf("%d ",p[i]);
        }
        else
            i=i+1;

    }
}
