int main()
{
    int a[10]={1,2,3,4,5,6,57,8,9,10};
    int max;
    int i;
    int t,position,x ;
    int n=10;
    max=a[0];
    for(i=0; i<10; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            position=i;
        }
    }
    printf("POSITION OF MAX NUMBER = %d",position);
    printf("\n");
    t=a[position];
    a[position]=a[n-1];
    a[n-1]=t;

    for(i=0; i<10; i++)
    {
        printf(" %d ",a[i]);
    }
}
