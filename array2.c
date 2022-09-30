int main()
{
    int a[10]={3,7,6,5,4,1,6,8,9,1};
    int b[5];
    int i;
    for(i=0; i<5; i++)
    {
        b[i]=a[2*i]+a[2*i+1];
        printf(" %d ",b[i]);
    }

}
