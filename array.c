int main()
{
    int m[5];
    int i,sum=0,max ;
    printf("enter marks of 5 students");
    for(i=0; i<5; i++)
    {
        scanf("%d",&m[i]);
    }
    for(i=0; i<5; i++)
    {
        printf(" %d ",m[i]);
    }
    printf("\n");
    for(i=0; i<5; i++)
    {
        sum=sum+m[i];
    }
    printf("SUM OF NUMBERS=%d",sum);
    printf("\n");
    max=m[0];
    for(i=1; i<5; i++)
    {
        if(m[i]>max)
        {
            max=m[i];
        }
    }
    printf("maximum marks are %d",max);



}
