int intersectionarray(int a[],int n,int b[],int m,int c[])
{
    int count=0;
    int i , j, k=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(a[i]== b[j])
            {
                c[k]=a[i];
                k++;
                count=count+1;
                break;
            }
        }
    }
    return count;

}
int main()
{
    int count,i ;
    int a[]={3,6,8,4,7};
    int b[]={1,6,3};
    int c[20];
    count=intersectionarray(a,5,b,3,c);
    printf("%d ",count);
    printf("\n");
    for(i=0; i<count; i++)
    {
        printf("%d ",c[i]);
    }
}
