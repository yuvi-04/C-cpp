int main(int argc,char* argv[])
{
    int sum=0,i;
    int a[argc];
    for(i=0; i<argc; i++)
    {
        a[i]=atoi(argv[i]);
    }
    for(i=0; i<argc; i++)
    {
        sum=sum+a[i];
    }
    printf("%d ",sum);
    return 0;
}
