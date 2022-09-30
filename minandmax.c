void minandmax(int a[],int n,int* pmin,int* pmax)
{
    int i,max=a[0],min=a[0];
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
    *pmin=min;
    *pmax=max;
}
int main()
{
    int a[]={10,20,45,21,32,58,79,63};
    int min;
    int max;
    minandmax(a,8,&min,&max);
    printf("%d \n",min);
    printf("%d",max);
}
