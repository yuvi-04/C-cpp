void rmzeros(int a[], int n)
{
    int i,j;
    for(i=0,j=0; j<n;)
    {
        if(a[j]!=0)
        {
            a[i]=a[j];
            i++,j++;
        }
        else
            j++;
    }
}
int main()
{
    int i;
    int a[]={0,3,6,0,5,17,8,0,0,6,2,1};
    rmzeros(a,12);
    for(i=0; i<=8; i++)
    {
        printf("%d ",a[i]);
    }
}
