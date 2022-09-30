int main()
{
    int x=2,n,found=0 ;
    printf("enter n ");
    scanf("%d",&n);
    for(x=2; x<n && found==0; x++)
    {
        if(n%x==0)
        {
            printf("number is not prime ");
            found=1;
            break;
        }


    }
    if(found==0)
        printf("number is prime");
}
