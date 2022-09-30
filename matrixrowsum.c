int main()
{
    int a[3][3]={4,5,1,3,6,1,4,2,4};
    int b[4];
    int i,j,sum ;
    for(i=0; i<3; i++)
    {
        sum=0;
        for(j=0; j<3; j++)
        {
            sum=sum+a[i][j];
        }
        b[i]=sum;
        printf("%d ",b[i]);
    }
}
