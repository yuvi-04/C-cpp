void printar(int a[])
{
    int i;
    for(i=0; a[i]!=0; i++)
    {
        printf("%d ",a[i]);
        if(a[i]==0)
        {
            break;
        }
    }

}
int lengthar(int a[])
{
    int x,count=0;
    for(x=0; a[x]!=0; x++)
    {
        count=count+1;
    }
    return count;
}
void copyar(int a[],int b[])
{
    int j;
    for (j=0; j>-1; j++)
    {
        a[j]=b[j];
        if(b[j]==0)
        {
            break;
        }
    }
}
void concatar(int a[], int b[])
{
    int i,count=0;
    for(i=0; a[i]!=0; i++)
    {
        count=count+1;
    }
    a[count]=b[0];
    for(i=1; i>0; i++)
    {
        a[count+i]=b[i];
        if(b[i]==0)
        {
            break;
        }
    }

}
