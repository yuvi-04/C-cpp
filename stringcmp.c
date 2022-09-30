int strcmp1(char a[],char b[])
{
    int i;
    for(i=0; i<strlen(a); i++)
    {
        if(a[i]!=b[i])
        {
            return a[i]-b[i];
        }
    }
}
int main()
{
    char a[]="apple";
    char b[]="aptech";
    int x;
    x=strcmp1(a,b);
    printf("%d",x);
}
