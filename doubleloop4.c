int main()
{
    int i,j,s=0;
    for(i=5; i>=1; i--)
    {
        for(j=1; j<=4; j++)
        {
            s=s+i+j;
        }

    }
    printf(" %d,%d,%d",i,j,s);
}

