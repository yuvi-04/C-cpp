int factorial(int n)
{
    int x;
    int product=1;
    for(x=n; x>=1; x--)
    {
        product=product*x;
    }
    return product;
}
int main()
{
    int i,j;
    printf("enter i");
    scanf("%d",&i);
    j=factorial(i);
    printf(" %d ",j);
}



