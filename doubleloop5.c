int main()
{
    int i,j,s=0;
    for(i=3; i>=0; i--)
    {
        for(j=2; i+j>1; j--)
        {
            s=s+i+j;
        }
    }
    printf("%d,%d,%d",i,j,s);
}
