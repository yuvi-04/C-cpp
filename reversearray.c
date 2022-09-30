void reversearray(int a[],int n)
{
    int t,i;
    for(i=0; i<n/2; i++)
    {
        t=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=t;
    }
}
int main()
{
    int a[]={3,6,9,12,15,18,21};
    int i;
    reversearray(a,7);
    for(i=0; i<7; i++)
    {
        printf("%d ",a[i]);
    }
}
