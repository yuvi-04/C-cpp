int searcharinar(int a[],int n,int b[],int m)
{
    int i,j,count=0;
    for(i=0; i<n; i++)
    {
        count=count+1;
        if(a[i]==b[0])
        {
            for(j=1; j<m; j++)
            {
                if(a[i+j]==b[j])
                {

                }
                else
                    break;
            }
            if(j==m)
            {
                return i;
            }
        }
    }
    return -1;
}
int main()
{
    int a[]={2,3,4,5,6,7,8,3,6,2,9,7,6,4,8,6,5};
    int b[]={3,6,2,1,5,8,3};
    int x;
    x=searcharinar(a,15,b,7);
    printf("%d ",x);
}
