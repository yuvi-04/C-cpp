int main()
{
    int a[10]={3,6,8,9,2,5,7,5,1,4};
    int t;
    int i;
    for(i=0; i<5; i++)
    {
        t=a[i];
        a[i]=a[9-i];
        a[9-i]=t;
    }
    for(i=0; i<10; i++)
    {
        printf(" %d ",a[i]);
    }
}
