int strint(char a[])
{
    int x,i,sum=0;
    int len=strlen(a);
    for(i=0; i<len; i++)
    {
        x=a[i]-'0';
        sum=sum*10+x;
    }
    return sum;
}
int main()
{
    char a[]="123456";
    int x=strint(a);
    printf("%d ",x);
}
