int main()
{
    int i,j,sp,countsp=8;
    for(i=1; i<=5; i++)
    {
        for(sp=1; sp<=countsp; sp++)
        {
            printf(" ");

        }
        countsp=countsp-2;
        for(j=1; j<=i; j++)
        {
            printf("%d ",j);

        }
        printf("\n");
    }
}
