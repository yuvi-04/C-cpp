int maxabsdiff(int a[],int n)
{
    int i,max,x;
    int b[n-1];
    for(i=0; i<n; i++)
    {
        x=a[i]-a[i+1];
        x=abs(x);
        b[i]=x;
    }
    max=b[0];
    for(i=1; i<n-1; i++)
    {
        if(b[i]>max)
        {
            max=b[i];
        }
    }
    return max;
}
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int x=maxabsdiff(a,8);
    printf("%d",x);
}
