struct pair
{
    int min,max;
};
struct pair minmax(int a[],int n)
{
    int i,min=a[0],max=a[0];
    struct pair p;
    for(i=0; i<n; i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    p.min=min;
    p.max=max;
    return p;
};
int main()
{
    int a[]={10,12,3,54,87,956,36,85,456,212,369};
    struct pair p;
    p=minmax(a,11);
    printf("%d \n",p.min);
    printf("%d ",p.max);
}
